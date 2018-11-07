/*! \file */

/*! \fn _tmain(int argc, _TCHAR* argv[])
\brief a test function
\return 0 if success

*/

// BScopePositionTest.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "MCM3000_SDK.h"
#include<iostream>


//XPosition function demonstrates how to move the XStage
long XPosition(const double xMax)
{
	if(0 == SetParam(PARAM_X_POS, xMax/10.0))
	{
		return 0;
	}

	if(0 == PreflightPosition())
	{
			return 0;
	}		

	if(0 == SetupPosition())
	{
		return 0;
	}

	if(0 == StartPosition())
	{
		return 0;
	}

	long status = STATUS_READY;
	do
	{
		if(0 == StatusPosition(status))
		{
			return 0;
		}
	}while(STATUS_BUSY == status);

	if(0 == PostflightPosition())
	{
		return 0;
	}

	double readPos;
	if (0 == GetParam(PARAM_X_POS_CURRENT, readPos))
	{
		return 0;
	}

	return 1;
}

//YPosition function demonstrates how to move the YStage
long YPosition(const double yMin)
{
	if(0 == SetParam(PARAM_Y_POS, yMin/10.0))
	{
		return 0;
	}

	if(0 == PreflightPosition())
	{
			return 0;
	}		

	if(0 == SetupPosition())
	{
		return 0;
	}

	if(0 == StartPosition())
	{
		return 0;
	}

	long status = STATUS_READY;
	do
	{
		if(false == StatusPosition(status))
		{
			return 0;
		}
	}while(STATUS_BUSY == status);

	if(0 == PostflightPosition())
	{
		return 0;
	}
	double readPos;

	if (0 == GetParam(PARAM_Y_POS_CURRENT, readPos))
	{
		return 0;
	}

	return 1;
}

//ZPosition function demonstrates how to move the ZStage
long ZPosition(const double zMax)
{
	if(0 == SetParam(PARAM_Z_POS, zMax/10.0))
	{
		return 0;
	}

	if(0 == PreflightPosition())
	{
			return 0;
	}		

	if(0 == SetupPosition())
	{
		return 0;
	}

	if(0 == StartPosition())
	{
		return 0;
	}

	long status = STATUS_READY;
	do
	{
		if(0 == StatusPosition(status))
		{
			return 0;
		}
	}while(STATUS_BUSY == status);

	if(0 == PostflightPosition())
	{
		return 0;
	}
	double readPos;

	if (0 == GetParam(PARAM_Z_POS_CURRENT, readPos))
	{
		return 0;
	}

	return 1;
}

//PositionSetZero function demonstrates how to set the
//Current position to be zero in the X, Y, X, and R Stages
long PositionSetZero()
{	
	long setZero = 1;
	for (int i = 0; i < 3; i++)
	{		
		switch (i)
		{
		case 0:
			if(0 == SetParam(PARAM_X_ZERO, static_cast<double>(setZero)))
			{
				return 0;
			}
			break;
		case 1:
			if(0 == SetParam(PARAM_Y_ZERO, static_cast<double>(setZero)))
			{
				return 0;
			}
			break;
		case 2:
			if(0 == SetParam(PARAM_Z_ZERO, static_cast<double>(setZero)))
			{
				return 0;
			}
			break;
		default:
			break;
		}	

		if(0 == PreflightPosition())
		{
			return 0;
		}

		if(0 == SetupPosition())
		{
			return 0;
		}

		if(0 == StartPosition())
		{
			return 0;
		}

		long status = STATUS_READY;
		do
		{
			if(0 == StatusPosition(status))
			{
				return 0;
			}
		}while(STATUS_BUSY == status);

		if(0 == PostflightPosition())
		{
			return 0;
		}	
	}
	
	return 1;
}


int _tmain(int argc, _TCHAR* argv[])
{
	long deviceCount = 0;

	if(false == FindDevices(deviceCount))
	{
		return 0;
	}

	//Use device 0 for BScope
	if(false == SelectDevice(0))
	{
		return 0;
	}

	//PositionSetZero function demonstrates how to set the
	//Current position to be zero in the X, Y, Z, and R Stages
	printf("Set current position to be zero...\n");
	PositionSetZero();
	long currentPos=0;
	long paramType;
	long paramAvailable;
	long paramReadOnly;
	double paramMin;
	double paramMax;
	double paramDefault;

	GetParamInfo(PARAM_X_POS, paramType, paramAvailable, paramReadOnly, paramMin, paramMax, paramDefault);
	//XPosition function demonstrates how to move the XStage
	printf("Start moving X to %0.2f[mm]...\n", paramMax/10.0);
	XPosition(paramMax);
	printf("Start moving X back to %0.2f[mm]...\n", currentPos);
	XPosition(currentPos);
	printf("Done moving X.\n");

	GetParamInfo(PARAM_Y_POS, paramType, paramAvailable, paramReadOnly, paramMin, paramMax, paramDefault);	
	//YPosition function demonstrates how to move the YStage
	printf("Start moving Y to %0.2f[mm]...\n", paramMax/10.0);
	YPosition(paramMax);
	printf("Start moving Y back to %0.2f[mm]...\n", currentPos);
	YPosition(currentPos);
	printf("Done moving Y.\n");

	GetParamInfo(PARAM_Z_POS, paramType, paramAvailable, paramReadOnly, paramMin, paramMax, paramDefault);
	//ZPosition function demonstrates how to move the ZStage
	printf("Start moving Z to %0.2f[mm]...\n", paramMax/10.0);
	ZPosition(paramMax);
	printf("Start moving Z back to %0.2f[mm]...\n", currentPos);
	ZPosition(currentPos);
	printf("Done moving Z.\n");

	printf("Teardown...\n");
	TeardownDevice();

	system("PAUSE");

	return 0;
}


