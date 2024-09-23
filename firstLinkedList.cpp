
#include <iostream>
using namespace std;

class Node {
    public:

    int dataField;
    Node* pNext;

};

//Create a function that will print the linked list
//The function will have one parameter, that will be a pointer ot the node.

void printlist (Node* pNode) {
    while (pNode != nullptr)
    {
        cout << pNode-> dataField << "   ";
        pNode = pNode -> pNext;
    }
}


int main()

//Create the list by linking the pointers
{
    Node* phead = new Node();
    Node* psecond = new Node();
    Node* pthird = new Node();
    Node* pNext = new Node();



    Node myNewNode;



// Out the linked list
// Call the print list function



    phead->dataField = 1;
    phead->pNext = psecond;
    psecond->dataField = 2;
    psecond->pNext = pthird;
    pthird->dataField = 3;
    pthird->pNext = NULL;




    //Output the linked list
    //Call the print list pointer


    cout << " \n this is my linked list..\n"  << endl;
    printlist(phead);

    // Add a few nodes to my linked
    Node* pCurrent = new Node;
    pCurrent->dataField = 4;
    pCurrent->pNext = NULL;


    // reposition head of the list
    pNext = pCurrent;

    // Test with the print list
    printlist(pCurrent);



    return 0;
}
