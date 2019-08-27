#include "Node.h"


template <typename T>
Node<T>::Node()
{
	m_size++;
	m_next = nullptr;
	m_prev = nullptr;
	m_payload = 0;
}

template <typename T>
Node<T>::~Node<T>()
{
	m_size--;
	m_next = nullptr;
	m_prev = nullptr;
	m_payload = 0;
}

template<typename T>
int Node<T>::getSize()
{
	return(m_size);
}




