const Book = require('./models/book');

async function createBook(title, author, year, genre) {
    const newBook = new Book({ title, author, year, genre });
    await newBook.save();
    return newBook;
}

async function readBooks() {
    return await Book.find({});
}

async function updateBook(id, updatedData) {
    const book = await Book.findByIdAndUpdate(id, updatedData, { new: true });
    if (!book) throw new Error('Книга не найдена');
    return book;
}

async function deleteBook(id) {
    const book = await Book.findByIdAndDelete(id);
    if (!book) throw new Error('Книга не найдена');
}

module.exports = { createBook, readBooks, updateBook, deleteBook };