#ifndef NODE_H
#define NODE_H
#include<iostream>
using namespace std;
struct Node_T
{
	int value;
	Node_T* left;
	Node_T* right;
	Node_T(int value)
	{
		this->value = value;
		this->left = NULL;
		this->right = NULL;
	}
};
#endif
