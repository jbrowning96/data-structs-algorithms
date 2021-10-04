//Implementing a queue as an array of nodes
#ifndef QUEUE_H
#define QUEUE_H

#include "node.h"

template <typename T>

class Queue
{
    private:
        Node<T>** nodeArrPtr;

    public:
        //Constructor
        Queue();

        //Destructor
        ~Queue();

};
#endif