## PBL/MicroProject Samples

#### Multi user chat
> TODO

#### Remote command execution
> TODO


#### Distributed Dictionary
* Server maintains few entries in the form of a dictionary (Array of Structures in C/Python Dictionary)
* Client can request add/remove/display operations on dictionary entries maintained by server

#### List contents of Remote director
* A directory on server's machine has few files and sub directories
* Server will return the files & sub dirs upon client request
* Hint - opendir, readdir, lstat

#### Implement simple publish-subscribe for Sensor Network
> TODO

#### Exchange sensor readings with IOT Server (HTTP)
* Create an account on ThingSpeak platform
* Create a channel on ThingSpeak platform
* Make a note of READ, WRITE API keys of the channel
* Publish data using a) GET method with Query String b) POST method
* Retrieve all feeds from ThingSpeak channel using GET method

#### Gateway Design
* Extend above problem where a node acts like a gateway Sensor Network
* Few nodes will be considered as end devices
* End devices will send sensor readings (Random/dummy values) to Gateway over UDP
* Gateway receives sensor readings from UDP and write to ThingSpeak platform.

#### WeatherService (HTTP)
* Fetch weather updates from a service like OpenWeatherMap


