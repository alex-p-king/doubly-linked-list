#pragma once

template<typename T>
class Node
{
public:
	Node();
	~Node();
private:
	int m_size;
	Node<T>* m_next;	//pointer to the next node
	Node<T>* m_prev;	//pointer to the previous node
	T* m_payload;	//pointer to the value the node is carrying
};

