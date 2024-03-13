#include "Stack.h"

#include <algorithm>
#include <iostream>

Stack::Stack()
	: m_top(-1),
	  m_capacity(100)
{
	m_internalArray = new int[m_capacity];
}

Stack::Stack(std::initializer_list<int> values)
	: m_capacity(values.size()),
	  m_top(-1)
{
	m_internalArray = new int[m_capacity];

	for (int item : values)
		m_internalArray[++m_top] = item;
}

Stack::~Stack()
{
	if (m_internalArray)
	{
		delete[] m_internalArray;
		m_internalArray = nullptr; // can be removed
	}
}

void Stack::push(int value)
{
	if (m_top == m_capacity - 1)
		resize(m_capacity * 2);
	
	++m_top;
	m_internalArray[m_top] = value;
}

int Stack::pop()
{
	if (empty())
		return -1;

	if (m_top < m_capacity / 4)
		resize(m_capacity / 2);

	int topValue = m_internalArray[m_top];
	--m_top;

	return topValue;
}

bool Stack::empty()
{
	return m_top == -1;
}

void Stack::resize(int capacity)
{
	int* tempArray = new int[capacity];

	for (std::size_t i = 0; i <= m_top; ++i)
		tempArray[i] = m_internalArray[i];

	delete[] m_internalArray;
	m_internalArray = tempArray;
	m_capacity = capacity;
}
