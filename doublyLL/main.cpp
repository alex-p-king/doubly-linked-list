#include <iostream>
#include "Node.h"
#include "DoublyLinkedList.h"

int main() {
	DoublyLinkedList myList;
	myList.insert(15);
	myList.insert(15);
	myList.insert(15);
	myList.dllDelete(15);
	myList.print();
	std::cin.get();
}