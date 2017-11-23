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
	cout << "list: ";
	obj_list.print();
	cout << "pop:";
	obj_list.pop();
	obj_list.print();
	cout << "insert('T', 1):";
	obj_list.insert('T', 1);
	obj_list.print();
	cout << "list:";
	obj_list.print();
	cout << "sort:";
//	obj_list.sort();
	cout << endl;
	obj_list.print();
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
	cout << "pop:";
	obj_stack.pop();
	obj_stack.print();
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
	obj_list.print();
	cout << "pop:";
	obj_list.pop();
	obj_list.print();
	cout << "insert('T', 1):";
	obj_list.insert('T', 1);
	obj_list.print();
	cout << "list:";
	obj_list.print();
//	cout << "sort:";
	//	obj_list.sort();
	//obj_list.print();
	cout << "size: " << obj_list.size() << endl;
	////////////QUEUE//////////////
	cout << endl << "QUEUE" << endl;
	Queue<char> obj_queue;
	obj_queue.push('6');
	obj_queue.push('7');
	obj_queue.push('8');
	obj_queue.push('G');
	obj_queue.push('H');
	obj_queue.push('I');
	cout << "queue: ";
	obj_queue.print();
	cout << "pop:";
	obj_queue.pop();
	obj_queue.print();
	cout << "list:";
	obj_queue.print();
	cout << "sort:";
	//	obj_list.sort();
	obj_queue.print();
	cout << "size: " << obj_queue.getSize() << endl;
	//obj_queue.extend();
	cout<<"HEAD ";
	obj_queue.getHead();
	cout<<endl<<"TAIL ";
	obj_queue.getTail();
	return 0;
}
