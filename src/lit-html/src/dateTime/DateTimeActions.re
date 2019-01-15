open Patchinko;
open Validation;

let actions = update => ({
  editDate: value =>
    update({ dateTime: ps({ date: value }) }),

  editHour: value =>
    update({ dateTime: ps({ hour: value }) }),

  editMinute: value =>
    update({ dateTime: ps({ minute: value }) }),

  validate: state => {
    let errors = validateInput(state);
    let errorKeys = [%bs.raw {|Object.keys(errors)|}];
    update({ errors, conditions: ps({
      message: (errors && errorKeys.length > 0 && "Invalid!") || "Valid!"
    }) })
  }
});
