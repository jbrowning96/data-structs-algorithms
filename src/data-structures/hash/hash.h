#include "~/development/data-structs-c-cpp/src/data-structures/node/node.h"

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
            cout << "some shit" << endl;

};