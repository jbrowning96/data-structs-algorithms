typedef int T;
typedef float T;
typedef double T;
typedef char T;
typedef bool T;

class Node
{
    private:

        int id;
        T data;
        Node* next;

    public:

};

class gridNode: public Node
{  
    private:

        int id;
        T data;

        Node* up, down, left, right;
    
    public:
        
};

class doubleEndedNode : public Node
{
    private:

        int id;
        T data;

        Node* prev, next;

    public:

};