#include "Stack.h"
#include <iostream>
using namespace std;
template<typename Type>
Stack<Type>::Stack() {
	head = NULL;
	tail = NULL;
	count = 0;
}

template<typename Type>
Stack<Type>::~Stack() {
}

template<class T>
void Stack<T>::pushBack(T _data_) {
	if (head != NULL) {
		tail->next = new Node_stack<T>(_data_);
		tail = tail->next;
		count++;
	} else {
		head = new Node_stack<T>(_data_);
		tail = head;
		count++;
	}
}

template<typename T>
void Stack<T>::pop() {
	if (head == NULL)
		return;
	if (tail == head) {
		delete head;
		tail = NULL;
		head = NULL;
		count--;
		return;
	}

	Node_stack<T> *ptr = head;
	Node_stack<T> *temp = tail;

	while (ptr != tail) {
		temp = ptr;
		ptr = ptr->next;
	}
	tail = temp;
	delete ptr;
	tail->next = NULL;
	count--;
}

template<typename T>
void Stack<T>::print() {
	cout << endl;
	if (head == NULL) {
		cout << "Stack Is Empty" << endl;
		return;
	}
	Node_stack<T> *ptr = head;
	while (ptr != NULL) {
		cout << ptr->data;
		ptr = ptr->next;
	}
	cout << endl;
}

template<typename T>
int Stack<T>::size() const {
	int number = 0;
	if (head == NULL) {
		return 0;
	}
	Node_stack<T> *ptr = head;
	while (ptr != NULL) {
		number++;
		ptr = ptr->next;
	}
	return number;
}
