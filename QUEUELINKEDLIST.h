#ifndef QUEUELINKLIST
#define QUEUELINKLIST
# include"QNoder.h"
#include<iostream>
using namespace std;
class queues
{
private: node* front, * rear;
public:
    queues() { front = NULL; rear = NULL; }
    bool isempty();
    void enqueue(int value);
    int dequeue();
    void displays();
    node* getfront() { return front; }
};
bool queues::isempty()
{
    if (front == NULL && rear == NULL)
        return 1;

}
void queues::enqueue(int value)
{
    if (rear == NULL)
    {
        rear = new node;
        rear->next = NULL;
        rear->data = value;
        front = rear;
    }
    else
    {
        node* temp = new node;
        temp->data = value;
        temp->next = NULL;
        rear->next = temp;
        rear = temp;
    }
}
int queues::dequeue()
{
    int item;
    node* temp;
    temp = front;
    if (front == NULL)
    {
        cout << "Underflow" << endl; exit(0);
    }
    else if (temp->next == NULL)
    {
        item = front->data;
        front = NULL; rear = NULL;
    }
    else
    {
        item = temp->data;
        temp = temp->next;
        front = temp;
    }
    return item;
}

void queues::displays()
{
    node* temp = front;
    if ((front == NULL) && (rear == NULL))
    {
        cout << " Queue is Empty " << endl;
    }
    else
        cout << "Queue elements are: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

#endif
