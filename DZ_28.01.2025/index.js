const readline = require('readline');
const { createBook, readBooks, updateBook, deleteBook } = require('./bookManager');
const connectDB = require('./db');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
});

function askQuestion(query) {
    return new Promise((resolve) => rl.question(query, resolve));
}

async function main() {
    await connectDB(); // Подключение к базе данных
    console.log('Добро пожаловать в библиотеку!');
    while (true) {
        console.log(`
Выберите действие:
1. Добавить книгу
2. Посмотреть все книги
3. Обновить книгу
4. Удалить книгу
5. Выйти
        `);

        const choice = await askQuestion('Ваш выбор: ');

        try {
            switch (choice) {
                case '1': {
                    const title = await askQuestion('Введите название книги: ');
                    const author = await askQuestion('Введите автора книги: ');
                    const year = await askQuestion('Введите год издания: ');
                    const genre = await askQuestion('Введите жанр книги: ');

                    const newBook = await createBook(title, author, parseInt(year, 10), genre);
                    console.log('Книга добавлена:', newBook);
                    break;
                }

                case '2': {
                    const books = await readBooks();
                    console.log('Список книг:');
                    books.forEach((book) => {
                        console.log(`ID: ${book._id}, Название: ${book.title}, Автор: ${book.author}, Год: ${book.year}, Жанр: ${book.genre}`);
                    });
                    break;
                }

                case '3': {
                    const id = await askQuestion('Введите ID книги для обновления: ');
                    const updatedData = {};
                    const title = await askQuestion('Введите новое название (оставьте пустым для пропуска): ');
                    if (title) updatedData.title = title;

                    const author = await askQuestion('Введите нового автора (оставьте пустым для пропуска): ');
                    if (author) updatedData.author = author;

                    const year = await askQuestion('Введите новый год издания (оставьте пустым для пропуска): ');
                    if (year) updatedData.year = parseInt(year, 10);

                    const genre = await askQuestion('Введите новый жанр (оставьте пустым для пропуска): ');
                    if (genre) updatedData.genre = genre;

                    const updatedBook = await updateBook(id, updatedData);
                    console.log('Книга обновлена:', updatedBook);
                    break;
                }

                case '4': {
                    const id = await askQuestion('Введите ID книги для удаления: ');
                    await deleteBook(id);
                    console.log('Книга удалена.');
                    break;
                }

                case '5':
                    console.log('До свидания!');
                    rl.close();
                    process.exit(0);
                    break;

                default:
                    console.log('Неверный выбор, попробуйте снова.');
            }
        } catch (err) {
            console.log('Ошибка:', err.message);
        }
    }
}

main();