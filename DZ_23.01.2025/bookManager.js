const { readFile, writeFile } = require('./fileManager');
const filePath = './books.json';

async function createBook(title, author, year, genre) {
    const books = await readFile(filePath);
    const newBook = {
        id: books.length ? books[books.length - 1].id + 1 : 1, // Уникальный ID
        title,
        author,
        year,
        genre,
    };
    books.push(newBook);
    await writeFile(filePath, books);
    return newBook;
}

async function readBooks() {
    return await readFile(filePath);
}

async function updateBook(id, updatedData) {
    const books = await readFile(filePath);
    const bookIndex = books.findIndex((book) => book.id === id);
    if (bookIndex === -1) throw new Error('Книга не найдена');
    books[bookIndex] = { ...books[bookIndex], ...updatedData };
    await writeFile(filePath, books);
    return books[bookIndex];
}

async function deleteBook(id) {
    const books = await readFile(filePath);
    const filteredBooks = books.filter((book) => book.id !== id);
    if (books.length === filteredBooks.length) throw new Error('Книга не найдена');
    await writeFile(filePath, filteredBooks);
}

module.exports = { createBook, readBooks, updateBook, deleteBook };
