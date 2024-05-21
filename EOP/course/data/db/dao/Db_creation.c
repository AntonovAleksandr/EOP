//
// Created by alexandr on 20.05.2024.
//
#include <sqlite3.h>
#include <stdio.h>
#include "EOP_Course_Dao.h"


int main() {
    sqlite3 *db;    // указатель на базу данных
    char *err_msg = 0;  // сообщение об ошибке
    // создаем базу данных
    int rc = sqlite3_open("test.db", &db);
    // если подключение прошло неудачно
    if (rc != SQLITE_OK) {
        sqlite3_close(db);
        return 1;
    }
    char *sql = "DROP TABLE IF EXISTS Course;"
                "CREATE TABLE Course (\n"
                "    id INTEGER PRIMARY KEY,\n"
                "    title TEXT,\n"
                "    contentExt TEXT,\n"
                "    lessons TEXT,\n"
                "    description TEXT,\n"
                "    mark INTEGER\n"
                ");";

   /* char *lesson =
            "DROP TABLE IF EXISTS Lession;"
            "CREATE TABLE Lession (\n"
            "    id INTEGER PRIMARY KEY,\n"
            "    courseId INTEGER,\n"
            "    FOREIGN KEY (courseId) REFERENCES Course(id)\n"
            ");";*/


    rc = EOP_Course_Dao_create(db, &err_msg);
    if (rc != SQLITE_OK) {
        printf("SQL error: %s\n", err_msg);
        sqlite3_free(err_msg);      // очищаем ресурсы
        sqlite3_close(db);
        return 1;
    }
    sqlite3_close(db);
    printf("Table created\n");
    return 0;
}
