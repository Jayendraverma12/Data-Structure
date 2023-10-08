// WAP to calculate the sum of two number, swapping of two number and factorial of given number using function. call each function in relative case using switch case inside the do while loop and execution of loop depends upon users choice.
#include <iostream>
using namespace std;
void sum(){
    int a,b,c;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    c = a+b;
    cout<<" The sum of two number is ="<<c<<endl;
}
void swap(){
    int a,b,temp;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    temp = a;
    a=b;
    b = temp;
    cout<<"after swapping the value of a -"<<a<<" and b = "<<b<<endl;
}
void fact(){
    int a,fact = 0;
    cout<<" enter a number"<<endl;
    cin>>a;
    for(int i=1;i<=a;i++){
        fact = fact*i;
    }
    cout<<"The factorial of "<<a<<" is "<<fact<<endl;
}
int main(){
    int ch;
    do{
        cout<<"1 for sum"<<endl;
        cout<<"2 for swapping "<<endl;
        cout<<"3 for factorial"<<endl;
        cout<<"4 for exist"<<endl;
        cout<<"enter your choice"<<endl;
        cin>>ch;
        switch(ch){
            case 1: sum(); break;
            case 2: swap(); break;
            case 3: fact(); break;
            case 4: break;
            default: cout<<"invalid choice"<<endl;
        }
    }while(ch!=4);

return 0;
}