# Kaazing iOS WebSocket Demo

This demo shows how native iOS application can communicate over the web with an `echo` service
running within Kaazing WebSocket Gateway using Kaazing iOS WebSocket Client Framework. The application
sends text messages to the `echo` service over WebSocket using Kaazing iOS WebSocket Client Framework.
The `echo` service, running inside the Kaazing WebSocket Gateway, reflects back the message that is
received by the native iOS application. Kaazing iOS WebSocket Client Framework is located in `lib` folder
under the top-level directory.

## Minimum Requirements for Running or Building Kaazing iOS WebSocket Demo

* Xcode 5 or higher
* Xcode's Command Line Tools.  From Xcode, install via _Xcode &rarr; Preferences &rarr; Downloads_.
                
## Running WebSocket Demo

You can build and run the Kaazing iOS WebSocket demo application by loading the project in Xcode.
Once the project is loaded in Xcode, run the application in an iPhone/iPad simulator.

Use `ws://echo.websocket.org` as the `Location` of the WebSocket endpoint to send and receive messages.

## Demo Source Code

Source code for the demos is located in `demo/ws/src` folder. The source not only includes the Objective-C
modules and headers but also the project files that are useful for loading the project in Xcode.

## Interact with Kaazing Java WebSocket Client API

Detailed instructions to create Kaazing iOS WebSocket Demo from scratch to be able to send and receive messages
over WebSocket can be found [here](http://developer.kaazing.com/documentation/gateway/4.0/dev-objc/o_dev_objc.html).

## API Documentation

API Documentation for Kaazing iOS WebSocket Client Framework is available 
[here](http://developer.kaazing.com/documentation/gateway/4.0/apidoc/client/ios/gateway/index.html).

