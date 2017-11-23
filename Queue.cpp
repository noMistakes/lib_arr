#pragma once
#include "Queue.h"
#include <iostream>
using namespace std;

template<class T>
Queue<T>::Queue() {
	head = NULL;
	tail = NULL;
	count = 0;
}

template<class T>
void Queue<T>::push(T _data) {
	if (head != NULL) {
		tail->next = new Node_queue<T>(_data);
		tail = tail->next;
	} else {
		head = new Node_queue<T>(_data);
		tail = head;
	}
	count++;
}
template<class T>
void Queue<T>::print() {
	cout << endl;
	if (head == NULL && count == 0) {
		cout << "Queue is emply" << endl;
		return;
	}
	Node_queue<T> *ptr = head;
	while (head != NULL) {
		cout << head->data ;
		pop();
	}
	cout << endl;
}

template<class T>
int Queue<T>::getSize() {
	return count;
}

template<typename T>
void Queue<T>::pop() {
	if (head == NULL)
		return ;
	if (tail == head) {
		delete head;
		tail = NULL;
		head = NULL;
		count--;
		return;
	}

	Node_queue<T> *ptr = head;
	Node_queue<T> *temp = tail;

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
Node_queue<T> * Queue<T>::getHead() {
	return head;
}

template<class T>
Node_queue<T> * Queue<T>::getTail() {
	return tail;
}

template<class T>
void Queue<T>::clear() {
	if (head == NULL)
		return;
	Node_queue<T> *ptr = head;
	while (ptr != NULL) {
		head = head->next;
		delete ptr;
		ptr = head;
	}
}

template<class T>
void Queue<T>::extend(Queue *queue2) {
	queue2->print();
	int n = queue2->getSize();
	for (int i = 0; i < n; i++) {
		puchBack(queue2->getHead()->data);
		queue2->pop();
	}
}

template<class T>
Queue<T>::~Queue() {
	if (head == NULL)
		return;
	Node_queue<T> *ptr = head;
	while (ptr != NULL) {
		head = head->next;
		delete ptr;
		ptr = head;
	}
}
