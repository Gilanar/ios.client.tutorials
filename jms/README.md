# Kaazing iOS JMS Demo

This demo shows how native iOS applications communicate over the web with Java Message Service(JMS) message 
broker such as Apache ActiveMQ or TIBCO EMS via Kaazing WebSocket Gateway using Kaazing iOS Client
framework. The demo application shows how to use the Kaazing iOS JMS APIs to subscribe to JMS topics over the web 
via Kaazing WebSocket Gateway connected to a JMS-compliant message broker. Kaazing iOS Client frameworks are
located in `lib` folder under the top-level directory.

## Minimum Requirements for Running or Building Kaazing iOS WebSocket Demo

* Xcode 5 or higher
* Xcode's Command Line Tools.  From Xcode, install via _Xcode &rarr; Preferences &rarr; Downloads_.
                
## Running JMS Demo

You can build and run the Kaazing iOS JMS demo application by loading the project in Xcode.
Once the project is loaded in Xcode, run the application in an iPhone/iPad simulator.

## Demo Source Code

Source code for the demos is located in `demo/jms/src` folder. The source not only includes the Objective-C
modules and headers but also the project files that are useful for loading the project in Xcode.

## Interact with Kaazing iOS JMS Client API

Detailed instructions to create Kaazing iOS JMS Demo from scratch to be able to send and receive messages
over WebSocket can be found [here](http://developer.kaazing.com/documentation/jms/4.0/dev-objc/o_dev_objc.html).

## API Documentation

API Documentation for Kaazing iOS JMS Client library is available 
[here](http://developer.kaazing.com/documentation/jms/4.0/apidoc/client/ios/jms/KMStompJMS/index.html).

