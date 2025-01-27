const fs = require('fs').promises;

async function readFile(filePath) {
    try {
        const data = await fs.readFile(filePath, 'utf8');
        return JSON.parse(data || '[]'); // Если файл пустой, возвращаем пустой массив
    } catch (err) {
        if (err.code === 'ENOENT') {
            // Если файл не существует, возвращаем пустой массив
            return [];
        }
        throw err;
    }
}

async function writeFile(filePath, content) {
    await fs.writeFile(filePath, JSON.stringify(content, null, 2), 'utf8');
}

module.exports = { readFile, writeFile };
