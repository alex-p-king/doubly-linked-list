#include <iostream>
#include "Node.h"
#include "DoublyLinkedList.h"

int main() {
	DoublyLinkedList myList;
	myList.insert(0);
	myList.insert(1);
	myList.insert(2);
	myList.insert(3);
	myList.insert(4);
	myList.dllDelete(0);
	myList.print();
	std::cin.get();
}