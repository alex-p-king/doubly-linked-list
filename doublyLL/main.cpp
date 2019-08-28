#include <iostream>
#include "Node.h"
#include "DoublyLinkedList.h"

int main() {
	DoublyLinkedList myList;


	myList.addFront(3);
	myList.addFront(2);
	myList.addFront(1);
	myList.printList();
	std::cin.get();
}