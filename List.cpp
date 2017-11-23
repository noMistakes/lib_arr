//============================================================================
// Name        : list.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "List.h"
using namespace std;
template<class T>
List<T>::List() {
	head = NULL;
	tail = NULL;
	count = 0;
}
template<class T>
void List<T>::print() const {
	cout << endl;
	if (head == NULL) {
		cout << "List Is Empty" << endl;
		return;
	}
	Node_list<T> *ptr = head;
	while (ptr != NULL) {
		cout << ptr->data;
		ptr = ptr->next;
	}
	cout << endl;
}
template<class T>
int List<T>::size() const {
	int number = 0;
	if (head == NULL) {
		return 0;
	}
	Node_list<T> *ptr = head;
	while (ptr != NULL) {
		number++;
		ptr = ptr->next;
	}
	return number;
}
template<class T>
void List<T>::replace(int i, int j) {
	Node_list<T> *ptr1 = head;
	Node_list<T> *ptr2 = head;
	while (i != 0) {
		if (ptr1 == NULL) {
			return;
		}
		ptr1 = ptr1->next;
		i--;
	}
	while (j != 0) {
		if (ptr2 == NULL) {
			return;
		}
		ptr2 = ptr2->next;
		j--;
	}
	swap(ptr1->data, ptr2->data);
}
template<class T>
void List<T>::sort() {
	int swapped, i;
	 Node_list<T> *ptr1;
	 Node_list<T> *lptr = NULL;

	if (ptr1 == NULL)
		return;

	do {
		swapped = 0;
		ptr1 = NULL;

		while (ptr1->next != lptr) {
			if (ptr1->data > ptr1->next->data) {
				swap(ptr1, ptr1->next);
				swapped = 1;
			}
			ptr1 = ptr1->next;
		}
		lptr = ptr1;
	} while (swapped);
}
template<class T>
void List<T>::pop() {
	if (head == NULL)
		return;
	if (tail == head) {
		delete head;
		tail = NULL;
		head = NULL;
		count--;
		return;
	}

	Node_list<T> *ptr = head;
	Node_list<T> *temp = tail;

	while (ptr != tail) {
		temp = ptr;
		ptr = ptr->next;
	}
	tail = temp;
	delete ptr;
	tail->next = NULL;
	count--;
}

template<class T>
void List<T>::pushBack(T elem) {
	if (head != NULL) {

		tail->next = new Node_list<T>(elem);
		tail = tail->next;
		count++;
	} else {
		head = new Node_list<T>(elem);
		tail = head;
		count++;
	}
}

template<class T>
void List<T>::clear() {
	if (head == NULL)
		return;
	Node_list<T> *ptr = head;
	while (ptr != NULL) {
		head = head->next;
		delete ptr;
		ptr = head;
	}
	head = NULL;
	tail = NULL;
}
template<class T>
void List<T>::insert(T elem, int i) {
	if (i >= count)
		pushBack(elem);
	else {
		if (head != NULL) {

			Node_list<T> *ptr = head;
			for (int j = 0; j < i-1; j++)
				ptr = ptr->next;

			Node_list<T> *temp = ptr->next;

			ptr->next = new Node_list<T>(elem);
			ptr->next->next = temp;
			count++;
		} else {
			pushBack(elem);
		}
	}

}

template<class T>
List<T>::~List() {
}
