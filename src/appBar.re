let component = ReasonReact.statelessComponent "PurpleAppBar";

let make _children => {
  ...component,
  render: fun _self =>
    <ReactToolbox.AppBar>
      <Logo />
      (ReasonReact.stringToElement "App example")
    </ReactToolbox.AppBar>
};
