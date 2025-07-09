#ifndef HTTP_SERVER_HTTPLIB_HPP
#define HTTP_SERVER_HTTPLIB_HPP

#include "IHttpServer.hpp"
#include "httplib.h"

class HttpServer_httplib : public IHttpServer {
public:
    HttpServer_httplib();

    void start(int port) override;

    void stop() override;
private:
    httplib::Server server;
};

#endif // HTTP_SERVER_HTTPLIB_HPP