#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

template <class T>
class List
{
private:
	template <class T>
	struct Node
	{
		T data;
		Node<T>* next;
		Node(T data = 0, Node<T>* pnext = 0)
		{
			this->data = data;
			this->next = pnext;
		}
	};
	Node<T>* head;
	int size;
	void writeString(Node<T>* stringPtr);
public:
	List() { size = 0, head = NULL; }
	List(T data)
	{

	}
	~List() { clear(); };
	void push(int data);
	int getLength() const;
	T& operator[](const int index);
	void pop_front();
	void push_front(T data);
	void clear();
	void insert(T data, int index);
	void removeAt(int index);
	void pop_back();
};

template <class T>
void List<T>::writeString(Node<T>* stringPtr)
{
	if (stringPtr != nullptr)
	{
		cout << stringPtr->data;
		writeString(stringPtr->next);
	}
}

template <class T>
void List<T>::push(int data)
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

template <class T>
int List<T>::getLength() const
{
	return size;
}

template <class T>
T& List<T>::operator[](const int index)
{
	int counter = 0;
	Node<T>* current = head;
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

template <class T>
void List<T>::pop_front()
{
	Node<T>* current = head;
	head = head->next;
	delete current;
	size--;
}

template <class T>
void List<T>::push_front(T data)
{
	head = new Node<T>(data, head);
	size++;
}

template <class T>
void List<T>::clear()
{
	while (size)	
	{
		pop_front();
	}
}

template <class T>
void List<T>::insert(T data, int index)
{
	if (index == 0)
	{
		push_front(data);
	}
	else
	{
		Node<T>* prev = this->head;
		for (int i = 0; i < index-1; i++)
		{
			prev = prev->next;
		}
		prev->next = new Node<T>(data, prev->next);
		size++;

	}
}
template <class T>
void List<T>::removeAt(int index)
{
	if (index == 0)
	{
		pop_front();
	}
	else
	{
		Node<T>* prev = this->head;
		for (int i = 0; i < index-1; i++)
		{
			prev = prev->next;
		}
		Node<T>* del = prev->next;
		prev->next = del->next;
		delete del;
		size--;
	}
}

template <class T>
void List<T>::pop_back()
{
	removeAt(size - 1);
}

	


int main()
{
	List<char> lst;
	//try
	//{
	//	ifstream file("list.txt");
	//	const int maxsize = 8;
	//	int arr[maxsize]{};
	//	for (int i = 0; i < maxsize; ++i)
	//	{
	//		file >> arr[i];
	//		lst.push(arr[i]);
	//	}
	//
	//}
	//catch (const std::exception& ex)
	//{
	//	cout << ex.what() << endl;
	//}
	
	lst.insert('V', 0);
	lst.insert('a', 1);
	lst.insert('h', 2);
	lst.insert('a', 3);
	lst.insert('n', 4);

	for (int i = 0; i < lst.getLength(); ++i)
	{
		cout << lst[i];
	}
	cout << endl << endl;

	List<int> lst2;
	lst2.insert(4, 0);
	lst2.insert(5, 1);
	lst2.insert(6, 2);
	lst2.insert(7, 3);
	lst2.insert(8, 4);

	for (int i = 0; i < lst2.getLength(); ++i)
	{
		cout << lst2[i];
	}

	//List<int> a = { 1,2,3,4 };


	return 0;
}