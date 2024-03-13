#include "LinkedList.h"

#include <iostream>

LinkedList::LinkedList()
	:m_head(nullptr)
{
}

LinkedList::~LinkedList()
{
	delete_list();
}

void LinkedList::push_back(int value)
{
	if (m_head == nullptr)
	{
		m_head = new Node;
		m_head->next = nullptr;
		m_head->data = value;
	}
	else
	{
		Node* node = m_head;
		while (node->next != nullptr) {
			node = node->next;
		}

		Node* newNode = new Node;
		newNode->data = value;
		node->next = newNode;
		newNode->next = nullptr;
	}
}

void LinkedList::pop_back()
{
	if (m_head == nullptr)
		return;

	Node* previous = nullptr;
	Node* current = m_head;

	while (current->next != nullptr) {
		previous = current;
		current = current->next;
	}

	if (previous == nullptr) {
		delete m_head;
		m_head = nullptr;
	}
	else {
		delete current;
		previous->next = nullptr;
	}
}

bool LinkedList::search_value(int value)
{
	if (m_head == nullptr)
		return false;

	Node* node = m_head;
	while (node != nullptr)
	{
		if (node->data == value)
			return true;

		node = node->next;
	}

	return false;
}

void LinkedList::clear()
{
	delete_list();
}

void LinkedList::print()
{
	if (m_head == nullptr)
	{
		std::cout << "\nLinked list is empty!";
		return;
	}

	Node* node = m_head;
	while (node)
	{
		std::cout << node->data << " ";
		node = node->next;
	}
	std::cout << std::endl;
}

void LinkedList::delete_list()
{
	if (m_head == nullptr)
		return;

	while (m_head)
	{
		Node* next = m_head->next;
		delete m_head;
		m_head = next;
	}
	m_head = nullptr;
}
