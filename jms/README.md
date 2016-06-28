# Kaazing iOS JMS Tutorial

This app demonstrates native iOS app communication with a Java Message Service (JMS) message 
broker, such as Apache ActiveMQ or TIBCO EMS, via Kaazing WebSocket Gateway. The app demonstrates the Kaazing iOS JMS APIs to subscribe to JMS topics over the Web 
via a Kaazing WebSocket Gateway connected to a JMS-compliant message broker. Kaazing iOS Client frameworks are
located at [kaazing.com/download](http://kaazing.com/download).

## Minimum Requirements for Running or Building Kaazing iOS Demo

* Xcode 5 or higher
* Xcode's Command Line Tools.  From Xcode, install via _Xcode &rarr; Preferences &rarr; Downloads_.

## Running JMS Demo

You can build and run the Kaazing iOS JMS app by loading the project in Xcode.
Once the project is loaded in Xcode, run the application in an iPhone/iPad simulator.

## Demo Source Code

Source code for the app is located in the `jms/src` folder. The source not only includes the Objective-C
modules and headers but also the project files that are useful for loading the project in Xcode.

## Interact with Kaazing iOS JMS Client API

When testing the app, connect to the publicly available Kaazing Gateway and message broker at `wss://sandbox.kaazing.net/jms`.

Detailed instructions to create the Kaazing iOS JMS app from scratch and send and receive messages
over WebSocket can be found [here](http://kaazing.com/doc/5.0/jms_client_docs/dev-objc/o_dev_objc.html).

## API Documentation

API Documentation for Kaazing iOS JMS Client library is available 
[here](https://kaazing.com/doc/5.0/jms_client_docs/apidoc/client/ios/jms/KMStompJMS/index.html).

