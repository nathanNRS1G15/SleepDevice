#include "SleepStages.h"
#include <stdio.h>
#include <stdlib.h>
#include <cstring>

namespace SleepStages
{

RetValue SleepStages::init()
{
	RetValue ret = SUCCESS;

	sleepSessionSensorReadings = (SleepSessionSensorReadings*) malloc(65535);    // Enough space for 1 reading per second
	if (sleepSessionSensorReadings == NULL)
	{
		ret = ERR_MEM;
	}

	sleepSessionSensorReadingsHead = 0;

	sleepSessionStages = (SleepSessionStage*) malloc(65535);
	if (sleepSessionStages == NULL)
	{
		ret = ERR_MEM;
	}

	sleepSessiontime = 0;
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

	return ret;
}

RetValue SleepStages::generateSleepScore(alt_u8 &retScore)
{

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
	return sleepSessiontime;
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

void SleepStages::incrementSleepSessionTime()
{
	if (sessionStatus == active)
	{
		sleepSessiontime++;
	}
}

} //namespace SleepStages
