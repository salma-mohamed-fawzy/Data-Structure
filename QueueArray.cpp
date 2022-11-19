# include"queueArray.h"
bool queue::is_empty()
{
	return (front == -1 && rear == -1);

}
bool queue::is_full()
{
	return (rear == max_size - 1);

}
void queue::enqueue(int new_item)
{
	if (is_full())
	{
		cout << "queue is overflow";
		return;
	}
	else {
		//If queue is initially empty
		if (front == -1)
			front = 0;
		rear++;
		queue_items[rear] = new_item;
	}
}
int queue::dequeue()
{
	int item;
	if (is_empty())
	{
		cout << "queue is underflow";
		exit(0);
	}
	else if (front == rear)
	{
		item = queue_items[front];
		front = -1; rear = -1;
	}
	else {
		item = queue_items[front];
		front++;
	}
	return item;
}
void queue::print_all_elements()
{
	if (is_empty())
	{
		cout << "\n Queue is empty" << endl; return;
	}
	//cout << "the current items of the queue are:" << endl;
	for (int i = front; i <= rear; i++)
		cout << queue_items[i] << " ";
	cout << endl;
}