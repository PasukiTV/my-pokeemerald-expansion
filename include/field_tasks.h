#ifndef GUARD_FIELD_TASKS_H
#define GUARD_FIELD_TASKS_H

void SetUpFieldTasks(void);
void ActivatePerStepCallback(u8 callbackId);
void ResetFieldTasksArgs(void);
void SetSootopolisGymCrackedIceMetatiles(void);
void Task_RemoveFollowerAfterAnim(u8 taskId);
void Task_RemoveFollowerAfterAnimAndUpdateFollower (u8 taskId);

#endif // GUARD_FIELD_TASKS_H
