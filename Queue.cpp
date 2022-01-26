#include <iostream>
#include <exception>
#include "Queueh.h"
using namespace std;


class QueueException:public exception
{
public:
	QueueException(const string &message=""):exception(message.c_str())
	{}
};


// constructor
template<class T>
Queue<T>::Queue():m_frontPtr(nullptr), m_backPtr(nullptr) {}


// copy constructor(deep copy)
template<class T>
Queue<T>::Queue(const Queue& Q)
{

	// copy the first node 
	if (Q.m_frontPtr != NULL) {
		m_frontPtr = new QueueNode();
		m_frontPtr->m_data = Q.m_frontPtr->m_data;
		m_frontPtr->m_next = NULL;
		m_backPtr = m_frontPtr;

		// then copy other nodes
		QueueNode* newPtr1 = m_frontPtr;
		QueueNode* newPtr2 = Q.m_frontPtr;
		while (newPtr2->m_next != NULL) {
			newPtr1->m_next = new QueueNode();
			newPtr1->m_next->m_data = newPtr2->m_next->m_data;
			newPtr1->m_next->m_next = NULL;
			m_backPtr = newPtr1->m_next;
			newPtr1 = newPtr1->m_next;
			newPtr2 = newPtr2->m_next;
		}
	}
}

//destructor
template<class T>
Queue<T>::~Queue()
{
	QueueNode* tempPtr = m_frontPtr;
	while (!isEmpty())
	{
		m_frontPtr = m_frontPtr->m_next;
		delete tempPtr;
		//dequeue();
	}
}

//return if the queue is empty or not
template<class T>
bool Queue<T>::isEmpty() const
{
	return (m_frontPtr == NULL);
}


// adding element in queue
template<class T>
void Queue<T>::enqueue(const T& data)
{
	QueueNode* newPtr = new QueueNode;
	if (newPtr == NULL)
	{
		throw QueueException("QueueException: enqueue - memory leak");
	}
	else
		newPtr->m_data = data;

	if (isEmpty())
	{
		m_frontPtr = newPtr;
		m_backPtr = newPtr;
		m_frontPtr->m_next = NULL;
	}
	else
	{
		newPtr->m_next = NULL;
		m_backPtr->m_next = newPtr;
		m_backPtr = newPtr;
	}
}


//deleting element from the queue
template<class T>
void Queue<T>::dequeue()
{
	if (isEmpty()) throw QueueException("dequeue - queue is empty");
	else
	{
		QueueNode* newPtr = m_frontPtr;
		if (m_frontPtr == m_backPtr)
		{
			m_frontPtr = nullptr;
			m_backPtr = nullptr;
		}
		else
			m_frontPtr = m_frontPtr->m_next;

		newPtr->m_next = NULL;
		delete newPtr;
	}
}


//save and delete element from queue
template<class T>
void Queue<T>::dequeue(T& data)
{
	if (isEmpty())throw QueueException("dequeue - queue is empty");
	else
	{
		data = m_frontPtr->m_data;
		dequeue();
	}
}


// returns data of the head of queue
template<class T>
T Queue<T>::getFront()const
{
	if (isEmpty()) throw QueueException("getFront: queue is empty");
	else
		return m_frontPtr->m_data;
}





int main()
{
	Queue<int> q;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);

	Queue<int> q2 = q;

	q2.dequeue();
	q2.dequeue();
	q2.dequeue();
	cout << q2.getFront();
	

	return 0;
}