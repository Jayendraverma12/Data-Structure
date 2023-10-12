#include <iostream>
#define SIZE 5
using namespace std;
class queue{
private: int que[SIZE],front,rear;
public: void insert();
        void del();
        void display();
        queue(){
        front = rear = -1;
        }
};
void queue::insert(){
int x;
if(rear == SIZE-1){
cout<<"\n\nQueue is overflow";
return;
}
cout<<"\n\nEnter any element";
cin>>x;
rear++;
que[rear] =x;
cout<<"element inserted";
if(front ==-1)
front = 0;
}


void queue:: del(){
int x;
if(front == -1){
cout<<"\n\nqueue is underflow";
return;
}
x = que[front];
cout<<"\n\ndeleted element is "<<x;
if(front == rear)
front = rear = -1;
else
front ++;
}    

   
void queue::display(){
if(front == -1){
cout<<"\n\nqueue is empty";
return;
}
cout<<"\n\n\nelement of queue is given below"<<endl;
for(int i = front ; i<=rear;i++)
cout<<que[i]<<"\t";
}
int main(){
int ch;
queue q;
do{
cout<<"\n1 for insert";
cout<<"\n2 for delete";
cout<<"\n3 for display";
cout<<" \n4 for exit";
cout<<"\nenter your choice";
cin>>ch;
switch(ch){
case 1: q.insert(); break;
case 2: q.del(); break;
case 3: q.display(); break;
case 4: break;
default: cout<<"\n\ninvalid choice";
}
}while(ch!=4);

}