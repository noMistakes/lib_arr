/*
 * Stack.h
 *
 *  Created on: Nov 10, 2017
 *      Author: vitalik
 */
#include <iostream>
#ifndef STACK_H_
#define STACK_H_
template<typename T>
struct Node_stack {
	T data;
	Node_stack *next, *prev;
	Node_stack(T _data)
	{
		data = _data;
		next = NULL;
	}

};
template<typename T>
class Stack {
private:
	Node_stack<T> *head;
	Node_stack<T> *tail;
	int count;
public:
	Stack();
	~Stack();

	void pushBack(T elem);
	void pop();
	void print();
	int size() const;
};

#endif /* STACK_H_ */
