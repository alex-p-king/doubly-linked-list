#pragma once
#include <iostream>

class Node
{
public:
	Node();
	~Node();

	Node* getNext()const;
	Node* getPrev()const;
	int getValue()const;

	void setNext(Node* next);
	void setPrev(Node* prev);
	void setValue(int val);
	void printNode();
	void swapPointers();

private:
	int m_value = 0;
	Node* m_next;
	Node* m_prev;
};

