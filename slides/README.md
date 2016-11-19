## Setup to edit the talk page
The slides were created using Reveal.js. The HTML content was generated using the ~~Jade~~ Pug template engine. Quick setup:

 - If you don't have it, get [node.js](https://nodejs.org/en/) and npm. Most nodejs packages bundle npm.
```
git clone https://github.com/andrewadare/arduino-201.git
cd arduino-201/slides
npm install
git clone https://github.com/hakimel/reveal.js.git
git checkout -b 3.3.0 3.3.0
```
Then, try editing index.pug and do `pug index.pug` to generate index.html.
