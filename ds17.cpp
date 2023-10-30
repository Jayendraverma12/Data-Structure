        // Singly  Linked  List   WAP to create and display thr elemet=nt of the singly linked list;
#include <iostream>
using namespace std;
struct NODE{
    int info;
    NODE *next;
};
NODE * create(NODE * start){
    int x;
    char ch;
    NODE *newnode,*temp;
    cout<<"do you want to create a node Y/N";
    cin>>ch;
    while(ch =='y' || ch =='Y'){
        newnode = new NODE;
        cout<<"\nenter any element ";
        cin>>x;
        newnode->info = x;
        newnode->next = NULL;
        if(start == NULL)
            start = newnode;
        else
            temp->next = newnode;
            temp = newnode;
        cout<<"element inserted\n";
        cout<<"do you want to create a node Y/N\n";
        cin>>ch;
    }
    return start;
}
void display(NODE *temp){
    if(temp == NULL){
        cout<<"\nSingly linked list is empty";
        return;
    }
    cout<<"element of the singly linked list are given below\n\n";
    while(temp !=NULL){
        cout<<temp->info<<"  ";
        temp = temp->next;
    }
}
int main(){
    NODE * start = NULL;
    start = create(start);
    display(start);
return 0;
}