#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
    }
};

class Stack{
    Node* top;
public:
    Stack(){
        top = NULL;
    }

    void push(int data){
        Node* temp = new Node(data);
        temp->next = top;
        top = temp;
    }

    void pop(){
        if(top==NULL){
            cout << "Stack is empty!"<<endl;
            return;
        }
        Node* temp = top;
        top = temp->next;
        delete(temp);
    }

    void display(){
        if(top==NULL){
            cout << "No elements in Stack!"<<endl;
            return;
        }
        Node* temp = top;
        while(temp!=NULL){
            cout << temp->data <<" ";
            temp = temp->next;
        }cout << endl;
        delete(temp);
    }
};

int main(){
    Stack* stack = new Stack();
    stack->push(10); stack->display();
    stack->push(20); stack->display();
    stack->push(30); stack->display();
    stack->push(40); stack->display();
    stack->pop(); stack->display();
    stack->pop(); stack->display();
    stack->pop(); stack->display();
    stack->pop(); stack->display();
}