#include <iostream>
using namespace std;
#define size 10
int queue[size];
int front=-1,rear=-1;

void display(){
    if(front==-1 || (front<rear)){
     cout<<"\nmemory underflow. nothing to display";
     return ;
    };
    
    for(int i=rear;i<=front;i++){
        cout<<"\nelement "<<i<<" is "<<queue[i];
    };
}

void enqueue(){
    if(size==(front+1)){
     cout<<"\nmemory overloaded";
     return ;
    }
    int val;
    cout<<"\nenter element to enqueue : ";
    cin>>val;
    queue[++front]=val;
    if(rear==-1){
        rear=0;
    }
    cout<<"\nvalue inserted in queue";
}

void dequeue(){
    if(front<rear){
     cout<<"\nmemory underflow";
     return ;
    }
    int temp=queue[rear];
    queue[rear]=0;
    rear++;
    cout<<"\nelement to delete : "<<temp;
}


int main(void){
    int ch;
    do{
        //clrscr();
        cout<<"\n   ****MENU****";
        cout<<"\n1. display queue ";
        cout<<"\n2. enqueue";
        cout<<"\n3. dequeue";
        cout<<"\n4. exit";
        cout<<"\nenter your choice : ";
        cin>>ch;
        switch(ch){
            case 1:{
                cout<<"\ndisplay queue";
                display();
                break;
            }
            case 2:{
                cout<<"\nadd element";
                enqueue();
                break;
            }
            case 3:{
                cout<<"\nremove element";
                dequeue();
                break;
            }
            case 4:{
                cout<<"\nexit";
                break;
            }
            default:{
                cout<<"\nwrong choice...";
                break;
            }
        }
            
    }while(ch!=4);
    return 0;
}
