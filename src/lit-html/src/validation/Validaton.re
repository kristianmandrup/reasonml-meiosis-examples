/* import BaseJoi from "joi-browser"
import DateExtensions from "joi-date-extensions"
import _ from "lodash" */

/* let Joi = BaseJoi.extend(DateExtensions) */
open Joi;

let schema = {
  dateTime: {
    date: Joi.date().format("YYYY-MM-DD").required(),
    hour: Joi.number().integer().min(0).max(23).required(),
    minute: Joi.number().integer().min(0).max(59).required()
  }
}

let options = {
  abortEarly: false,
  allowUnknown: true,
  language: {
    key: "",
    date: {
      base: "invalid date"
    }
  }
}

let validateInput = input => {
  let result = Joi.validate(input, schema, options);

  let errors = {};
  let details = _.get(result, ["error", "details"], []);

  for (i in 0 to details.length) {
    let path = details[i].path;

    if (!_.get(errors, path)) {
      _.set(errors, path, details[i].message);
    }
  }
  errors;
};
