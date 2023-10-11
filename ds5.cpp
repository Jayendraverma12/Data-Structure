// WAP to use operation of push , pop and display by stack using array(Static Data Structure);
#include <iostream>
#define SIZE 5
using namespace std;
int stack[SIZE], top;
class stk
{
private:
    int stack[SIZE], top;

public:
    void push();
    void pop();
    void display();
    stk()
    {
        top = -1;
    }
};
void stk::push()
{
    int x;
    if (top == SIZE - 1)
    {
        cout << "\n\nstack is overflow" << endl;
        return;
    }
    cout << "\n\nEnter any element" << endl;
    cin >> x;
    top++;
    stack[top] = x;
    cout << "\n\nelement inserted" << endl;
}
void stk::pop()
{
    int x;
    if (top == -1)
    {
        cout << "stack is overflow" << endl;
        return;
    }
    x = stack[top];
    cout << "deleted element = " << x << endl;
    top--;
}
void stk::display()
{
    if (top == -1)
    {
        cout << "stack is empty " << endl;
        return;
    }
    for (int i = top; i >= 0; i--)
        cout <<" "<< stack[i] << endl;
}
int main()
{
    stk s;
    int ch;
    do
    {
        cout << "\n1 for push" << endl;
        cout << "2 for pop" << endl;
        cout << "3 for diplay" << endl;
        cout << "4 for exit" << endl;
        cout << "enter your choice" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            s.push();
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.display();
            break;
        case 4:
            break;
        default:
            cout << "\nInvalid choice" << endl;
        }
    } while (ch != 4);

    return 0;
}