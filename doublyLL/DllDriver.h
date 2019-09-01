#pragma once
#include "DoublyLinkedList.h"
#include <fstream>
class DllDriver
{
public:
	DllDriver();
	int* m_commandList;
	bool m_quit = false;
	int m_selection;
	void run();
	void printMenu();
	void option1();
	void option2();
	void option3();
	void option4();
	void option5();
	void option6();
	void option7();
	void option8();
	void extractInt(std::string uString);
private:
	DoublyLinkedList m_list;
	DoublyLinkedList* m_list2;

};

