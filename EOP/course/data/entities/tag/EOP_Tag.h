#ifndef EOP_COURSE_TAG_H
#define EOP_COURSE_TAG_H

#ifdef __cplusplus
extern "C" {
#endif


#define EOP_COURSE_TAG_SINGLE_DATA_MAX_LENGTH 20
#define EOP_COURSE_TAG_DATA_MAX_LENGTH 10 

typedef int EOP_TagId;
typedef int EOP_TagSingleDataLength;
typedef int EOP_TagDataLength;
//Поменять на массив строк
typedef char EOP_TagSingleStr[EOP_COURSE_TAG_SINGLE_DATA_MAX_LENGTH];
typedef EOP_TagSingleStr EOP_TagStrArray[EOP_COURSE_TAG_DATA_MAX_LENGTH];

typedef struct EOP_TagSingleData
{    
    EOP_TagSingleStr data;
    EOP_TagSingleDataLength length;
} EOP_TagSingleData;

typedef struct EOP_TagData
{    
    EOP_TagStrArray data;
    EOP_TagDataLength length;
} EOP_TagData;

typedef struct EOP_Tag
{
    EOP_TagId id;
    EOP_TagData data;    
} EOP_Tag;

#ifdef __cplusplus
}
#endif

#endif