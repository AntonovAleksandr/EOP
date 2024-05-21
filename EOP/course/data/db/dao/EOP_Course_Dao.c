//
// Created by alexandr on 20.05.2024.
//
#include <EOP/course/data/db/dao/EOP_Course_Dao.h>


int EOP_Course_Dao_create(sqlite3 *db, char **err_msg) {
    return  sqlite3_exec(db, EOP_Course_Table_create, 0, 0, err_msg);
}
