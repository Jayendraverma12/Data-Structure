                // Input Restricted Doubled ended queue
#include <iostream>
using namespace std;
#define SIZE 5
int dqueue[SIZE], front, rear;
void insert()
{
    int x;
    if (rear == SIZE - 1)
    {
        cout << "dqueue is overflow" << endl;
        return;
    }
    cout << "enter any element\n"<< endl;
    cin >> x;
    rear++;
     dqueue[rear]=x;
    if (front == -1)
        front = 0;
}
void del_front()
{
    int x;
    if (front == -1)
    {
        cout << "dqueue is underflow\n"<< endl;
        return;
    }
    x = dqueue[front] ;
    cout << "deleted element is = " << x << endl;
    if (front == rear)
        rear = front = -1;
    else
        front++;
}
void del_rear()
{
    int x;
    if (rear == -1)
    {
        cout << " dqueue is overflow"<<endl;
        return;
    }
    x = dqueue[rear];
    cout << "deleted element is = " << x<<endl;
    if (rear == front)
        front = rear = -1;
    else
        rear--;
}
void display()
{
    int i;
    if (front == -1)
    {
        cout << "\n\ndqueue is empty" << endl;
        return;
    }
    cout << "\n\n elements are given below" << endl;
    for (i = front; i <= rear; i++)
        cout << dqueue[i] << "   ";
        cout<<endl;
}
int main()
{
    front = rear = -1;
    int ch;
    do
    {
        cout << "\n\n1 for insert an element\n";
        cout << "2 for delete from front\n";
        cout << "3 for delete from rear\n";
        cout << "4 for display all element\n";
        cout << "5 for exit\n";
        cout << " Enter your choice\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            del_front();
            break;
        case 3:
            del_rear();
            break;
        case 4:
            display();
            break;
        case 5:
            break;
        default:
            cout << " Invaild Choice"<<endl;
        }
    } while (ch != 5);
    return 0;
}