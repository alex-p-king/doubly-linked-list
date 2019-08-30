#include <iostream>
#include "Node.h"
#include "DoublyLinkedList.h"

int main() {
	DoublyLinkedList myList;
	myList.insert(2);
	myList.insert(1);
	myList.insert(4);
	myList.insert(6);
	myList.insert(9);
	
	DoublyLinkedList myList2;
	myList2.insert(3);
	myList2.insert(8);
	myList2.insert(7);
	myList2.insert(10);
	myList2.insert(5);

	

	DoublyLinkedList newList = myList.merge2Lists(myList2);
	newList.print();
	std::cin.get();
}