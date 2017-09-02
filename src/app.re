[%bs.raw {|require('./toolbox/theme.css')|}];

external theme : ReactToolbox.ThemeProvider.theme = "./toolbox/theme" [@@bs.module];

let component = ReasonReact.statelessComponent "App";

let make _children => {
  ...component,
  render: fun _self =>
    <ReactToolbox.ThemeProvider theme>
      <div>
        <AppBar />
        <section style=(ReactDOMRe.Style.make padding::"20" ())>
          <ReactToolbox.Button label="Success" primary=true raised=true />
          <ReactToolbox.Button label="Primary Button" primary=true />
        </section>
      </div>
    </ReactToolbox.ThemeProvider>
};
