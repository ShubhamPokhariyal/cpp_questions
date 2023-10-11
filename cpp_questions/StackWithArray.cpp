#include<iostream>
#define MAX_SIZE 20


using namespace std;

void push(int arr[],int &top,int val){
    if(top == MAX_SIZE){
        cout << "Stack is full!"<<endl;
        return;
    }
    arr[++top] = val;
}

void pop(int &top){
    if(top==-1){
        cout << "Stack is empty!"<<endl;
        return;
    }
    top--;
}

void display(int arr[],int top){
    if(top==-1){
        cout << "Stack is empty!"<<endl;
    }
    for(int i=0; i<=top; i++){
        cout << arr[i] <<" ";
    }cout << endl;
}

int main(){
    int arr[MAX_SIZE],top = -1,t=1,data;
    while(t){
        cout << "1. Push\n2. Pop\n3. Display"<<endl;
        cin >> t;
        if(t==1){
            cin >> data;
            push(arr,top,data);
        }else if(t==2){
            pop(top);
        }
        else if(t==3){
            display(arr,top);
        }
    }
}