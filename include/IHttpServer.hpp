#ifndef IHTTP_SERVER_HPP
#define IHTTP_SERVER_HPP

// Http Server Interface
class IHttpServer {
    public:
        virtual ~IHttpServer() = default;

        virtual void start(int port) = 0;

        virtual void stop() = 0;
};


#endif // IHTTP_SERVER_HPP