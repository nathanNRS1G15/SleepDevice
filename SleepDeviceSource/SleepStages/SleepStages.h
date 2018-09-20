
#ifndef __SLEEP_STAGES_H__
#define __SLEEP_STAGES_H__

#include "alt_types.h"

namespace SleepStages
{

typedef enum {
	SUCCESS,
	ERR_MEM,
	ERR_SESSION_ACTIVE
} RetValue;

typedef enum {
	lightSleep,
	deepSleep,
	REM
} SleepStage;

typedef enum {
	active = 1,
	inactive = 0
} SleepSessionStatus;

typedef struct {
	alt_u16 sleepSessionTime;       //u16 gives maximum sleep session of 18.2 hours
	SleepStage sleepStageAtTime;
} SleepSessionStage;

typedef struct {
	alt_u16 sleepSessionTime;

	alt_8  temperature;
	alt_u8 humidty;
	alt_u8 light;
	alt_u8 noiseDb;

	alt_u8 PIRsensor;
	alt_u8 vibrationSensor;
} __attribute__((packed)) SleepSessionSensorReadings;     //pack the struct to ensure there is no padding

class SleepStages
{
public:
	RetValue generateSleepStages();
	RetValue generateSleepScore(alt_u8 &retScore);

	RetValue init();
	RetValue addToSleepSessionSensorReadings(SleepSessionSensorReadings* sensorReadings);
	alt_u32 getSleepSessionTime();
	RetValue startSleepSession();
	RetValue endSleepSession();
	void incrementSleepSessionTime();

	SleepStages* getInstance();


private:
	alt_u32 sleepSessiontime;
	alt_u32 sleepSessionStartTime;     //So we know when the sleep session started
	SleepSessionSensorReadings* sleepSessionSensorReadings;      //Pointer to array of sleep session's sensor readings
	alt_u16 sleepSessionSensorReadingsHead;
	SleepSessionStage* sleepSessionStages;                       //Pointer to array of approximated sleep session's sleep stages

	SleepSessionStatus sessionStatus;




};

} //namespace SleepStages

#endif //__SLEEP_STAGES_H__
