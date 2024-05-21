//
// Created by alexandr on 20.05.2024.
//
#include <stdio.h>
#include <sqlite3.h>
#include "EOP/course/data/db/tables/course_table/EOP_Course_Table.h"

#ifndef EOP_EOP_COURSE_DAO_H
#define EOP_EOP_COURSE_DAO_H


int EOP_Course_Dao_create(sqlite3 *db, char **err_msg);

#endif //EOP_EOP_COURSE_DAO_H
