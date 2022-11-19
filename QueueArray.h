#ifndef QUEUEARRAY
#define QUEUEARRAY
#include <iostream>
#include<string>
#include <iostream> 
#define max_size 100 
using namespace std;
class queue
{
private:
	int front, rear; int queue_items[max_size];
public:
	queue() { front = -1, rear = -1; };
	void enqueue(int x);
	int dequeue();
	bool is_empty();
	bool is_full();
	void print_all_elements();
	int getrear() { return rear; }
	int getfront() { return front; }
};

class sta
{
private:
	queue q1, q2;
public:
	void push(int x)
	{
		if
			(q1.is_full()) {
			cout << "stack is overflow\n";
		}
		else
			int y;
		for (int i = q1.getrear(); i >= 0; i--)
		{
			int y = q1.dequeue();
			q2.enqueue(y);
		}
		q1.enqueue(x);
		for (int i = q2.getrear(); i >= 0; i--)
		{
			int z = q2.dequeue();
			q1.enqueue(z);
		}
	}
	int pop()
	{
		if
			(q1.is_empty()) {
			cout << "stack is underflow\n";
		}
		else
			for (int i = q1.getfront(); i >= q1.getrear(); i--)
			{
				int y = q1.dequeue();
				q2.enqueue(y);
			}
		int z = q2.dequeue();

		return z;
	}
	void print()
	{
		q1.print_all_elements();

	}
};
#endif
