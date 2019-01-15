# ReasonML lit-html example

Displays a display to:

- increase and decrease temperature
- convert between Celcius and Fahrenheit

### Run

Bundle compiled js files into a webpack bundle

```bash
$ npm run start
```

Start static server, serving `index.html` that references bundle

```bash
$ npm run serve
```

Open [http://localhost:3000](http://localhost:3000) in your browser

## TODO

Add basic [Joi](https://github.com/hapijs/joi) validation

```json
{
  "dependencies": {
    "joi": "^14.3.0",
    "joi-browser": "^13.4.0",
    "joi-date-extensions": "^1.2.0"
  }
}
```
