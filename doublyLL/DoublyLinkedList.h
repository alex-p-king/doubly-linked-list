#include "Node.h"

class DoublyLinkedList
{
public:
	DoublyLinkedList();
	~DoublyLinkedList();

	int getSize(); // returns m_size
	void addFront(int value); // adds a node to the front of the list
	void addBack(); // adds a node to the end of the list
	void removeFront(); // removes the node from the front of the list
	void removeBack(); // removes the last node from the list
	void remove(int pos); // removes a node at the specified position
	void insert(int pos, Node node); // inserts a node into the list
	void printList(); // prints the list to console
	Node* getFront(); // returns the pointer to the front of the list
	Node* getBack(); // returns the pointer to the back of the list

private:
	int m_size; // contains the size of the list
	Node* m_front; // pointer to the front of the list
	Node* m_back; // pointer to the last node of the list
};
