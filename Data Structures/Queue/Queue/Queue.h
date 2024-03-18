#ifndef QUEUE_H
#define QUEUE_H

class Queue
{
public:
	explicit Queue();
	~Queue();

	void enqueue(const int value); // insert element to the back of queue
	void dequeue();
	int front() const;
	int back() const;
	constexpr  bool empty() const { return m_front == nullptr; };
	void clear();
	void print() const;


private:
	void pop_front(); // delete element from the front of queue

	struct QueueNode
	{
		const int data;
		QueueNode* next;
		QueueNode(const int value) : data(value), next(nullptr) {}
	};

	QueueNode* m_front;
	QueueNode* m_back;
};

#endif // !QUEUE_H
