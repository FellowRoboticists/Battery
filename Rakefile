# -*- ruby -*-
#
# Battery Arduino library
#
# Copyright (c) 2013 Dave Sieh
# See LICENSE.txt for details.
#
# Put the parent directory on the Ruby Load path
$: << File.dirname(File.dirname(__FILE__))

# Bring in the task support
require 'arduino-tasks/tasks'
include ArduinoTasks

BASE_DIR = '..'

env = ArduinoEnvironment.new BASE_DIR

LIBS = [
  library('IrSensors'),
  library('LEDBlinker'),
  library('Look'),
  library('Move'),
  library('PingSensor'),
  library('RobotMotor'),
  library('SoftServo'),
  library('AFMotor', 'Adafruit-Motor-Shield-library', 'robot_kit')
]

create_all_library_tasks env, LIBS, :default

