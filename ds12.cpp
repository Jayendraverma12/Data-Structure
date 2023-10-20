#include <iostream>
using namespace std;
int fact(int n){
    if(n == 1|| n==0)
    return 1;
    int f;
    f = n * fact(n-1);
    return f;
}
int main(){
int n;
cout<<"enter a number\n";
cin>>n;
cout<<"factorial of given number is "<<fact(n);
return 0;
}