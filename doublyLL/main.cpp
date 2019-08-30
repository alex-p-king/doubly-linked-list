#include <iostream>
#include "Node.h"
#include "DoublyLinkedList.h"

int main() {
	DoublyLinkedList myList;
	myList.insert(4);
	myList.insert(4);
	myList.insert(19);
	myList.insert(2);
	myList.insert(22);
	myList.smallest();
	myList.largest();
	//myList.print();
	std::cin.get();
}