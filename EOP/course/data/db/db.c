//
// Created by alexandr on 18.05.2024.
//
#include <sqlite3.h>
#include <stdio.h>

#define CREATE "CREATE"
#define DROP "DROP"
#define SELECT "SELECT"


void dbConnection(){
    sqlite3 *db;    // указатель на базу данных
    // открываем подключение к базе данных
    int result  = sqlite3_open("test.db", &db);
    // если подключение успешно установлено
    if(result == SQLITE_OK)
    {
        printf("Connection established\n");
    }
    else
    {
        // выводим сообщение об ошибке
        fprintf(stderr, "Error: %s\n", sqlite3_errmsg(db));
    }
    // закрываем подключение
    sqlite3_close(db);
}