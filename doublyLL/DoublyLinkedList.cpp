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

int DoublyLinkedList::getSize() 
{
	return m_size;
}

void DoublyLinkedList::addFront(int value) 
{
	if (m_size == 0) {
		m_front = new Node;
		m_front->setValue(value);
		m_size++;
	}
	else {
	Node* temp = new Node;
	m_front->setPrev(temp);
	temp->setNext(m_front);
	m_front = temp;
	m_front->setValue(value);
	m_size++;
	}
}

void DoublyLinkedList::printList() 
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

