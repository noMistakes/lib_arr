#pragma once
#include "Queue.h"
using namespace std;
template<class T>
	Queue<T>::Queue()
{
	head = NULL;
	tail = NULL;
	count = 0;
}
template<class T>
	Queue<T>::puchBack(T _data)
	{
		if (head != NULL)
		{
			tail->next = new Node<T>(_data);
			tail = tail->next;
		}
		else
		{
			head = new Node<T>(_data);
			tail = head;
		}
		count++;
	}
template<class T>
	Queue<T>::print(char *end_)
	{
		cout << endl;
		if (head == NULL && count == 0)
		{
			cout << "Queue is emply" << endl;
			return;
		}
		Node<T> *ptr = head;
		while (head != NULL)
		{
			cout << head->data << end_;
			pop();
		}
		cout << endl;
	}
	template<class T>
	Queue<T>::getSize()
	{
		return count;
	}
	template<class T>
	Queue<T>:: pop()
	{
		T value;
		if (head == NULL && count == 0)
		{
			cout << "Stack is emply" << endl;
			return 0;
		}
		Node<T> *ptr = head;
		head = head->next;
		value = ptr->data;
		delete ptr;
		count--;
		return value;
	}
	template<class T>
	Queue<T>::getHead()
	{
		return head;
	}
	template<class T>
	Queue<T>::getTail()
	{
		return tail;
	}
	template<class T>
	Queue<T>::clear()
	{
		if (head == NULL) return;
		Node<T> *ptr = head;
		while (ptr != NULL)
		{
			head = head->next;
			delete ptr;
			ptr = head;
		}
	}
	template<class T>
	Queue<T>::extend(Queue *queue2)
	{
		queue2->print(" ");
		int n = queue2->getSize();
		for (int i = 0; i<n; i++)
		{
			puchBack(queue2->getHead()->data);
			queue2->pop();
		}
	}
	template<class T>
	Queue<T>::~Queue()
	{
		if (head == NULL) return;
		Node<T> *ptr = head;
		while (ptr != NULL)
		{
			head = head->next;
			delete ptr;
			ptr = head;
		}
	}
