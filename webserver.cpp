#ifndef REQUEST_CPP
#include "request.cpp"
#endif

class webserver
{
    private:
        request r;
        int requestStartTime;
        char serverName;

    public:
        webserver()
        {
            requestStartTime = 0;
            serverName = ' ';
        }

        webserver(char c)
        {
            requestStartTime = 0;
            serverName = c;
        }


        void addRequest(request req, int currTime)
        {
            r = req;
            requestStartTime = currTime;
        }

        request getRequest()
        {
            return r;
        }

        char getName()
        {
            return serverName;
        }

        bool isRequestDone(int currTime)
        {
            return (currTime >= (requestStartTime + r.processTime));
        }
};