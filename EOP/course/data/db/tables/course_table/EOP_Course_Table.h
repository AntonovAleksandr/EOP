//
// Created by alexandr on 20.05.2024.
//
#include <EOP/course/data/db/db.c>
#ifndef EOP_COURSE_Table_H
#define EOP_COURSE_Table_H


#define COURSE "Course"


char *EOP_Course_Table_create =
        DROP "TABLE IF EXISTS" COURSE ";"
        CREATE "TABLE" COURSE "(\n"
        "    id INTEGER PRIMARY KEY,\n"
        "    title TEXT,\n"
        "    contentExt TEXT,\n"
        "    lessions TEXT,\n"
        "    description TEXT,\n"
        "    mark INTEGER\n"
        ");";

#endif //EOP_COURSE_Table_H
