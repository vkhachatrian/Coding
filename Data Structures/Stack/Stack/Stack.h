#ifndef STACK_H
#define STACK_H

#include <initializer_list>

class Stack
{
public:
	explicit Stack();
	explicit Stack(std::initializer_list<int> values);
	~Stack();

	void push(int value);
	int pop();
	bool empty();


private:
	void resize(int capacity);

	int* m_internalArray;
	int m_top;
	std::size_t m_capacity;
};


#endif // !STACK_H
