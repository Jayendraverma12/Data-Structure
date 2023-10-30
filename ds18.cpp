// Singly linked list WAP to create and perform all the operation of the singly linked list;
#include <iostream>
using namespace std;
struct NODE
{
    int info;
    NODE *next;
};
NODE *create(NODE *start)
{
    int x;
    char ch;
    NODE *newnode, *temp;
    cout << "do you want to create a node Y/N";
    cin >> ch;
    while (ch == 'y' || ch == 'Y')
    {
        newnode = new NODE;
        cout << "\nenter any element ";
        cin >> x;
        newnode->info = x;
        newnode->next = NULL;
        if (start == NULL)
            start = newnode;
        else
            temp->next = newnode;
        temp = newnode;
        cout << "element inserted\n";
        cout << "do you want to create a node Y/N\n";
        cin >> ch;
    }
    return start;
}
void display(NODE *temp)
{
    if (temp == NULL)
    {
        cout << "\nSingly linked list is empty";
        return;
    }
    cout << "element of the singly linked list are given below\n\n";
    while (temp != NULL)
    {
        cout << temp->info << "  ";
        temp = temp->next;
    }
}
NODE *insert_beg(NODE *start)
{
    NODE *newnode;
    int x;
    newnode = new NODE;
    cout << "enter any element\n";
    cin >> x;
    newnode->info = x;
    newnode->next = start;
    newnode = start;
    cout << "element inserted";
    return start;
}
int count(NODE *temp)
{
    int c = 0;
    while (temp != NULL)
        c++;
    return c;
}

int main()
{
    NODE *start = NULL;
    int ch, x;
    start = create(start);
    do
    {
        cout << "1 for insert at begining\n";
        cout << "2 for insert at end\n";
        cout << "3 for insert at specific position\n";
        cout << "4 for deletion from begining\n";
        cout << "5 for deletion from end\n";
        cout << "6 for deletion from specific position\n";
        cout << "7 for display\n";
        cout << "8 for count number of nodes\n";
        cout << "9 for exist\n";
        cout << "enter your choice\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            start = insert_beg(start);
            break;
        case 7:
            display(start);
            break;
        case 9:
            break;
        default:
            cout << "invalid choice\n";
        }
    } while (ch != 9);
    return 0;
}