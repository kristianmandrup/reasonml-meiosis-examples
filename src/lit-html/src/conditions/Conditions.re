open LitHtml;
open ConditionsInitialState;
open ConditionsActions;

let conditions = {
  initialState,
  actions
}

let conditionsOption = ({ state, actions, value, label }) => html[%bs.raw {|"`
  <label class="radio-inline">
    <input type="radio" name="conditions" value=${value}
      .checked=${state.conditions.sky === value}
      @change=${evt => actions.changeSky(evt.target.value)}/>
    ${label}
  </label>
`"|}];

let displayConditions = (state, actions) => html[%bs.raw {|"`
  <div>
    <label class="checkbox-inline">
      <input type="checkbox" .checked=${state.conditions.precipitations}
        @change=${evt => actions.togglePrecipitations(evt.target.checked)}/>
      Precipitations
    </label>
    <div>
      ${conditionsOption({ state, actions, value: "SUNNY", label: "Sunny" })}
      ${conditionsOption({ state, actions, value: "CLOUDY", label: "Cloudy" })}
      ${conditionsOption({ state, actions, value: "MIX", label: "Mix of sun and clouds" })}
    </div>
  </div>
`"|}];
