#pragma once
#include <iostream>
using namespace std;

template<typename T>
class Queue {
private:
	T* ptr;
	size_t size;
	size_t begin, end, elCT;
public:
	Queue(size_t = 10);
	Queue(const Queue&);
	void enqueue(const T);
	T dequeue();
	void print() const;
	~Queue() {
		delete[] ptr;
	}
	int getsize();

};
