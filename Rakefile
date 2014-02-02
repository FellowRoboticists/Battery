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

LIB_DIR = 'lib'
BASE_DIR = '..'

ADA_LIB = 'Adafruit-Motor-Shield-library'
AFMOTOR_LIB = File.join(LIB_DIR, "AFMotor")

create_library_clone_task ADA_LIB, File.join(BASE_DIR, ADA_LIB), 'robot_kit'

directory AFMOTOR_LIB => File.join(BASE_DIR, ADA_LIB) do
  cp_r File.join(BASE_DIR, ADA_LIB), LIB_DIR
  mv File.join(LIB_DIR, ADA_LIB), AFMOTOR_LIB
end

LIBS = %w{ IrSensors LEDBlinker Look Move PingSensor RobotMotor SoftServo }

LIBS.each do | lib |
  lib_dir = File.join(BASE_DIR, lib)
  create_library_clone_task lib, lib_dir
  directory File.join(LIB_DIR, lib) => lib_dir do
    cp_r File.join(BASE_DIR, lib, LIB_DIR, lib), LIB_DIR
  end

  task :default => File.join(LIB_DIR, lib)
end

task :default => AFMOTOR_LIB


