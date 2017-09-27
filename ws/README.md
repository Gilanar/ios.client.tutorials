# Kaazing iOS WebSocket Demo

This app demonstrates native iOS app communication over the Web with an `Echo` service
hosted by a Kaazing WebSocket Gateway. The app
sends messages to the `Echo` service over WebSocket using the Kaazing iOS WebSocket Client Framework.
The `Echo` service hosted by the Kaazing WebSocket Gateway reflects back the message that is
sent by the native iOS app. Kaazing iOS Client frameworks are
located at [kaazing.com/download](http://kaazing.com/download).

## Minimum Requirements for Running or Building Kaazing iOS WebSocket Demo

* Xcode 5 or higher
* Xcode's Command Line Tools.  From Xcode, install via _Xcode &rarr; Preferences &rarr; Downloads_.

## Running WebSocket Demo

You can build and run the Kaazing iOS WebSocket app by loading the project in Xcode.
Once the project is loaded in Xcode, run the application in an iPhone/iPad simulator.

Use `wss://demos.kaazing.com/echo` as the `Location` of the WebSocket endpoint to send and receive messages.

## Demo Source Code

Source code for the demos is located in `ws/src` folder. The source not only includes the Objective-C
modules and headers but also the project files that are useful for loading the project in Xcode.

## Interact with Kaazing iOS WebSocket Client API

Detailed instructions to create the Kaazing iOS WebSocket app from scratch and send and receive messages
over WebSocket can be found [here](http://kaazing.com/doc/5.0/websocket_client_docs/dev-objc/o_dev_objc.html).

## API Documentation

API Documentation for Kaazing iOS WebSocket Client Framework is available 
[here](http://kaazing.com/doc/5.0/websocket_client_docs/apidoc/client/ios/gateway/index.html).

