#ifndef EOP_COURSE_PRACTICE_TEST_H
#define EOP_COURSE_PRACTICE_TEST_H

#include "EOP/course/data/entities/tag/EOP_Tag.h"
#include "EOP/course/data/entities/content/EOP_Content.h"

typedef EOP_Tag EOP_PracticeTestTag;

//Добавить именно данные теста и/или способ их получения
typedef struct EOP_PracticeTest
{
    EOP_ContentExt contentExt;
    EOP_PracticeTestTag tag;
} EOP_PracticeTest;

#endif

