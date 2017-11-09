#pragma once
using namespace std;

template<class T>
struct Node
{
	T data;
	Node<T> *next;
	Node(T _data)
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
		Node<T> *head;
		Node<T> *tail;
	public:
		Queue();
		void puchBack(T _data);
		void print(char *end_);
		int getSize();
		T pop();
		Node<T> * getHead();
		Node<T> * getTail();
		void clear();
		void extend(Queue *queue2);
		~Queue();
	};
