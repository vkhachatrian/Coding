#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class LinkedList
{
public:
	explicit LinkedList();
	~LinkedList();

	void push_back(int value);
	void pop_back();
	bool search_value(int value);
	void clear();
	void print();

private:
	void delete_list();


	struct Node
	{
		int data;
		Node* next;
	};
	Node* m_head;
};

#endif // !LINKEDLIST_H

