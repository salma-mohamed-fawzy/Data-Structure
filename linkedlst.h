#include "linkedLst.h"
# include "stackLinkedLst.h"
void linked_list::insertLast(Node** head, int item)
{
    // Creating a New Node 
    Node* new_node = new Node();
    new_node->data = item;
    new_node->next = NULL;
    if (*head == NULL)
    {
        (*head) = new_node;
        return;
    }
    Node* temp = (*head);
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = new_node;
}
void linked_list::reverse(Node** head)
{
    StackLinkeList s;
    Node* temp = (*head);
    while (temp->next != NULL)
    {
        s.push_i(temp);
        temp = temp->next;
    }
    *head = temp;
    while (!s.isEmpty())
    {
        temp->next = s.top();
        temp = temp->next;
        s.pop();
    }
    temp->next = NULL;
}
void linked_list::display(Node* head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}