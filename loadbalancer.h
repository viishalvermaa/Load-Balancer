#define LOADBALANCER_H

#ifndef REQUEST_CPP
#include "request.cpp"
#endif

#include "arrayqueue.h"

class loadbalancer
{
    private:
        int systemTime;
        queue<request> requestQueue;

    public:
        loadbalancer()
        {
            systemTime = 0;
        }

        int getTime();
        void incTime();
        void addRequest(request r);
        request getRequest();
        bool isRequestQueueEmpty();
};

#include "loadbalancer.cpp"
