# include "stackArray.h"
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
    int current_item = stack_items[top];
    top--;
    return current_item;
}
void stack::print_all_elements()
{

    for (int i = top; i >= 0; i--)
        cout << stack_items[i] << " ";
    cout << "\t";
}
