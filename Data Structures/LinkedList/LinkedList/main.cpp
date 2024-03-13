#include "LinkedList.h"

#include <iostream>

int main()
{
	LinkedList linkedList;

	linkedList.push_back(1);
	linkedList.push_back(2);
	linkedList.push_back(3);
	linkedList.push_back(4);
	linkedList.push_back(5);
	linkedList.push_back(6);
	linkedList.push_back(66);
	linkedList.push_back(90);

	linkedList.print();

	linkedList.clear();

	linkedList.pop_back();


	linkedList.push_back(999999);
	linkedList.print();

	linkedList.pop_back();

	linkedList.print();

	return 0;
}