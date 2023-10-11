#include <iostream>
using namespace std;
int a[3][3];
void read()
{
    cout << " enter element of 2 d array :" << endl;
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cin >> a[i][j];
        }
    }
}
void display()
{
    cout << "elements are :" << endl;
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }
}
void sum()
{
    int sum = 0;
    for (int i = 0; i <= 2; i++)
        for (int j = 0; j <= 2; j++)
        {
            sum = sum + a[i][j];
        }
    cout << "Sum of all elements of array are - : " << sum << endl;
}
void diagonal()
{
    int sum = 0;
    for (int i = 0; i <= 2; i++)
        for (int j = 0; j <= 2; j++)
            if (i == j)
            {
                sum = sum + a[i][j];
            }
    cout << "Sum of diagonals elements are -:" << sum << endl;
}
void transpose()
{
    cout << "elements are :" << endl;
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout << a[j][i] << "  ";
        }
        cout << endl;
    }
}
void row()
{
    int sum;

    for (int i = 0; i <= 2; i++)
    {
        sum = 0;
        for (int j = 0; j <= 2; j++)
        {
            sum = sum + a[i][j];
        }
        cout << "\nSum of " << i + 1 << " row is " << sum << endl;
    }
}
void column()
{
    int sum;

    for (int j = 0; j <= 2; j++)
    {
        sum = 0;
        for (int i = 0; i <= 2; i++)
        {
            sum = sum + a[i][j];
        }
        cout << "\nSum of " << j + 1 << " column is " << sum << endl;
    }
}
int main()
{
    read();
    int ch;
    do{
        cout<<"1 for display"<<endl;
        cout<<"2 for sum of all elements of array"<<endl;
        cout<<"3 for sum of diagonal elements of array"<<endl;
        cout<<"4 for sum of elements as per row"<<endl;
        cout<<"5 for sum of elements as per column"<<endl;
        cout<<"6 for transpose of array"<<endl;
        cout<<"7 for exist"<<endl;
        cout<<"Enter your choice "<<endl;
        cin>>ch;
        switch(ch){
            case 1: display(); break;
            case 2: sum(); break;
            case 3: diagonal(); break;
            case 4: row(); break;
            case 5: column(); break;
            case 6: transpose(); break;
            case 7: break;
            default: cout<<"Invalid choice"<<endl;
        }
    }while(ch!=7);
    

    return 0;
}