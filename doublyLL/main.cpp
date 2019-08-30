#include <iostream>
#include "Node.h"
#include "DoublyLinkedList.h"

int main() {
	DoublyLinkedList myList;
	myList.insert(1);
	myList.insert(2);
	myList.insert(3);
	myList.insert(4);
	myList.insert(5);
	myList.print();
	std::cout << "\n";
	myList.reverseList();
	myList.print();
	std::cin.get();
}