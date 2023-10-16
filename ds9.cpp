        // Output Restricted Double Ended queue
#include <iostream>
#define SIZE 5
int dqueue[SIZE], front, rear;
using namespace std;
void insert_front()
{   
    int x;
    if(front == 0){
        cout<<"dqueue is overflow"<<endl;
        return;
    }
    cout<<"enter any element "<<endl;
    cin>>x;
    if(front == -1)
        front = rear = 0;
    else
        front++;
    dqueue[front] = x;
    cout<<"element inserted"<<endl;

}
void insert_rear()
{
    int x;
    if (rear == SIZE - 1)
    {
        cout << " dqueue is overflow" << endl;
        return;
    }
    cout << "enter any element" << endl;
    cin >> x;
    rear++;
    dqueue[rear] = x;
    cout << "element inserted" << endl;
    if (front == -1)
        front = 0;
}
void del()
{
    int x;
    if (front == -1)
    {
        cout << "dqueue is overflow" << endl;
        return;
    }
    x = dqueue[front];
    cout << "deleted element is = " << x;
    if (front == rear)
        front = rear = -1;
    else
        front++;
}
void display()
{
    if(front == -1){
        cout<<"dqueue is empty"<<endl;
        return;
    }
    cout<<"elements are given below"<<endl;
        for(int i = front;i<=rear;i++)
            cout<<dqueue[i]<<"  ";
}
int main()
{
    front = rear = -1;
    int ch;
    do
    {
        cout << "\n\n1 for insert an element from front" << endl;
        cout << "2 for insert an element from rear" << endl;
        cout << "3 for deletion" << endl;
        cout << "4 for display" << endl;
        cout << "5 for exit" << endl;
        cout << "enter your choice" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            insert_front();
            break;
        case 2:
            insert_rear();
            break;
        case 3:
            del();
            break;
        case 4:
            display();
            break;
        case 5:
            break;
        default:
            cout << " Invalid choice" << endl;
        }
    } while (ch != 5);

    return 0;
}