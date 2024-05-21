#ifndef EOP_COURSE_THEORY_TEST_H
#define EOP_COURSE_THEORY_TEST_H

#include "EOP/course/data/entities/tag/EOP_Tag.h"
#include "EOP/course/data/entities/content/EOP_Content.h"

typedef EOP_Tag EOP_TheoryTestTag;

//Добавить именно данные для теста и/или способ их получения
typedef struct EOP_TheoryTest
{
    EOP_ContentExt contentExt;
    EOP_TheoryTestTag tag;
} EOP_TheoryTest;

#endif

