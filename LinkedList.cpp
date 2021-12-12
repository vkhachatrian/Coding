#include <iostream>
#include <fstream>
using namespace std;

class List
{
private:
	struct Node
	{
		int data;
		Node* next;
		Node(int data = 0, Node* pnext = 0)
		{
			this->data = data;
			this->next = pnext;
		}
	};
	Node* head;
	int size;
public:
	List() { size = 0, head = NULL; }
	~List() { clear(); };
	void push(int data);
	int getLength() const;
	int& operator[](const int index);
	void pop_front();
	void push_front(int data);
	void clear();
	void insert(int data, int index);
	void removeAt(int index);
	void pop_back();
	void outInFile(ostream &file) {
		ostream file("list.txt");
		for (Node* i = head; i != nullptr; i = i->next)
		{
			file << i->data << endl;
		}

	}
};

void List::push(int data)
{
	if (head == NULL)
	{
		head = new Node(data);
	}
	else
	{
		Node* current = this->head;
		while (current->next != nullptr)
		{
			current = current->next;
		}
		current->next = new Node(data);	
	}
	size++;
}

int List::getLength() const
{
	return size;
}

int& List::operator[](const int index)
{
	int counter = 0;
	Node* current = head;
	while (current != nullptr)
	{
		if (counter == index)
		{
			return current->data;
		}
		current = current->next;
		counter++;
	}
}

void List::pop_front()
{
	Node* current = head;
	head = head->next;
	delete current;
	size--;
}

void List::push_front(int data)
{
	head = new Node(data, head);
	size++;
}

void List::clear()
{
	while (size)	
	{
		pop_front();
	}
}

void List::insert(int data, int index)
{
	if (index == 0)
	{
		push_front(data);
	}
	else
	{
		Node* prev = this->head;
		for (int i = 0; i < index-1; i++)
		{
			prev = prev->next;
		}
		prev->next = new Node(data, prev->next);
		size++;

	}
}

void List::removeAt(int index)
{
	if (index == 0)
	{
		pop_front();
	}
	else
	{
		Node* prev = this->head;
		for (int i = 0; i < index-1; i++)
		{
			prev = prev->next;
		}
		Node* del = prev->next;
		prev->next = del->next;
		delete del;
		size--;
	}
}

void List::pop_back()
{
	removeAt(size - 1);
}

	


int main()
{
	List lst;
	lst.push(5);
	lst.push(10);
	lst.push(12);
	lst.push(17);

	ostream file("list.txt");
	lst.outInFile(file);



	return 0;
}