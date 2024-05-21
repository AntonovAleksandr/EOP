#include <third_party/mongoose.h>
#include <sqlite3.h>
#include "EOP/course/data/db/dao/EOP_Course_Dao.h"


static void api_matcher(struct mg_connection *pConnection, struct mg_http_message *pMessage);

// Connection event handler function
static void fn(struct mg_connection *c, int ev, void *ev_data) {
    if (ev == MG_EV_HTTP_MSG) {  // New HTTP request received
        struct mg_http_message *hm = (struct mg_http_message *) ev_data;// Parsed HTTP request
        api_matcher(c, hm);
    }
}

static void api_matcher(struct mg_connection *pConnection, struct mg_http_message *pMessage) {
    if (mg_match(pMessage->uri, mg_str("/api/course#"), NULL)) {              // REST API call?
        if (mg_match(pMessage->uri, mg_str("/api/course"), NULL)) {              // REST API call?
            mg_http_reply(pConnection, 200, "", "{%m:%d}\n", MG_ESC("api/hello"), 1);    // Yes. Respond JSON
        } // Yes. Respond JSON
    } else if (mg_match(pMessage->uri, mg_str("/api/lections#"), NULL)) {              // REST API call?
        mg_http_reply(pConnection, 200, "", "{%m:%d}\n", MG_ESC("status"), 2);    // Yes. Respond JSON
    } else {
        struct mg_http_serve_opts opts = {.root_dir = "."};  // For all other URLs,
        mg_http_serve_dir(pConnection, pMessage, &opts);                     // Serve static files
    }
}

//int main() {
//    struct mg_mgr mgr;  // Mongoose event manager. Holds all connections
//    mg_mgr_init(&mgr);  // Initialise event manager
//    mg_http_listen(&mgr, "http://0.0.0.0:8000", fn, NULL);  // Setup listener
//
//    for (;;) {
//        mg_mgr_poll(&mgr, 1000);  // Infinite event loop
//    }
//    return 0;
//}


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
             "DROP TABLE IF EXISTS Lesson;"
             "CREATE TABLE Lesson (\n"
             "    id INTEGER PRIMARY KEY,\n"
             "    courseId INTEGER,\n"
             "    FOREIGN KEY (courseId) REFERENCES Course(id)\n"
             ");";*/

    rc = sqlite3_exec(db, sql, 0, 0, err_msg);
//    rc = EOP_Course_Dao_create(db, &err_msg);
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
