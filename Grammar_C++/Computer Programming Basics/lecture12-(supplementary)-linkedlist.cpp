#include <iostream>

using namespace std;

typedef int ItemType;

struct NodeType;		// Forward Declaration
typedef NodeType* NodePtr;

struct NodeType {
	ItemType component;
	NodePtr link;
};

int main()
{
	NodePtr head;			// External pointer to list
	NodePtr newNodePtr;		// Pointer to newest node
	NodePtr currPtr;		// Pointer to last node

	cout << "Enter 4 integer value." << endl;
	head = new NodeType;
	cin >> head->component;
	currPtr = head;

	for(int count = 1; count <= 3; count++)
	{
		newNodePtr = new NodeType;		// Create new node
		cin >> newNodePtr->component;	// Set its component value
		currPtr->link = newNodePtr;		// Link node into list
		currPtr = newNodePtr;			// Set currPtr to last node
	}

	currPtr->link = NULL;				// Mark end of list
	currPtr = head;

	for(int count = 0; count <= 3; count++)
	{
		cout << "currPtr->component: " << currPtr->component << endl;
		currPtr = currPtr->link;
	}

	return 0;
}



/* Homework 8-1
Extend this code by implementing the following two functions
	int addAfter(int after, int num, NodePtr head);
The function inserts one data item (num) to just after a node with 'after' value.
It returns 0 if there is an item 'after' and adding the new node is done succesfully.
Otherwise, it returns -1.
	int delete(int num, NodePtr head);
This function delete a node that has 'num' value.
It returns 0 if there is an item 'after' and deletion was done succesfully.
Otherwise, it returns -1.
In the main function, get user inputs and call the two functions appropriately in order to check if it works well or not.
*/

/* Homework 8-2
Implement a double linked list based on this code.
Then, implement the following two functions
	addBefore(int before, int num, NodePtr head);
	delete(int num, NodePtr head);
*/