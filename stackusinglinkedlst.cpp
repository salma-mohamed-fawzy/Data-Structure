# include "linkedLst.h"
#include "stackLinkedLst.h"
StackLinkeList::StackLinkeList() {
	this->size = 0;
	this->first = NULL;
}

StackLinkeList::~StackLinkeList() {
	Node* temp = NULL;
	while (this->first != NULL) {
		temp = this->first;
		this->first = this->first->next;
		temp->next = NULL;
		delete temp;
		temp = NULL;
	}
}
void StackLinkeList::push(int item) {
	// step 1
	Node* newNode = new Node();
	// step 2
	if (newNode == NULL)
		return;
	// step 3
	newNode->data = item;
	newNode->next = first;
	first = newNode;
	this->size++;
}
void StackLinkeList::push_i(Node* temp) {
	// step 1
	Node* newNode = new Node();
	// step 2
	if (newNode == NULL)
		return;
	// step 3
	newNode->data = temp->data;
	newNode->next = first;
	first = newNode;
	this->size++;
}
char StackLinkeList::peak()
{
	if (isEmpty()) {
		cout << "stack is under flow\n";
		return ' ';
	}
	return this->first->data;
}
void StackLinkeList::pop() {
	if (isEmpty())
		return;
	this->size--;
	Node* temp = this->first;
	this->first = this->first->next;
	temp->next = NULL;
	delete temp;
	temp = NULL;

}
void StackLinkeList::display() {
	Node* temp = this->first;
	while (temp != NULL) {
		cout << temp->data << "  ";
		temp = temp->next;
	}
}
unsigned short StackLinkeList::getSize() {
	return this->size;
}
bool StackLinkeList::isEmpty() {
	return this->first == NULL;
}
