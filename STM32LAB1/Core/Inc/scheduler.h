/*
 * scheduler.h
 *
 *  Created on: Nov 24, 2024
 *      Author: Song Thuy
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#include <stdint.h>
#include <stdio.h>
#include <global.h>
typedef struct{
	void (*pTask)(void);
	uint32_t 	Delay;
	uint32_t 	Period;
	uint8_t 	RunMe;
	uint32_t 	TaskID;
} sTasks;

#define SCH_MAX_TASKS	40


void SCH_Init(void);

void SCH_Add_Task( void (*pFunction)(), uint32_t DELAY, uint32_t PERIOD, uint32_t TASK_INDEX);

void SCH_Update(void);

void SCH_Dispatch_Tasks(void);

void SCH_Delete_Task(const uint32_t TASK_INDEX);



#endif /* INC_SCHEDULER_H_ */
