#ifndef AUTO_DRIVE_Xs_H
#define AUTO_DRIVE_Xs_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Vaughn
 */
class autocmdDriveFowardXs: public CommandBase {
private:
	char driveTime;
	
public:
	autocmdDriveFowardXs(char driveTimeInS);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif