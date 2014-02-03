#include "DeactivateLoader.h"

DeactivateLoader::DeactivateLoader() {
	// Use requires() here to declare subsystem dependencies
	//requires(examplesubsystem)
}

// Called just before this Command runs the first time
void DeactivateLoader::Initialize() {
	printf("Initialize\n");
	
}

// Called repeatedly when this Command is scheduled to run
void DeactivateLoader::Execute() {
	loaderSubsystem->RunLoader();
}

// Make this return true when this Command no longer needs to run execute()
bool DeactivateLoader::IsFinished() {
	//printf("IsFinished\n");
	return false;
}

// Called once after isFinished returns true
void DeactivateLoader::End() {
	printf("End\n");
	//winchSubsystem->Release();
	loaderSubsystem->StopEverything();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DeactivateLoader::Interrupted() {
	printf("Interrupted\n");
	loaderSubsystem->StopEverything();
}



