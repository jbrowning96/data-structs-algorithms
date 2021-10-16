#ifndef GRID_CLASS_H
#define GRID_CLASS_H

//Goal: To make nodes which can accept any data type.
typedef int T;
typedef double T;
typedef float T;
typedef char T;
class Node{

    private:

        int key;
        T data;
        
        //Pointer
        Node* next;

    public:
        
        //Constructors
        Node(int key, T data)
        {
            this->key = key;
            this->data = data;
        }

        Node(int key)
        {
            this->key = key;
            this->data = NULL;
        }

        //Destructors
        ~Node();
        
        //Getters
        int getKey(){return key;}
        T getData(){return data;}
        Node* getNext(){return next;}

        //Setters
        void setKey(int key){this->key = key;}
        void setData(T data){this->data = data;}
        void setNext(Node* nextPtr){this->next = nextPtr;}
        
};
#endif