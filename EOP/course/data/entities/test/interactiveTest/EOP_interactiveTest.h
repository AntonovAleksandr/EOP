#ifndef EOP_COURSE_INTERACTIVE_TEST_H
#define EOP_COURSE_INTERACTIVE_TEST_H

#include "EOP/course/data/entities/tag/EOP_Tag.h"
#include "EOP/course/data/entities/content/EOP_Content.h"

typedef EOP_Tag EOP_InteractiveTestTag;

//Добавить именно данные теста и/или способ их получения
typedef struct EOP_InteractiveTest
{
    EOP_ContentExt contentExt;
    EOP_InteractiveTestTag tag;
} EOP_InteractiveTest;

#endif

