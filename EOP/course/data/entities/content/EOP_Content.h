#ifndef EOP_COURSE_CONTENT_H
#define EOP_COURSE_CONTENT_H

#ifdef __cplusplus
extern "C" {
#endif

#include <time.h>

typedef float EOP_ContentAcceleration;
//Подумать, как лучше хранить метку времени контента
typedef int EOP_ContentLastTime;

typedef struct EOP_ContentTime
{
    EOP_ContentAcceleration acceleration;
    EOP_ContentLastTime lastTime; 
} EOP_ContentTime;


typedef float EOP_ContentCompleteness;
typedef time_t EOP_LastVisitTime;

typedef struct EOP_ContentExt
{
    EOP_ContentCompleteness completeness;
    EOP_LastVisitTime lastTime; 
} EOP_ContentExt;


typedef float EOP_ContentMark;

#ifdef __cplusplus
}
#endif

#endif