let component = ReasonReact.statelessComponent "AppBar";

let make _children => {
  ...component,
  render: fun _self =>
    <ReactToolbox.AppBar>
      <Logo />
      (ReasonReact.stringToElement "App example")
    </ReactToolbox.AppBar>
};
