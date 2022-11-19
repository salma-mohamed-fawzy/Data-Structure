#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H
#include"NodeT.h"
# include "QueueLinkedList.h"
class BinartSearchTree {
private:
	Node_T* root;
	int numNodes;
public:
	BinartSearchTree();
	bool insert(int);
	Node_T* insertRec(Node_T*, int);
	bool search(int);
	bool searchRec(Node_T*, int);
	void levelOrder();
	void printCurrentLevel(Node_T*, int);
	int height();
	int heightRec(Node_T*);
	//int size();
	bool isEmpty();
	Node_T* getroot() { return root; }
	void insertTreeToqueue(int value);
};
BinartSearchTree::BinartSearchTree() {
	this->root = NULL;
	this->numNodes = 0;
}
void BinartSearchTree::levelOrder()
{
	int h = height();
	//cout << "\n";
	for (int level = 1; level <= h; level++) {
		printCurrentLevel(root, level);
		//cout<<"\n";
	}
	cout << "\n";
}
void BinartSearchTree::printCurrentLevel(Node_T* root, int level)
{
	if (root == NULL)
		return;
	if (level == 1)
		cout << root->value << " ";
	else if (level > 1)
	{
		printCurrentLevel(root->left, level - 1);
		printCurrentLevel(root->right, level - 1);
	}
}
int BinartSearchTree::height() {
	return heightRec(root);
}
int BinartSearchTree::heightRec(Node_T* currentNode) {
	if (currentNode == NULL)
		return 0;
	else
	{

		int leftHeight = heightRec(currentNode->left);
		int rightHeight = heightRec(currentNode->right);
		if (leftHeight > rightHeight)
			return(leftHeight + 1);
		else return(rightHeight + 1);
	}
}
/*int BinartSearchTree::size() {
	return numNodes;
}*/
bool BinartSearchTree::search(int value) {
	return searchRec(root, value);
}
bool BinartSearchTree::searchRec(Node_T* currentNode, int value) {
	if (currentNode == NULL)
		return false;
	if (currentNode->value == value)
		return true;
	if (currentNode->value < value)
		return searchRec(currentNode->right, value);
	return searchRec(currentNode->left, value);
}
bool BinartSearchTree::insert(int value) {
	// if value is already exist 
	if (search(value))
		return false;
	this->root = insertRec(root, value);
	numNodes++;
	return true;
}
Node_T* BinartSearchTree::insertRec(Node_T* root, int value) {
	if (root == NULL)
	{
		return new Node_T(value);
	}
	if (value > root->value)
	{
		root->right = insertRec(root->right, value);
	}
	else
	{
		root->left = insertRec(root->left, value);
	}
	return root;
}
bool BinartSearchTree::isEmpty() {
	return root == NULL;
}
void BinartSearchTree::insertTreeToqueue(int value)
{
	BinartSearchTree obj;
	queues q;
	numNodes++;
	if (obj.getroot() == NULL)
		root = new Node_T(value);
	return;
	q.enqueue(obj.getroot()->value);
	while (!q.isempty())
	{
		Node_T* current = obj.getroot();
		q.getfront()->data = current->value;
		int x = q.dequeue();
		cout << current->value << " ";
		if (current->left != NULL)
		{
			q.enqueue(current->left->value);
			cout << current->left->value;
		}
		else
			current->left = new Node_T(value);
		return;
		if (current->right != NULL)
		{
			q.enqueue(current->right->value);
			cout << current->left->value;
		}
		else
			current->right = new Node_T(value);
		return;
	}
}
#endif
