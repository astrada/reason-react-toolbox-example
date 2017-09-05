Examples using reason-react-toolbox
-----------------------------------

This repository contains ReasonML porting of
[react-toolbox-example](https://github.com/react-toolbox/react-toolbox-example).

### Getting started

1. Install dependencies:

       npm install --global bs-platform
       yarn install

2. Generate theme files:

       yarn toolbox

3. Start the demo:

       yarn start

### How to create a new ReasonML app that uses reason-react-toolbox

1. Setup a new app using `create-react-app` and `reason-scripts`:

       npm install -g bs-platform
       yarn create react-app <app-name> -- --scripts-version reason-scripts
       cd <app-name>

2. Add dependencies:

       yarn add react-toolbox
       yarn add --dev reason-react-toolbox react-toolbox-themr

3. Add `toolbox` to `scripts` in `package.json` (as explained
   [here](https://github.com/react-toolbox/react-toolbox-themr/blob/master/README.md)):

       "toolbox": "react-toolbox-themr"

4. Change `name` in `bsconfig.json`, and add `reason-react-toolbox` to
   `bs-dependencies`

5. Add fonts to `public/index.html`:
    
    ```html
    <link href="https://fonts.googleapis.com/icon?family=Material+Icons" rel="stylesheet">
    <link href="https://fonts.googleapis.com/css?family=Roboto:300,400,500,700" rel="stylesheet">
    ```

6. Wrap your component with `ReactToolbox.ThemeProvider` (see [app.re](https://github.com/astrada/reason-react-toolbox-example/blob/master/src/app.re))

7. Generate theme files:

       yarn toolbox

8. Start the app:

       yarn start

