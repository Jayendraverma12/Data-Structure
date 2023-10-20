//  WAP to calculate the sum of n natural number.
#include <iostream>
using namespace std;
int sum(int n){
    int s;
    if(n==1){
        cout<<endl<<"1"<<endl;
        return 1;
    }
    else 
     s = n + sum(n-1);
    cout<<s<<endl;
    return s;
}
int main(){
int n;
cout<<"enter the number\n\n";
cin>>n;
sum(n);
return 0;
}