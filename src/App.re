[%bs.raw {|require('./toolbox/theme.css')|}];

[@bs.module]
external theme : ReactToolbox.ThemeProvider.theme = "./toolbox/theme";

let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self =>
    <ReactToolbox.ThemeProvider theme>
      <div>
        <AppBar />
        <section style=(ReactDOMRe.Style.make(~padding="20px", ()))>
          <ReactToolbox.Button
            label="Raised Button"
            primary=true
            raised=true
          />
          <ReactToolbox.Button label="Primary Button" primary=true />
        </section>
      </div>
    </ReactToolbox.ThemeProvider>
};
