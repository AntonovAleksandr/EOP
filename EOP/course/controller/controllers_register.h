//
// Created by alexandr on 20.05.2024.
//

#ifndef EOP_CONTROLLERS_REGISTER_H
#define EOP_CONTROLLERS_REGISTER_H

#include <third_party/mongoose.h>

#ifdef __cplusplus
extern "C" {
#endif

void controllers_register(struct mg_connection *pConnection, struct mg_http_message *pMessage){
    if (mg_match(pMessage->uri, mg_str("/api/hello"), NULL)) {              // REST API call?
        mg_http_reply(pConnection, 200, "", "{%m:%d}\n", MG_ESC("status"), 1);    // Yes. Respond JSON
    } else if (mg_match(pMessage->uri, mg_str("/api/hello"), NULL)) {              // REST API call?
        mg_http_reply(pConnection, 200, "", "{%m:%d}\n", MG_ESC("status"), 1);    // Yes. Respond JSON
    }
    else {
        struct mg_http_serve_opts opts = {.root_dir = "."};  // For all other URLs,
        mg_http_serve_dir(pConnection, pMessage, &opts);                     // Serve static files
    }
};

#endif //EOP_CONTROLLERS_REGISTER_H
