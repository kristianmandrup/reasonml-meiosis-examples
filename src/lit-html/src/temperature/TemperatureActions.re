open Patchinko;
open Js.Math;

let actions = update => ({
  increment: (id, amount) =>
    update({ [id]: ps({ value: s(x => x + amount) }) }),

  changeUnits: id => update({
    [id]: s(state => {
      if (state.units === "C") {
        state.units = "F"
        state.value = round( state.value * 9 / 5 + 32 )
      }
      else {
        state.units = "C"
        state.value = round( (state.value - 32) / 9 * 5 )
      }
      return state
    })
  })
})
