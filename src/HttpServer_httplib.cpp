#include "HttpServer_httplib.hpp"

HttpServer_httplib::HttpServer_httplib() : server() {}

void HttpServer_httplib::start(int port) {
    server.Get("/hello", [](const httplib::Request &req, httplib::Response &resp) {
        resp.set_content("Hello, World!", "text/plain");
    });
    server.listen("0.0.0.0", port);
}

void HttpServer_httplib::stop() {
    server.stop();
}
