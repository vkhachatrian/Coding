#include <iostream>
#include "Stack.h"
using namespace std;

template <class T>
Stack<T>::Stack(): m_top(-1) {}

template <class T>
bool Stack<T>::isEmpty()
{
	return m_top == -1;
}

template <class T>
void Stack<T>::push_back(const T& data)
{
	if (m_top > max_size - 1)
		throw out_of_range("out of range");
	else
	{
		++m_top;
		m_array[m_top] = data;
	}
}

template <class T>
void Stack<T>::pop()
{
	if (isEmpty())
		throw out_of_range("Out of range");
	else --m_top;
}

template <class T>
void Stack<T>::pop(T& data)
{
	if (isEmpty())throw out_of_range("Out of Range");
	else
	{
		data = m_array[m_top];
		--m_top;
	}
}

template <class T>
T Stack<T>::top()
{
	if (!isEmpty())
		return m_top;
	else
		throw out_of_range("Out of Range");
}



int main()
{
	Stack<int> s;
	for (int i = 1; i < 6; i++)
	{
		s.push_back(i);
	}
	//cout << s.isEmpty();
	
	while (!s.isEmpty())
	{
		cout << s.top() << endl;
		s.pop();
	}

	return 0;
}
