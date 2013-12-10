# -*- ruby -*-

LIB_DIR = 'lib'
BASE_DIR = '..'

LIBS = %w{ AFMotor IrSensors LEDBlinker Look Move PingSensor RobotMotor SoftServo }

task :default => :lib_setup

desc "Set up the libraries we need for this project"
task :lib_setup do
  LIBS.each do | lib |
    cp_r File.join(BASE_DIR, lib, LIB_DIR, lib), LIB_DIR
  end
end

