#pragma once

class Node
{
public:
	Node();
	Node(Node* n, bool next, int val);
	Node(Node* p, Node* n, int val);
	~Node();

	Node* getNext()const;
	Node* getPrev()const;

	void setNext(Node* next);
	void setPrev(Node* prev);
	void setValue(int val);

private:
	int m_value = 0;
	Node* m_next;
	Node* m_prev;
};

