#include <iostream>
#include "Node.h"
#include "DoublyLinkedList.h"

int main() {
	DoublyLinkedList myList;
	myList.insert(6);
	myList.insert(4);
	myList.insert(0);
	myList.insert(2);
	myList.insert(1);
	myList.smallest();
	//myList.print();
	std::cin.get();
}