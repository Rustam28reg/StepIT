const http = require('http');
const fs = require('fs');
const { readFile, writeFile } = require('./fileManager');

const server = http.createServer((req, res) => {
    switch (req.url) {
        case '/':
            res.writeHead(200, { 'content-type': 'text/html; charset=utf-8' });
            fs.createReadStream('./index.html').pipe(res);
            break;

        case '/file':
            switch (req.method) {
                case 'GET':
                    readFile(__dirname + '/text.txt')
                        .then((data) => {
                            res.writeHead(200, { 'content-type': 'text/plain; charset=utf-8' });
                            res.end(data);
                        })
                        .catch((err) => {
                            res.writeHead(500, { 'content-type': 'text/plain; charset=utf-8' });
                            res.end(`Error reading file: ${err.message}`);
                        });
                    break;

                case 'PUT':
                    let body = '';
                    req.on('data', (chunk) => {
                        body += chunk;
                    });
                    req.on('end', () => {
                        writeFile(__dirname + '/text.txt', body)
                            .then(() => {
                                res.writeHead(200, { 'content-type': 'text/plain; charset=utf-8' });
                                res.end('The file was written successfully..');
                            })
                            .catch((err) => {
                                res.writeHead(500, { 'content-type': 'text/plain; charset=utf-8' });
                                res.end(`Error writing file: ${err.message}`);
                            });
                    });
                    break;

                default:
                    res.writeHead(405, { 'content-type': 'text/plain; charset=utf-8' });
                    res.end(`Metod ${req.method} dont support for /file`);
                    break;
            }
            break;

        default:
            res.writeHead(404, { 'content-type': 'text/html; charset=utf-8' });
            fs.createReadStream('./error.html').pipe(res);
            break;
    }
});

const PORT = 3000;
const HOST = 'localhost';

server.listen(PORT, HOST, () => {
    console.log(`The server has started successfully: http://${HOST}:${PORT}`);
});
