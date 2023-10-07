#include <iostream>
using namespace std;
int main()
{
    int a, b, c, ch;
    do
    {
        cout << "Enter the value of a and b " << endl;
        cin >> a >> b;
        cout << "1 for sum\n";
        cout << "2 for difference\n";
        cout << "3 for product\n";
        cout << "4 for division\n";
        cout << "5 for exist\n";
        cout << "Enter your choice" << endl;
        cin >> ch;
        switch (ch)

        {
        case 1:
            c = a + b;
            cout << "Sum = " << c<<endl;
            break;
        case 2:
            c = a - b;
            cout << " difference between a and b = " << c<<endl;
            break;
        case 3:
            c = a * b;
            cout << "product of a and b = " << c<<endl;
            break;
        case 4:
            c = a / b;
            cout << "Division of a and b = " << c<<endl;
            break;
        case 5:
            break;
        default:
            cout << " invaild choice"<<endl;
        }
    } while (ch != 5);

    return 0;
}