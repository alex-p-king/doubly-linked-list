#include <iostream>
#include "Node.h"
#include "DoublyLinkedList.h"

int main() {
	DoublyLinkedList myList;
	myList.insert(15);
	myList.insert(15);
	myList.insert(15);
	myList.print();
	myList.dllDelete(15);
	std::cin.get();
}