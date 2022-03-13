//arrayqueue.h
#define QUEUE_H

template <typename T>
class queue
{
    private:
        T *data;
        int head,tail,size;
        bool needToResize();
        void resize();


    public:
        queue()
        {
            size = 5;
            data = new T[size];
            head = 0;
            tail = 0;
        }

        void enqueue(T data);
        T dequeue();
        T peek();
        bool isEmpty();
};
 
#include "arrayqueue.cpp"