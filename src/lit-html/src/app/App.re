open LitHtml;
open Conditions;
open DateTime;
open Temperature;

let app = {
  initialState: () => ({
    dateTime: dateTime.initialState(),
    conditions: conditions.initialState(),
    air: temperature.initialState("Air"),
    water: temperature.initialState("Air")
  }),
  actions: update => ({
    dateTime: dateTime.actions(update),
    conditions: conditions.actions(update),
    temperature: temperature.actions(update)
  });

let displayApp = (state, actions) => html[%bs.raw {|"`
  <div class="row">
    <div class="col-md-4">
      ${displayDateTime(state, actions)}
    </div>
    <div class="col-md-4">
      ${displayConditions(state, actions)}
      ${displayTemperature(state, "air", actions)}
      ${displayTemperature(state, "water", actions)}
    </div>
  </div>
`"|}];
