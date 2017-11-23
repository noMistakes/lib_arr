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
struct Node_list {

	T data;
	Node_list *next;
	Node_list(T _data)
		{
			data = _data;
			next = NULL;
		}
};

template<class T>
class List {

private:
	Node_list<T> *head;
	Node_list<T> *tail;
	int count;

public:
	List();
	void pushBack(T elem);
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
