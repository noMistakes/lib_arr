#include "Queue.h"
#include <iostream>
#include <cassert>
using namespace std;

template<typename T>
Queue<T>::Queue(size_t n) :
		size(n > 0 ? n : 0) {
	ptr = new T[size];
	begin = 0;
	end = 0;
	elCT = 0;
}

template<typename T>
Queue<T>::Queue(const Queue& copy) {
	if (size != copy.size) {
		delete[] ptr;
		size = copy.size;
		ptr = new T[size];
	}
	for (int i = 0; i < size; i++)
		ptr[i] = copy.ptr[i];
	end = copy.end;
	begin = copy.begin;
	elCT = copy.elCT;
}

template<typename T>
void Queue<T>::enqueue(const T el) {

	ptr[end++] = el;
	if (end == size)
		end = 0;
	elCT++;
}

template<typename T>
T Queue<T>::dequeue() {

	if (begin == size)
		(begin = 0);
	elCT--;
	size--;
	return ptr[begin++];
}

template<typename T>
void Queue<T>::print() const {
	for (int i = 0; i < elCT; i++) {
		cout << " " << ptr[begin + i >= size ? begin + i - size : begin + i];
	}
	cout << endl;
}
template<typename T>
int Queue<T>::getsize() {
	return size;
}

