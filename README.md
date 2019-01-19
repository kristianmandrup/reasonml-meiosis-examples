# ReasonML meiosis examples

ReasonML examples for the [Meiosis](http://github.com/foxdonut/meiosis) library.

- Original javascript version with many more examples can be found [here](https://github.com/foxdonut/meiosis-examples)
- [Playlist of Meiosis videos/tutorials](https://www.youtube.com/watch?v=0mhpECObLdc&index=1&list=UUl5aITiWNhBj8xx_rXjh6ZA)
- [Meiosis tutorial](https://meiosis.js.org/tutorial/toc.html)

You can obtain the examples by cloning the git repository:

```
git clone https://github.com/kristianmandrup/reasonml-meiosis-examples.git
```

Currently attempting to port the lit-html temperature display app to ReasonML. The original JS example can be seen in action [here](https://meiosis.js.org/examples/setup/lit-html/index.html).

Using:

- [bs-lit-html](https://github.com/kristianmandrup/bs-lit-html)
- [bs-flyd](https://github.com/kristianmandrup/bs-flyd) (broken)
- [bs-patchinko](https://github.com/kristianmandrup/bs-patchinko)
- [bs-universal-router](https://github.com/kristianmandrup/bs-universal-router) (broken)

Also started creating bindings for mithril stream: [bs-mithril-stream](https://github.com/kristianmandrup/bs-mithril-stream)

Would much welcome a basic port of the [Joi validation library](https://github.com/hapijs/joi)

TODO: Use the Meiosis stream tracer via [bs-meiosis-tracer](https://github.com/kristianmandrup/bs-meiosis-tracer)

To help porting these libs to bucklescript (and hence ReasonML) see [FFI cheatsheet](https://github.com/glennsl/bucklescript-ffi-cheatsheet) and go for it!

## Starting the static server

To start the static server, go to the `src/lit-html` directory and run:

```
npm i
npm start
```

Note that you only need to run `npm i` once. Afterwards, you can just run `npm start` each time you want to start the server.

Then, open [http://localhost:3000](http://localhost:3000) in your browser. You can use a different port number by specifying it in the `package.json`
file under the `"start"` script.

Of course, you can use another tool of your choice to start an HTTP server.

You will see two tables of all the examples. The first table is organized by view library, while the second is organized by example.

## Building an example

Before running an example, you need to build it. Go to the directory of the example, such as `src/lit-html`, and run:

```
npm i
npm start
```

You only need `npm i` the first time.

Once built, you can view the example by navigating to it from the examples index page at [http://localhost:3000](http://localhost:3000).

If you want to experiment with the code and see your changes, you need to run `npm start` every time you want to rebuild the example. To avoid
having to do this, use instead:

```
npm run watch
```

This will automatically rebuild the example when you make changes to the source code.

## Resources

### Generic UI framworks

[revery-ui](https://github.com/revery-ui/revery) could serve as inspiration for a general purpose UI "language".

"Native, high-performance, cross-platform desktop apps - built with Reason! - revery-ui/revery"

`revery-ui` is a React-style unidirectional data flow framework for writing apps

## Application model language (AppML)

[application-model-lang](https://github.com/kristianmandrup/application-model-lang)

Declare the outline of your application declaratively. Plugin a set of services for your language/framework preferences. Select specific service templates to be used (such as for customization)

The compiler will then parse the definition, send the AST nodes to subscribing services which "spit out" application artifacts according to your preferences.
