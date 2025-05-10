import { createSlice, PayloadAction } from '@reduxjs/toolkit';
import chanelImg from '@/Assets/Products/chanel.png';
import macbookImg from '@/Assets/Products/macbook.png';
import manMixImg from '@/Assets/Products/man-mix.png';
import nikeImg from '@/Assets/Products/nike.png';
import watchImg from '@/Assets/Products/watch.png';
import womanMixImg from '@/Assets/Products/woman-mix.png';

interface Product {
    id: number;
    name: string;
    price: number;
    imageUrl: string;
}

interface CartItem extends Product {
    quantity: number;
}

interface ProductsState {
    searchTerm: string;
    products: Product[];
    filteredProducts: Product[];
    cartOpen: boolean;
    cartItems: CartItem[];
}

const initialState: ProductsState = {
    searchTerm: '',
    products: [
        { id: 1, name: 'Chanel', price: 36, imageUrl: chanelImg.src },
        { id: 2, name: 'Mac Book', price: 2000, imageUrl: macbookImg.src },
        { id: 3, name: 'Man Mix', price: 12, imageUrl: manMixImg.src },
        { id: 4, name: 'Nike', price: 120, imageUrl: nikeImg.src },
        { id: 5, name: 'Watch', price: 80, imageUrl: watchImg.src },
        { id: 6, name: 'Woman Mix', price: 20, imageUrl: womanMixImg.src },
    ],
    filteredProducts: [],
    cartOpen: false,
    cartItems: [],
};

function filterProducts(products: Product[], searchTerm: string): Product[] {
    return products.filter(product =>
        product.name.toLowerCase().includes(searchTerm.toLowerCase())
    );
}

const productsSlice = createSlice({
    name: 'products',
    initialState,
    reducers: {
        setSearchTerm: (state, action: PayloadAction<string>) => {
            state.searchTerm = action.payload;
            state.filteredProducts = filterProducts(state.products, state.searchTerm);
        },
        toggleCart: (state) => {
            state.cartOpen = !state.cartOpen;
        },
        addToCart: (state, action: PayloadAction<Product>) => {
            const product = action.payload;
            const existingItem = state.cartItems.find(item => item.id === product.id);

            if (existingItem) {
                existingItem.quantity += 1;
            } else {
                state.cartItems.push({ ...product, quantity: 1 });
            }
        },
        removeFromCart: (state, action: PayloadAction<number>) => {
            const productId = action.payload;
            state.cartItems = state.cartItems.filter(item => item.id !== productId);
        },
        incrementQuantity: (state, action: PayloadAction<number>) => {
            const productId = action.payload;
            const item = state.cartItems.find(item => item.id === productId);
            if (item) {
                item.quantity += 1;
            }
        },
        decrementQuantity: (state, action: PayloadAction<number>) => {
            const productId = action.payload;
            const item = state.cartItems.find(item => item.id === productId);
            if (item) {
                item.quantity = item.quantity > 1 ? item.quantity - 1 : 1;
            }
        },
    },
    extraReducers: (builder) => {
        builder.addDefaultCase((state: ProductsState) => {
            state.filteredProducts = filterProducts(state.products, state.searchTerm);
        });
    },
});

export const getTotalPrice = (state: { catalog: ProductsState }): number =>
    state.catalog.cartItems.reduce((total, item) => total + item.price * item.quantity, 0);

export const {
    setSearchTerm,
    toggleCart,
    addToCart,
    removeFromCart,
    incrementQuantity,
    decrementQuantity
} = productsSlice.actions;

export const selectCatalog = (state: { catalog: ProductsState }) => state.catalog;

export default productsSlice.reducer;