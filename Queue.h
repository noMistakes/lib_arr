#pragma once
#include <iostream>
using namespace std;

template<class T>
struct Node_queue
{
	T data;
	Node_queue<T> *next;
	Node_queue(T _data)
	{
		data = _data;
		next = NULL;

	}
};
	template<class T>
	class Queue
	{
	private:
		int count;
		Node_queue<T> *head;
		Node_queue<T> *tail;
	public:
		Queue();
		void push(T _data);
		void print();
		int getSize();
		void pop();
		Node_queue<T> * getHead();
		Node_queue<T> * getTail();
		void clear();
		void extend(Queue *queue2);
		~Queue();
	};
