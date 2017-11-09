/*
 * Stack.h
 *
 *  Created on: Nov 10, 2017
 *      Author: vitalik
 */

#ifndef STACK_H_
#define STACK_H_
template<typename T>
struct Node {
	T data;
	Node *next, *prev;

};
template<typename T>
class Stack {
private:
	Node<T> *head;
	Node<T> *tail;
	int count;
public:
	Stack();
	~Stack();

	void pushBack(T elem);
	T pop();
	void print();
	int size() const;
};

#endif /* STACK_H_ */
