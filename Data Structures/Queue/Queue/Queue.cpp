#include "Queue.h"

#include <iostream>

Queue::Queue()
	: m_front(nullptr),
	  m_back(nullptr)
{
}

Queue::~Queue()
{
	clear();
}

void Queue::enqueue(const int value)
{
	QueueNode* newNode = new QueueNode(value);
	if (newNode == nullptr)
		return;

	if (empty())
	{
		m_front = newNode;
		m_back = m_front;
	}
	else
	{
		m_back->next = newNode;
		m_back = newNode;
	}
}

void Queue::dequeue()
{
	pop_front();
}

void Queue::pop_front()
{
	if (m_front == nullptr)
		return;

	QueueNode* tempPtr = m_front;
	m_front = m_front->next;
	delete tempPtr;
	tempPtr = nullptr;
}


int Queue::front() const
{
	if (m_front == nullptr)
		return -1;

	return m_front->data;
}

int Queue::back() const
{
	if (m_back == nullptr)
		return -1;

	return m_back->data;
}

void Queue::clear()
{
	if (m_front == nullptr)
		return;

	while (m_front->next != nullptr)
	{
		QueueNode* tempPtr = m_front->next;
		delete m_front;
		m_front = tempPtr;
	}

	delete m_front;
	m_front = m_back = nullptr;
}

void Queue::print() const
{
	const QueueNode* current = m_front;

	while (current != nullptr) {
		std::cout << current->data << " ";
		current = current->next;
	}

	std::cout << std::endl;
}
