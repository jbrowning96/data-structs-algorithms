#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"

template <typename T>

class LinkedList
{
    private:
        Node<T>* head;
        Node<T>* tail;

    public:
        //Constructor: initializes all of these to be nullptr;
        LinkedList(){};

        //Destructor: Will have defined functionality to free memory before
        //            deleting the linked list object.
        ~LinkedList(){};

        //Getters 
        const Node<T>* getHead() const{return head;}
        const Node<T>* getTail() const{return tail;}

        //Setters 
        void setHead(Node<T> head){this->head = head;}
        void setTail(Node<T> tail){ this->tail = tail;}

        //Operator Overloads

        //[] operator

        //Functions 
        void prependNode(Node<T>* newNode){};

        void searchFor(int key){};
        void searchFor(T data){};

        void mergeSort(){};

        void deleteNode(Node<T>* delNode){};

        void unionTwoLinkedLists(){};

        void travelTo(int key){};

        void printList(){};


};
#endif