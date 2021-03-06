#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include "Commands/Command.h"
#include "Subsystems/ExampleSubsystem.h"
#include "Subsystems/RelaySubsystem.h"
#include "Subsystems/DriverStationLCDSystem.h"
#include "Subsystems/WinchSubsystem.h"
#include "Subsystems/Chassis.h"
#include "Subsystems/LoaderSubsystem.h"
#include "OI.h"
#include "Subsystems/CameraSubsystem.h"
#include "Subsystems/AutonomusModeSwitches.h"


/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use CommandBase.examplesubsystem
 */
class CommandBase: public Command {
public:
	CommandBase(const char *name);
	CommandBase();
	static void init();
	// Create a single static instance of all of your subsystems
	static ExampleSubsystem *examplesubsystem;
	static AutonomusModeSwitches *autonomousModeSwitches;
	static DriverStationLCDSystem *driverStationLCDSystem;
	static WinchSubsystem *winchSubsystem;
	static Chassis *chassis;
	static LoaderSubsystem *loaderSubsystem;
	static OI *oi;
	static CameraGimble *driveCamera;
};

#endif
