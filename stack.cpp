#include <iostream.h>
using namespace std;
#define size 10
int stack[size];
int top=-1;

void display(){
    if(top==-1){
     cout<<"\nmemory underflow. nothing to display";
     return ;
    }
    int temp=top;
    for(int i=top;i>=0;i--){
        cout<<"\nelement "<<i<<" is "<<stack[i];
    };
    cout<<"\nelement to delete : "<<temp;
}

void push(){
    if(size==(top+1)){
     cout<<"\nmemory overloaded";
     return ;
    }
    int val;
    cout<<"\nenter element to push : ";
    cin>>val;
    stack[++top]=val;
    cout<<"\n value inserted in stack";
}

void pop(){
    if(top==-1){
     cout<<"\nmemory underflow";
     return ;
    }
    int temp=stack[top];
    stack[top]=0;
    top--;
    cout<<"\nelement to delete : "<<temp;
}


int main(void){
    int ch;
    do{
        //clrscr();
        cout<<"\n   ****MENU****";
        cout<<"\n1.display stack ";
        cout<<"\n2. push in stack ";
        cout<<"\n3. pop from stack ";
        cout<<"\n4. exit";
        cout<<"\nenter your choice : ";
        cin>>ch;
        switch(ch){
            case 1:{
                cout<<"\ndisplay stack";
                display();
                break;
            }
            case 2:{
                cout<<"\npush element";
                push();
                break;
            }
            case 3:{
                cout<<"\nelement to pop";
                pop();
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
