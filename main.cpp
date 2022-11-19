# include<iostream>
# include "linkedLst.h"
# include "stackLinkedLst.h"
# include "stackArray.h"
# include "queueArray.h"
# include"binarySearchTree.h"
# include "QUEUELINKEDLIST.h"

using namespace std;

int main()
{
    Node* head = NULL;
    linked_list list;
    StackLinkeList obj;
    int choice;
    int item;
    int num_items;
    int n = size;
    int num;
    que q;
    sta s;
    queues qu;
    int numberofitems;
    BinartSearchTree bst;
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
            cout << "please enter the number of items you have : ";
            cin >> num;

            for (int i = 1; i <= num; i++)
            {
                cout << "Enter items number " << "(" << i << ") :";
                cin >> item;
                s.push(item);
            }
            cout << "\nYou have entered " << "(" << num << ")" << "items" << endl;
            cout << "Stack values are\n ";
            s.print();
            cout << "\n Hit Enter to Return \n ";
            system("pause");
            break;
        case 2:
            cout << "please enter the number of items you have :";
            cin >> n;

            for (int i = 1; i <= n; i++)
            {
                cout << "Please,Enter item  " << "(" << i << ") :";
                cin >> item;
                q.enqueue(item);
            }
            cout << "\nYou have entered " << "(" << n << ")" << "items" << endl;
            cout << "Queue values are \n";
            q.print();
            cout << "\n Hit Enter to Return \n ";
            system("pause");
            break;
        case 3:
            cout << "Please,Enter numbers of items you have:";
            cin >> num_items;
            for (int i = 1; i <= num_items; i++)
            {
                cout << "Please,Enter item  " << i << ":";
                cin >> item;
                list.insertLast(&head, item);
                obj.push(item);
            }
            cout << "\nYou have entered " << "(" << num_items << ")" << "items" << endl;
            cout << "Linked List values in reverse order:\n";
            list.reverse(&head);
            obj.display();
            cout << endl;
            cout << "Hit Enter to Return\n";
            system("pause");
            break;
        case 4:
            cout << "please,Enter number of items\n";
            cin >> numberofitems;
            for (int i = 1; i <= numberofitems; i++)
            {
                cout << "enter item " << i << ":";
                cin >> item;
                bst.insert(item);
                bst.insertTreeToqueue(item);
            }
            cout << "The number of elements is " << numberofitems << endl;
            cout << "The level order traverse is :\n";
            qu.displays();
            cout << "Hit Enter to Return\n";
            system("pause");
            break;
        case 5:
            cout << "Program End,Thanks for your time\n";
            return 0;
        }
    }
    system("pause");
    return 0;
}

