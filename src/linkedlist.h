
typedef int T;
typedef float T;
typedef double T;
typedef char T;
typedef bool T;

struct Node{
    int id;
    T data;
    Node* next;
};

class LinkedList
{
    private:
        Node* head;
        Node* tail;

    public:
        //Constructor: initializes all of these to be nullptr;
        LinkedList(){};

        //Destructor: Will have defined functionality to free memory before
        //            deleting the linked list object.
        ~LinkedList(){};

        //Getters 
        const Node* getHead() const{return head;}
        const Node* getTail() const{return tail;}

        //Setters 
        void setHead(Node head){this->head = &head;}
        void setTail(Node tail){ this->tail = &tail;}

        //Operator Overloads

        //[] operator

        //Functions 
        void prependNode(Node* newNode){};

        void searchFor(int key){};
        void searchFor(T data){};

        void mergeSort(){};

        void deleteNode(Node* delNode){};

        void unionTwoLinkedLists(){};

        void travelTo(int key){};

        void printList(){};


};