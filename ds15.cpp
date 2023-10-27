        // Pointer WAP to display the value and address of variable using pointer.
#include <iostream>
using namespace std;
int main(){
int x = 30, *t;
t = &x;
cout<<"value of x  is "<<*t<<endl;
cout<<"address of x is "<<t;
return 0;
}