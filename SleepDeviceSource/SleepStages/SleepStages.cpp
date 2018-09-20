#include "SleepStages.h"
#include <stdio.h>
#include <stdlib.h>
#include <cstring>

namespace SleepStages
{

typedef enum {
	active = 1,
	inactive = 0
} SleepSessionStatus;

RetValue SleepStages::init()
{
	RetValue ret = SUCCESS;

	sleepSessionSensorReadings = (SleepSessionSensorReadings*) malloc(131070 * sizeof(SleepSessionSensorReadings));
	if (sleepSessionSensorReadings == NULL)
	{
		ret = ERR_MEM;
	}

	sleepSessionSensorReadingsHead = 0;

	sleepSessionStages = (SleepSessionStage*) malloc(65535 * sizeof(SleepSessionStage));
	if (sleepSessionStages == NULL)
	{
		ret = ERR_MEM;
	}

	sleepSessionTime = 0;
	sessionStatus = inactive;

	return ret;
}

SleepStages* SleepStages::getInstance()
{
	static SleepStages instance;
	return &instance;
}

RetValue SleepStages::generateSleepStages()
{
	RetValue ret = SUCCESS;

	if (sessionStatus == active)
	{
		return ERR_SESSION_ACTIVE;
	}

	ActivityLevel activity = getActivityOverLast30Seconds();
	vibrationSensorMagnitude();
	timeSinceLastSignificantMovement();
	timeTillNextSignificantMovement();


	return ret;
}

ActivityLevel SleepStages::getActivityOverLast30Seconds()
{
	alt_u32 totalArea = 0;
	alt_u32 currentHead = sleepSessionSensorReadingsHead;

	alt_u32 currentmSTime = sleepSessionSensorReadings[currentHead].sleepSessionMilliSecondsCount;

	alt_u32 a = (currentmSTime > 30000) ? (currentmSTime - 30000) : 1;

	while(sleepSessionSensorReadings[sleepSessionSensorReadingsHead].sleepSessionMilliSecondsCount > a)
	{
		alt_u32 deltaT = sleepSessionSensorReadings[sleepSessionSensorReadingsHead].sleepSessionMilliSecondsCount -
							sleepSessionSensorReadings[sleepSessionSensorReadingsHead - 1].sleepSessionMilliSecondsCount;

		alt_u8 f_t = sleepSessionSensorReadings[sleepSessionSensorReadingsHead].PIRsensor;

		alt_u32 deltaA = deltaT * f_t;

		totalArea += deltaA;

		currentHead--;
	}

	sleepSessionSensorReadingsHead--;

	ActivityLevel activity;

	if (totalArea > 1000000)
	{
		activity = HIGH;
	}
	else if ((totalArea < 1000000) && (totalArea > 50000))
	{
		activity = MEDIUM;
	}
	else
	{
		activity = LOW;
	}

	return activity;
}

alt_u8 SleepStages::vibrationSensorMagnitude(alt_u32 time)
{

}

alt_u32 SleepStages::timeSinceLastSignificantMovement(alt_u32 time)
{

}

alt_u32 SleepStages::timeTillNextSignificantMovement(alt_u32 time)
{

}

RetValue SleepStages::generateSleepScore(alt_u8 &retScore)
{
	RetValue ret = SUCCESS;

	return ret;
}

RetValue SleepStages::addToSleepSessionSensorReadings(SleepSessionSensorReadings* sensorReadings)
{
	RetValue ret = SUCCESS;

	void* dst = std::memcpy(&(sleepSessionSensorReadings[sleepSessionSensorReadingsHead]), sensorReadings, sizeof(SleepSessionSensorReadings));
	sleepSessionSensorReadingsHead++;

	if (dst == NULL)
	{
		ret = ERR_MEM;
	}

	return ret;
}

alt_u32 SleepStages::getSleepSessionTime()
{
	return sleepSessionTime;
}

RetValue SleepStages::startSleepSession()
{
	sessionStatus = active;

	return SUCCESS;
}

RetValue SleepStages::endSleepSession()
{
	sessionStatus = inactive;

	return SUCCESS;
}

void SleepStages::incrementSleepSessionMilliSecondsCount()
{
	if (sessionStatus == active)
	{
		sleepSessionTime++;
	}
}

} //namespace SleepStages
