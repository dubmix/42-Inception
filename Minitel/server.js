const express = require('express');
const { exec } = require('child_process');
const app = express();
const port = 3000;

app.use(express.json());

app.post('/run', (req, res) => {
    const userInput = req.body.input;
    exec(`./your_program ${userInput}`, (error, stdout, stderr) => {
        if (error) {
            res.status(500).send(error.message);
            return;
        }
        res.send(stdout);
    });
});

app.listen(port, () => {
    console.log(`Server is running on port ${port}`);
});