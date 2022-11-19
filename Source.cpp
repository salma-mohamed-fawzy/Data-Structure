#include<iostream>
using namespace std;
#define size 100
class stack
{
private:
    int stack_items[size]; int top=-1;
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
bool stack::is_empty()
{
    return this->top <= -1;
}
bool stack::is_full()
{
    return this->top == size - 1;
}
void stack::push(int new_item)
{
    if (is_full())
    {
        cout << "Stack is overflow\n";
        return;
    }
    top++;
     stack_items[top] = new_item;
}
int stack::pop()
{
    if (is_empty())
    {
        cout << "Stack is underflow\n";
        exit(0);
    }
     int current_item=stack_items[top];
    top--;
    return current_item;
}
void stack::print_all_elements()
{ 
  
    for (int i = top; i >= 0; i--)
        cout << stack_items[i] << " ";
    cout << "\t";
}
class queue
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
           a= s2.pop();
           s1.push(a);
       }
       return p;
    }
    void print()    
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
int main()
{
    int n = size;
    queue q;
    int item;
    int choice;
    while (1)
    {
        system("cls");
        cout << "1-implement stack using queue\n";
        cout << "2-implement queue using stack\n";
        cout << "3-reverse linked list items using stack\n";
        cout << "4-level order of BST traverse using queue\n";
        cout << "5-Exit\n";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "ok\n";
            break;
        case 2:
            
            cout << "please enter the number of items in queue\n";
            cin >> n;
            
            for (int i = 1; i <= n; i++)
            {
                cout << "enter item number " << "(" << i << ")" << endl;
                cin >> item;
                q.enqueue(item);
            }
            cout << "elements are ";
            q.print();
            cout << "\n hit enter to return \n ";
            system("pause");
            break;
        case 3:
            cout << "ok\n";
            break;
        case 4:
            cout << "ok\n";
            break;
        case 5:
            cout << "Program End,Thanks for your time\n";
            return 0;
        }

    }
    system("pause");
    return 0;
}