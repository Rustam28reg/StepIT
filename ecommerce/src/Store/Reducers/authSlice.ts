import { AuthData } from '@/Data/Models/Auth.model';
import { LoginDTO, RegisterDTO } from '@/Data/DTOs/Auth.DTO';
import { createSlice, PayloadAction } from '@reduxjs/toolkit';

const initialState: AuthData = {
    LoginData: {
        Email: '',
        Password: '',
    },
    RegisterData: {
        Username: '',
        Email: '',
        Password: '',
        ConfirmPassword: '',
    },
    IsRegister: false,
    IsLoading: false,
    ShowPassword: false,
};

const authSlice = createSlice({
    name: `auth`,
    initialState,
    reducers: {
        setLoginData: (state, action: PayloadAction<LoginDTO>) => {
            state.LoginData = action.payload;
        },
        setRegisterData: (state, action: PayloadAction<RegisterDTO>) => {
            state.RegisterData = action.payload;
        },
        setIsRegister: (state, action: PayloadAction<boolean>) => {
            state.IsRegister = action.payload;
        },
        setIsLoading: (state, action: PayloadAction<boolean>) => {
            state.IsLoading = action.payload;
        },
        setShowPassword: (state, action: PayloadAction<boolean>) => {
            state.ShowPassword = action.payload;
        }
    },
    // extraReducers: (builder) => {
    // builder
    // .addCase(LoginUser.pending, (state) => {
    //     state.IsLoading = true;
    // })
    // .addCase(LoginUser.fulfilled, (state, action) => {
    //     state.IsLoading = false;
    //     state.IsRegister = false;

    //     if ((action.payload as { accessToken: string }).accessToken) {
    //         localStorage.setItem('accessToken', (action.payload as { accessToken: string }).accessToken);
    //     }

    //     toast.success('Sizi yenidən görməyə şadıq!');
    // })
    // .addCase(LoginUser.rejected, (state) => {
    //     state.IsLoading = false;
    // })
    // .addCase(RegisterUser.pending, (state) => {
    //     state.IsLoading = true;
    // })
    // .addCase(RegisterUser.fulfilled, (state) => {
    //     state.IsLoading = false;
    //     state.IsRegister = false;
    // })
    // .addCase(RegisterUser.rejected, (state) => {
    //     state.IsLoading = false;
    // })
    // }
});

export const { setLoginData, setRegisterData, setIsRegister, setIsLoading, setShowPassword } = authSlice.actions;
export default authSlice.reducer;