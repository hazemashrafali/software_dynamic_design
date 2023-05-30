/*
 * os.c
 *
 * Created: 2023-05-29 11:55:33 AM
 *  Author: HAZEM-PC
 */ 
/************************************************************************/
/*						header files inclusion			                */
/************************************************************************/

#include "os.h"
//#include "timer.h"

/************************************************************************/
/*						   type definitions					            */
/************************************************************************/
typedef enum{
	NOT_RUN,RUN
	}enu_task_states_t;


typedef struct
{
	ptr_task_t			ptr_task;
	uint16				initial_delay;
	uint16				period;
	uint8				priority;
	uint8				task_id;
	enu_task_states_t	enu_task_states; 
}str_task_t;


/************************************************************************/
/*						   GLOBAL VARIABLES					            */
/************************************************************************/

str_task_t arr_str_task[SCH_MAX_TASK];


/************************************************************************/
/*						  PRIVATE FUNCTIONS					            */
/************************************************************************/

static void sos_update(void);


/************************************************************************/
/*						  FUNTION DEFINITIONS 					        */
/************************************************************************/

enu_system_status_t sos_init (void)
{
	//initialize OS database by clear each index
	//initialize timer according to tick time and set timer interrupts at required rate. 
}
enu_system_status_t sos_deinit (void)
{
	
}																	
enu_system_status_t sos_create_task (ptr_task_t  ptr_task,uint16 delay,uint16 period,uint16 pirority)
{
	//is used to add tasks to the task array
	//Causes a task to be executed at regular intervals or after a user-defined delay
}	
enu_system_status_t sos_delete_task (uint8 task_id)
{
	
}								
enu_system_status_t sos_modify_task (ptr_task_t  ptr_task,uint16 delay,uint16 period,uint16 pirority)
{
	
}	
void sos_run (void)
{
	//This is the dispatcher function. When a task is due to run, sos_run() will run it.
	//This function must be called (repeatedly) from the main loop.
}																		
void sos_disable (void)
{
	
}

static void sos_update(void)
{
	//It is invoked by the overflow of the timer
	//This is the scheduler ISR. It is called at a rate determined by the timer settings	
	//it determines that a task is due to run, the update function increments the
	//task_flag field for this task: the task will then be executed by the dispatcher
}
