#ifndef EOP_COURSE_LESSON_H
#define EOP_COURSE_LESSON_H

#ifdef __cplusplus
extern "C" {
#endif

#include "EOP/course/data/entities/tag/EOP_Tag.h"
#include "EOP/course/data/entities/content/EOP_Content.h"

#include "EOP/course/data/entities/homework/EOP_homework.h"
#include "EOP/course/data/entities/test/EOP_test.h"

typedef EOP_Tag EOP_LessonPartTag;

typedef struct EOP_Lesson
{    
    EOP_Homework homework;
    EOP_Test test;
} EOP_Lesson;

#define EOP_MAX_NUM_LESSONS 20

typedef int EOP_LessonsLength;

typedef EOP_Lesson EOP_LessonsArray[EOP_MAX_NUM_LESSONS];

typedef struct EOP_Lessons
{    
    EOP_LessonsArray data;
    EOP_LessonsLength length;
} EOP_Lessons;

#ifdef __cplusplus
}
#endif

#endif