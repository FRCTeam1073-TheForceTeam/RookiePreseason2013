// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "OI.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/Drive.h"
#include "Commands/Grab.h"
#include "Commands/GrabOpen.h"
#include "Commands/Release.h"
#include "Commands/ShooterOff.h"
#include "Commands/ShooterOn.h"
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
OI::OI() {
	// Process operator interface input here.
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	leftDrive = new Joystick(1);
	
	rightDrive = new Joystick(2);
	
	operatorStick = new Joystick(3);
	
     
        // SmartDashboard Buttons
	SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());
	SmartDashboard::PutData("Grab", new Grab());
	SmartDashboard::PutData("Release", new Release());
	SmartDashboard::PutData("ShooterOn", new ShooterOn());
	SmartDashboard::PutData("ShooterOff", new ShooterOff());
	SmartDashboard::PutData("Drive", new Drive());
	SmartDashboard::PutData("GrabOpen", new GrabOpen());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
Joystick* OI::getLeftDrive() {
	return leftDrive;
}
Joystick* OI::getRightDrive() {
	return rightDrive;
}
Joystick* OI::getOperatorStick() {
	return operatorStick;
}
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
