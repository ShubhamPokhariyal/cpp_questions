#include<iostream>

using namespace std;

class Stack{
private:
    int max_size;
    int top;
    int *arr;
public:
    Stack(int max){
        max_size = max;
        arr = new int[max_size];
        top = -1;
    }
    ~Stack(){
        delete[] arr;
    }
    void push(int data){
        if(top==max_size){
            cout << "Stack is full!"<<endl;
            return;
        }
        arr[++top] = data;
    }
    void pop(){
        if(top==-1){
            cout << "Stack is empty!"<<endl;
            return;
        }
        top -= 1;
    }
    void display(){
        if(top==-1){
            cout << "No elements in Stack!"<<endl;
        }
        for(int i=0;i<=top;i++){
            cout << arr[i]<<" ";
        }cout << endl;
    }

};

int main(){
    Stack stack(10);
    stack.push(10); stack.display();
    stack.push(20); stack.display();
    stack.push(30); stack.display();
    stack.pop(); stack.display();
    stack.pop(); stack.display();
    stack.pop(); stack.display();
    stack.pop(); stack.display();
}