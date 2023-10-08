// WAP to perform all the operation of 1 D array;
#include <iostream>
using namespace std;
int a[20], total = 0;
void read()
{
    int n;
    cout << "enter the size of array(<20)" << endl;
    cin >> n;
    cout << "enter the element of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    total = n;
}
void display()
{
    if (total != 0)
    {
        cout << "\n the value elements in array are" << endl;
        for (int i = 0; i <= total - 1; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    else
        cout << "\narray is empty" << endl;
}
void append()
{
    int x;
    if (total != 20)
    {
        cout << "\nenter the element " << endl;
        cin >> x;
        a[total] = x;
        cout << "\nelement added" << endl;
        total++;
    }
    else
        cout << "\narray is fully filled" << endl;
}
void insert()
{
    int x, index;
    cout << "enter any element and its index" << endl;
    cin >> x >> index;
    if (index <= total)
    {
        for (int i = total - 1; i >= index; i--)
        {
            a[i + 1] = a[i];
        }
        a[index] = x;
        cout << "\n element inserted" << endl;
        total++;
    }
    else
        cout << "\ninvalid index\n";
}
int main()
{
    int ch;
    read();
    do
    {
        cout << "1 for display" << endl;
        cout << "2 for append " << endl;
        cout << "3 for insert" << endl;
        cout << "4 for exist" << endl;
        cout << "enter your choice" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            display();
            break;
        case 2:
            append();
            break;
        case 3:
            insert();
            break;
        case 4:
            break;
        default:
            cout << "\n\ninvalid choice" << endl;
        }
    } while (ch != 4);
    return 0;
}