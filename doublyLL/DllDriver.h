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
	void insert();
	void dllDelete();
	void smallest();
	void largest();
	void average();
	void merge();
	void print();
	void reverse();
	DoublyLinkedList extractInt(std::string uString);
private:
	DoublyLinkedList m_list;

};

