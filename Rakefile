# -*- ruby -*-

LIB_DIR = 'lib'
BASE_DIR = '..'

ADA_LIB = 'Adafruit-Motor-Shield-library'
AFMOTOR_LIB = File.join(LIB_DIR, "AFMotor")

directory AFMOTOR_LIB do
  cp_r File.join(BASE_DIR, ADA_LIB), LIB_DIR
  mv File.join(LIB_DIR, ADA_LIB), AFMOTOR_LIB
end

LIBS = %w{ IrSensors LEDBlinker Look Move PingSensor RobotMotor SoftServo }

LIBS.each do | lib |
  directory File.join(LIB_DIR, lib) do
    cp_r File.join(BASE_DIR, lib, LIB_DIR, lib), LIB_DIR
  end

  task :default => File.join(LIB_DIR, lib)
end

task :default => AFMOTOR_LIB


