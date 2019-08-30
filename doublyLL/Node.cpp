#include "Node.h"

Node::Node()
{
	m_next = nullptr;
	m_prev = nullptr;
}

Node::Node(Node * n, bool next, int val)
{
	(next == true) ? (m_next = n) : (m_prev = n);
	m_value = val;
	
}

Node::Node(Node * p, Node * n, int val)
{
	m_next = n;
	m_prev = p;
	m_value = val;
}

Node::~Node()
{
	m_next = nullptr;
	m_prev = nullptr;
}

Node * Node::getNext() const
{
	return m_next;
}

Node * Node::getPrev() const
{
	return m_prev;
}

int Node::getValue() const
{
	return m_value;
}

void Node::setNext(Node * next)
{
	m_next = next;
}

void Node::setPrev(Node * prev)
{
	m_prev = prev;
}

void Node::setValue(int val)
{
	m_value = val;
}

void Node::printNode()
{
	std::cout << m_value << " ";
}

void Node::swapPointers() {
	Node* temp = m_prev;
	m_prev = m_next;
	m_next = temp;
}
