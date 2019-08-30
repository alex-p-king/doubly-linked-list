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
		temp->setPrev(m_back);
		m_back->setNext(temp);
		m_back = temp;
		m_size++;
	}
}

bool DoublyLinkedList::dllDelete(int val)
{
	Node* temp = m_front;
	int pos = 0;
	for (int i = 0; i < m_size; i++) {
		if (temp->getValue() == val) {
			if (pos == 0) {
				m_front = m_front->getNext();
				m_front->setPrev(nullptr);
				delete temp;
				m_size--;
				return true;
			}
			else if (pos == m_size - 1) {
				m_back = m_back->getPrev();
				m_back->setNext(nullptr);
				delete temp;
				m_size--;
				return true;
			}
			else {
				Node* temp2;
				Node* temp3;
				temp2 = temp3 = temp;
				temp2 = temp2->getPrev();
				temp3 = temp3->getNext();
				temp2->setNext(temp3);
				temp3->setPrev(temp2);
				delete temp;
				m_size--;
				return true;
			}
		}
		temp = temp->getNext();
		pos++;
	}
	return false;
}

int DoublyLinkedList::smallest() 
{
	Node* temp = m_front->getNext();
	int smallest = m_front->getValue();
	for (int i = 1; i < m_size; i++) {
		if (temp->getValue() < smallest) {
			smallest = temp->getValue();
		}
		temp = temp->getNext();
	}
	
	std::cout << smallest << "\n";
	return smallest;
}

int DoublyLinkedList::largest() 
{
	Node* temp = m_front->getNext();
	int largest = m_front->getValue();
	for (int i = 1; i < m_size; i++) {
		if (temp->getValue() > largest) {
			largest = temp->getValue();
		}
		temp = temp->getNext();
	}

	std::cout << largest << "\n";
	return largest;
}

double DoublyLinkedList::average() 
{
	Node* temp = m_front->getNext();
	double avg = m_front->getValue();
	for (int i = 1; i < m_size; i++) {
		avg += temp->getValue();
		temp = temp->getNext();
	}
	std::cout << (avg / m_size) << "\n";
	return (avg / m_size);
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

