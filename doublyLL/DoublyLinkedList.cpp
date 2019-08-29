#include "DoublyLinkedList.h"



DoublyLinkedList::DoublyLinkedList()
{
	m_size = 0;
	m_front = nullptr;
	m_back = nullptr;
}


DoublyLinkedList::~DoublyLinkedList()
{
	m_size = 0;
	m_front = nullptr;
	m_back = nullptr;
}

bool DoublyLinkedList::isEmpty() 
{
	return(m_size == 0);
}

void DoublyLinkedList::insert(int val)
{
	if (this->isEmpty()) {
		m_front = new Node;
		m_front->setValue(val);
		m_back = m_front;
		m_size++;
	}
	else {
		Node* temp = new Node;
		temp->setValue(val);
		m_size++;
		temp->setPrev(m_back);
		m_back->setNext(temp);
		m_back = temp; 
		delete temp;
	}
}

void DoublyLinkedList::dllDelete()
{

}

Node* DoublyLinkedList::smallest() 
{
	return nullptr;
}

Node* DoublyLinkedList::largest() 
{
	return nullptr;
}

Node* DoublyLinkedList::average() 
{
	return nullptr;
}

void DoublyLinkedListmerge2Lists() 
{

}

void DoublyLinkedList::print() 
{
	if (m_size == 0) {
		std::cout << "List is empty" << "\n";
	}
	else if (m_size == 1) {
		m_front->printNode();
	}
	else {
		Node* temp = m_front;
		for (int i = 0; i < m_size; i++) {
			temp->printNode();
			temp = temp->getNext();
		}
	}
}

DoublyLinkedList DoublyLinkedList::reverseList() 
{
	return *this;
}

