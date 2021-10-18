#include "node/node.h"

class Hash
{
    private:

        Hash* table;

        Node openHashing(Node);
        Node closedHashing(Node);

    public:

        //Constructor
        Hash();

        //Destructor
        ~Hash();


};