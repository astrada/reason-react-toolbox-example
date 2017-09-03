let component = ReasonReact.statelessComponent "AppBar";

let make _children => {
  ...component,
  render: fun _self => {
    let logo = <Logo />;
    <ReactToolbox.AppBar title="App example" leftIcon=logo />
  }
};
