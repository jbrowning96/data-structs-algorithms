#ifndef GRID_CLASS_H
#define GRID_CLASS_H

//Goal: To make nodes which can accept any data type.
template <typename T>

class Node{

    private:

        int key;
        T data;
        
        //Pointer
        Node* next;

    public:
        
        //Constructors
        Node<T>(int key, T data)
        {
            this->key = key;
            this->data = data;
        }

        Node<T>(int key)
        {
            this->key = key;
            this->data = NULL;
        }

        //Destructors
        ~Node<T>();
        
        //Getters
        int getKey(){return key;}
        T getData(){return data;}
        Node*<T> getNext(){return next;}

        //Setters
        void setKey(int key){this->key = key;}
        void setData(T data){this->data = data;}
        void setNext(Node* nextPtr){this->next = nextPtr;}
        
};
#endif