#pragma once
#include <string>

using namespace std;

template<class T>
struct DoublyNode
{
	T data;
	DoublyNode<T> *next;
	DoublyNode<T> *prev;
	DoublyNode(T _data)
	{
		data = _data;
		next = NULL;
		prev = NULL;
	}
};

template<class T>
class DoublyList
{
private:
	DoublyNode<T> *head;
	DoublyNode<T> *tail;
	int count;
public:
	DoublyList();
	void pushBack(T _data);
	void print()const;
	int size();
	void replace(int i, int j);
	void pop();
	void insert( T elem,int i);
	DoublyNode<T> * getValue(int i);
	void reverse();
	void clear();
	void sort(string sing);
	int find(T elem);
	void extend(DoublyList *doublylist);
	~DoublyList();
};
