#ifndef EOP_COURSE_HOMEWORK_H
#define EOP_COURSE_HOMEWORK_H

#ifdef __cplusplus
extern "C" {
#endif

#include "EOP/course/data/entities/tag/EOP_Tag.h"
#include "EOP/course/data/entities/content/EOP_Content.h"

typedef EOP_Tag EOP_HomeworkTag;

//Добавить именно данные для дз и/или способ их получения
typedef struct EOP_Homework
{
    EOP_ContentExt contentExt;     
    EOP_HomeworkTag tag;
    EOP_ContentMark mark;
} EOP_Homework;

#ifdef __cplusplus
}
#endif

#endif

