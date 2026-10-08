#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

#ifndef SIMULATOR

#include <cmsis_os2.h>
#include "main.h"
extern "C"
{
	extern osMessageQueueId_t distance_sensor_dataHandle;
	extern osMessageQueueId_t positionQueueHandle;
}
#endif

Model::Model() : modelListener(0)
{

}

void Model::tick()
{
#ifndef SIMULATOR
	if (osMessageQueueGet(distance_sensor_dataHandle, &data1, 0U, 0) == osOK)
		{
			modelListener->setVal1 (data1);  // send data to presenter
		}
	if (osMessageQueueGet(positionQueueHandle, &data2, 0U, 0) == osOK)
		{
			modelListener->setStep (data2);  // send data to presenter
		}
#endif
}
