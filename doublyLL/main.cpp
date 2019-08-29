#include <iostream>
#include "Node.h"
#include "DoublyLinkedList.h"

int main() {
	DoublyLinkedList myList;
	myList.insert(15);
	myList.insert(16);
	myList.insert(17);
	myList.insert(18);
	myList.dllDelete(17);
	myList.print();
	std::cin.get();
}