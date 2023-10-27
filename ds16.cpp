// pointer WAP to display the value  and address using pointer without help of variable;
#include <iostream>
using namespace std;
int main(){
int *t;
t = new int;
*t = 40;
cout<<"value of int is "<<*t<<endl;
cout<<"address of int is "<<t;
delete t;
return 0;
}