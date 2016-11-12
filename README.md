# Arduino 201 at the Boulder Hackerspace
This repo contains example code and presentation files for the Intermediate Arduino session at Solid State Depo in December 2016.

## Setup to edit and host the talk page
The slides were created using Reveal.js. Other dependencies include node.js and the Jade template engine (`npm install jade`). Quick setup:
```
git clone https://github.com/andrewadare/arduino-201.git
cd arduino-201
git clone https://github.com/hakimel/reveal.js.git
git checkout -b 3.3.0 3.3.0
```
Then, back in arduino-201, try `jade index.jade` at your prompt to generate index.html.