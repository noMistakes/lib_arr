/*
 * list.h
 *
 *  Created on: Nov 9, 2017
 *      Author: vitalik
 */

#ifndef LIST_H_
#define LIST_H_
#include <iostream>
template<typename T>
struct Node {

	T data;
	Node *next;

};

template<class T>
class List {

private:
	Node<T> *head;
	Node<T> *tail;
	int count;

public:
	List();
	void pushBack(T _data_);
	void print() const;
	void pop();
	void replace(int i, int j);
	int size() const;
	void sort();
	void clear();
	void insert(T elem, int i);
	~List();
};

#endif /* LIST_H_ */
