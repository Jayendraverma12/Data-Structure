  // all operations of circular queue (insertion, deletion and display);
#include <iostream>
#define SIZE 5
int cqueue[5], front, rear;
using namespace std;
void insert()
{
    int x;
    if ((front == 0 && rear == SIZE - 1) || (front == rear + 1))
    {
        cout << "\n\nCircular queue is overflow\n\n";
        return;
    }
    cout << "enter the element" << endl;
    cin >> x;
    if (rear == SIZE - 1)
        rear = 0;
    else
        rear++;
    cqueue[rear] = x;
    cout << "\n\nelement inserted\n\n";
    if (front == -1)
        front = 0;
}
void del()
{
    int x;
    if (front == -1)
    {
        cout << "\n\nCircular queue is underflow\n\n";
        return;
    }
    x = cqueue[front];
    cout << "\n\nelement deleted = " << x << endl;
    if (front == rear)
        front = rear = -1;
    else if (front == SIZE - 1)
        front = 0;
    else
        front++;
}
void display()
{
    int i;
    if (front == -1)
    {
        cout << "\n\nCircular  queue is empty\n\n";
        return;
    }
    cout << "\n\nelement of circular queue are " << endl;
    if (front <= rear)
        for (i = front; i <= rear; i++)
            cout << cqueue[i] << "  ";
    else
    {
        for (i = front; i <= SIZE - 1; i++)
            cout << cqueue[i] << "  ";
        for (i = 0; i <= rear; i++)
            cout << cqueue[i] << "  ";
    }
}
int main()
{
    front = rear = -1;
    int ch;
    do
    {
        cout << "\n\n1 for insert\n\n";
        cout << "2 for delete\n\n";
        cout << "3 for display\n\n";
        cout << "4 for exit\n\n";
        cout << "enter your choice\n\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            del();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default:
            cout << "invalid choice\n\n";
        }
    } while (ch != 4);
    return 0;
}