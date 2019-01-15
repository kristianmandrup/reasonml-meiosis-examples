open Patchinko;

let actions = update => ({
  togglePrecipitations: value =>
    update({ conditions: ps({ precipitations: value }) }),

  changeSky: value =>
    update({ conditions: ps({ sky: value }) })
})
