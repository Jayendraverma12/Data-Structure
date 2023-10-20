#include <iostream>
using namespace std;
void table(int i, int n){
    if(i<=10){
        cout<<n<<" * "<<i<<" ="<<n*i<<endl;
        table(i+1,n);
    }
}
int main(){
int i =1,n;
cout<<"enter any number\n\n"<<endl;
cin>>n;
table(i,n);
return 0;
}