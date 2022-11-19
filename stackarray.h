#pragma once#ifndef STACKARRAY
#define STACKARRAY
#include <iostream>
#include<string>
using namespace std;
#define size 100
class stack
{
private:
    int stack_items[size]; int top = -1;
public:
    void push(int x);
    int pop();
    bool is_empty();
    bool is_full();
    void print_all_elements();
    int peek()
    {
        return stack_items[top];
    }
    int gettop() { return top; }
};

class que
{
private:
    stack s1;
    stack s2;
public:
    void enqueue(int x)
    {
        s1.push(x);
    }
    int dequeue()
    {
        int a;
        if (s1.gettop() == -1)
            cout << "queue is underflow\n";
        else
            for (int i = s1.gettop(); i >= 0; i--)
            {
                a = s1.pop();
                s2.push(a);
            }
        int p = s2.pop();
        while (!s2.is_empty())
        {
            a = s2.pop();
            s1.push(a);
        }
        return p;
    }

    void  print()
    {
        if (s1.is_empty())
        {
            cout << " the queue is empty " << endl;
            return;
        }
        for (int i = s1.gettop(); i >= 0; i--)
        {
            int a = s1.pop();
            s2.push(a);
        }
        s2.print_all_elements();
    }
};
#endif

