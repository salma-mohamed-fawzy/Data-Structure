#ifndef STACKLINKEDLIST
#define STACKLINKEDLIST
#include <iostream>
#include "node.h"
using namespace std;
class StackLinkeList {
private:
	Node* first;
	unsigned short size;
public:
	StackLinkeList();
	~StackLinkeList();
	void push(int item);
	char  peak();
	void pop();
	void display();
	unsigned short getSize();
	bool isEmpty();
	Node* top() { return first; }
	void push_i(Node* temp);
};
#endif
