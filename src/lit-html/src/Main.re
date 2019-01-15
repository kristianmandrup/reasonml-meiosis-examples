open Flyd
open Patchinko;
open LitHtml;
open App;

let update = stream()
let appState = App.initialState()
let states = scan(P, appState, update)

/* Only for using Meiosis Tracer in development. */
[%bs.raw {|require("meiosis-tracer")({ selector: "#tracer", rows: 25, streams: [ states ]})|}]

let actions = App.app.actions(update)
/* use bs-webapi */
let element = document.getElementById("app")

let app = App.displayApp(state, actions);
states.map(state => render(app, element))
