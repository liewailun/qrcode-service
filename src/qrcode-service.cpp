#include <iostream>
#include <memory>
#include "IHttpServer.hpp"
#include "HttpServer_httplib.hpp"

int main() {
    std::cout << "Starting HTTP server..." << std::endl;

    std::unique_ptr<IHttpServer> server = std::make_unique<HttpServer_httplib>();
    server->start(8080);
    
    return 0;
}