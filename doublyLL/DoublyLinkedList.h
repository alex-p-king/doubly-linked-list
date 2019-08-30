#include "Node.h"

class DoublyLinkedList
{
public:
	DoublyLinkedList();
	~DoublyLinkedList();

	bool isEmpty(); // Returns true if list is empty or head node is NULL.
	void insert(int val); // Inserts an element at the end of linked list.
	bool dllDelete(int val); // Deletes an element given if present and deletes the first occurrence of the duplicate value
	int smallest(); // Returns the smallest node in the list
	int largest(); // Returns the largest node in the list
	int average(); // Finds average of all the elements of the list.
	void merge2Lists(); // Merges the new list with the old list. New merged list will be sorted in ascending order
	void print(); // prints all elements of the list
	DoublyLinkedList reverseList(); // Returns the reversed list of the original list.
	

	
	Node* getFront(); // returns the pointer to the front of the list
	Node* getBack(); // returns the pointer to the back of the list

private:
	int m_size; // contains the size of the list
	Node* m_front; // pointer to the front of the list
	Node* m_back; // pointer to the last node of the list
};
