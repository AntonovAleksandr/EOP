#ifndef EOP_COURSE_Table_H
#define EOP_COURSE_Table_H

#include <EOP/course/data/entities/test/EOP_test.h>
#include <EOP/course/data/entities/homework/EOP_homework.h>
#include "EOP/course/data/entities/lesson/EOP_Lesson.h"

#ifdef __cplusplus
extern "C" {
#endif


#define EOP_MAX_NUM_COURSES 100

typedef EOP_Tag EOP_CourseTag;

typedef int EOP_CoursesLength;

typedef struct EOP_Course
{    
    EOP_Homework homework;
    EOP_Lessons lessons;
    EOP_Test test;    
} EOP_Course;

typedef EOP_Course EOP_CoursesArray[EOP_MAX_NUM_COURSES];

typedef struct EOP_Courses
{    
    EOP_CoursesArray data;
    EOP_CoursesLength length;
} EOP_Courses;

void f0(int);


#ifdef __cplusplus
}
#endif


#endif