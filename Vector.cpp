#include <iostream>
#include ""
#include <string>
using namespace std;



class Student
{
private:
	char m_name[20];
	char m_surname[20];
	int m_groupNumber;
	int m_cource;

public:
	Student() {};

	void setName(char name[])
	{
		//strcpy(m_name, name);
	}
	void setSurname();
	bool operator==(const Student& other);

	void print();


};


template <class T>
class Vector
{
private:
	T* m_array = NULL;
	unsigned int m_capacity;
	unsigned int m_size;
public:
	Vector();
	Vector(const Vector<T>& other);
	Vector(unsigned int num, const T& val);
	~Vector() { delete[]  m_array; }
	int get_capacity() const;
	int get_size() const;
	bool empty()const;
	void push_back(const T& data);
	void insert(const T& data, int index);
	void pop_back();
	T& operator[](int i);
	void clear();
	void print();
	//bool contains(const T& obj);
	T& at(int index);

};

template<class T>
T& Vector<T>::at(int index)
{
	try
	{
		if (index > m_size - 1)
		{
			throw std::invalid_argument("Out of range");
		}
		return m_array[index];

	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
	}
}
template<class T>
void Vector<T>::push_back(const T& data)
{
	if (m_size == m_capacity) {
		T* temp = new T[2 * m_capacity];

		// copying old array elements to new array
		for (int i = 0; i < m_capacity; i++) {
			temp[i] = m_array[i];
		}

		// deleting previous array
		delete[] m_array;
		m_capacity *= 2;
		m_array = temp;
	}

	// Inserting data
	m_array[m_size] = data;
	m_size++;
}


template<class T>
void Vector<T>::insert(const T& data, int index)
{
	if (index == m_capacity)
		push_back(data);
	else
		m_array[index] = data;
}

template<class T>
void Vector<T>::pop_back()
{
	--m_size;
	T* temp = new T[m_size];
	for (int i = 0; i < m_size; i++)
	{
		temp[i] = m_array[i];
	}
	delete[] m_array;
	m_array = temp;
}

template<class T>
T& Vector<T>::operator[](int i)
{
	return m_array[i];
}

template<class T>
int Vector<T>::get_capacity()const
{
	return m_capacity;
}

template<class T>
int Vector<T>::get_size() const
{
	return m_size;
}

template<class T>
bool Vector<T>::empty() const
{
	return m_size == 0;
}

template<class T>
void Vector<T>::print()
{
	for (int i = 0; i < m_size; ++i)
	{
		cout << m_array[i] << " ";
	}
	cout << endl;
}


template<class T>
Vector<T>::Vector()
{
	m_array = new T[1];
	m_capacity = 1;
	m_size = 0;
}

template<class T>
Vector<T>::Vector(const Vector<T>& other)
{
	m_size = other.m_size;
	m_capacity = other.m_capacity;
	m_array = new T[m_size];
	for (unsigned int i = 0; i < m_size; i++)
		m_array[i] = other.m_array[i];
}

template<class T>
Vector<T>::Vector(unsigned int num, const T& val)
{
	m_size = num;
	m_capacity = num;
	m_array = new T[num];
	for (unsigned int i = 0; i < num; i++)
		m_array[i] = val;
}

template <class T>
void Vector<T>::clear()
{
	m_capacity = 0;
	m_size = 0;
	m_array = 0;
}


//int main()
//{
//	Student s;
//	Vector<int> p;
//	p.push_back(4);
//	p.push_back(5);
//	p.push_back(6);
//	p.push_back(7);
//	p.push_back(8);
//	p.pop_back();
//	p.pop_back();
//	p.pop_back();
//	p.pop_back();
//	//p.pop_back();
//	p.print();
//
//	return 0;
//}
//
