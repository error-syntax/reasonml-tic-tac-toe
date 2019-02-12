[%bs.raw {|require('./app.css')|}];

[@bs.module] external logo : string = "./logo.svg";

let component = ReasonReact.statelessComponent("App");

/* Storing ReasonReact.string helper function to something easier to type */
let toString = ReasonReact.string;

let make = (~message, _children) => {
  ...component,
  render: _self =>
    <div className="App">
      <div className="title">
        <h2> (toString(message)) </h2>
      </div>
    </div>,
};
