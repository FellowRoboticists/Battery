Battery Arduino Library
=======================

This library provides a simple way to check the current state of charge
of the batteries.

Building/Testing
================

Preparartion:

1. Determine the directory in which you will place the Battery project
2. Clone the https://github.com/FellowRoboticists/arduino-tasks project. This provides the necessary ruby tasks use by the rake command.
3. Clone the https://github.com/FellowRoboticists/Battery project.
4. In the Battery project directory, invoke the 'rake' command. This will automatically pull all the dependency libraries from GitHub and prepare the ino project for building.

To build the example sketch:

```
ino build
```

To upload the example sketch:

```
ino upload
```

Copyright
=========
Copyright (c) 2013 Dave Sieh

See LICENSE.txt for details.

