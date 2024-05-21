#ifndef EOP_COURSE_TEST_H
#define EOP_COURSE_TEST_H

#include "EOP/course/data/entities/tag/EOP_Tag.h"
#include "EOP/course/data/entities/content/EOP_Content.h"

#include "EOP/course/data/entities/test/interactiveTest/EOP_interactiveTest.h"
#include "EOP/course/data/entities/test/practiceTest/EOP_practiceTest.h"
#include "EOP/course/data/entities/test/theoryTest/EOP_theoryTest.h"


typedef EOP_Tag EOP_MainTheoryTag;

//Добавить именно данные для дз и/или способ их получения
typedef struct EOP_Test
{    
    EOP_InteractiveTest interactiveTest;
    EOP_PracticeTest practiceTest;
    EOP_TheoryTest theoryTest;
    EOP_ContentMark mark;
} EOP_Test;

#endif

