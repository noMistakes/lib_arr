#include <iostream>
#include "List.cpp"
#include "Queue.cpp"
#include "Stack.cpp"
#include "DoublList.cpp"

using namespace std;

int main() {
	////////////LIST//////////////
	List<char> obj_list;
	obj_list.pushBack('1');
	obj_list.pushBack('2');
	obj_list.pushBack('3');
	obj_list.pushBack('A');
	obj_list.pushBack('B');
	obj_list.pushBack('C');
	cout << "LIST: ";
	obj_list.print();
	cout << "pop:";
	obj_list.pop();
	obj_list.print();
	cout << "insert('T', 1):";
	obj_list.insert('T', 1);
	obj_list.print();
	obj_list.pushBack('X');
	obj_list.print();
	cout << endl;
	cout  << "size: " << obj_list.size() << endl;
	////////////STACK/////////////////
	cout <<endl<<"STACK";
	Stack<char> obj_stack;
	obj_stack.pushBack('5');
	obj_stack.pushBack('6');
	obj_stack.pushBack('7');
	obj_stack.pushBack('D');
	obj_stack.pushBack('E');
	obj_stack.pushBack('F');
	obj_stack.print();
	cout << "Delete:";
	obj_stack.pop();
	obj_stack.print();
	cout<<"Add:";
	obj_stack.pushBack('9');
	cout << "Stack:";
	obj_stack.print();
	cout << "size: " << obj_stack.size() << endl;
	////////////DOUBLE_LIST//////////////
	cout << endl << "Double list" << endl;
	DoublyList<char> obj_double_list;
	obj_double_list.pushBack('6');
	obj_double_list.pushBack('7');
	obj_double_list.pushBack('8');
	obj_double_list.pushBack('G');
	obj_double_list.pushBack('H');
	obj_double_list.pushBack('I');
	cout << "double_list: ";
	obj_double_list.print();
	cout << "pop:";
	obj_double_list.pop();
	obj_double_list.print();
	cout << "insert('T', 0):";
	obj_double_list.insert('T', 0);
	obj_double_list.print();
	cout<<"Push Back";
	obj_double_list.pushBack('I');
	cout << "list:";
	obj_double_list.print();
	cout << "size: " << obj_list.size() << endl;
	////////////QUEUE//////////////
	cout << endl << "QUEUE" << endl;
	Queue<char> obj_queue(7);
	obj_queue.enqueue('6');
	obj_queue.enqueue('7');
	obj_queue.enqueue('8');
	obj_queue.enqueue('G');
	obj_queue.enqueue('H');
	obj_queue.enqueue('I');
	obj_queue.enqueue('9');
	cout << "Queue: ";
	obj_queue.print();
	cout <<endl<<"Delete elem:";
	obj_queue.dequeue();
	obj_queue.print();
	cout <<endl<<"Delete elem:";
	obj_queue.dequeue();
	cout << "Queue: ";
	obj_queue.print();
	cout << "size: " << obj_queue.getsize() << endl;
	return 0;
}
