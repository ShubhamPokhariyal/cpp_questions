#include<iostream>

using namespace std;

class Node{
public:
    int data;
    Node *prev,*next;
    Node(int data){
        this -> data = data;
        prev = NULL;
        next = NULL;
    }
};

void insertAtTail(Node* &head,int x){
    Node* temp = new Node(x);
    if(head==NULL){
        head =temp;
        return;
    }Node* iter;
    iter = head;
    while(iter->next!=NULL){
        iter = iter->next;
    }iter->next = temp;
    temp->prev = iter;
}

void display(Node* head){
    while(head!=NULL){
        cout << head->data<<" ";
        head = head->next;
    }cout << endl;
}

void ReversePrint(Node *head){
    while(head->next != NULL){
        head = head->next;
    }while(head!=NULL){
        cout << head->data<<" ";
        head = head->prev;
    }cout << endl;
}

int main(){
    Node* head=NULL;
    int t=1,data;
    while(t){
        cout << "1. Insert\n2. Display\n3. Reverse Print"<<endl;
        cin >> t;
        if(t==1){
            cin >> data;
            insertAtTail(head,data);
        }else if(t==2){
            display(head);
        }else if(t==3){
            ReversePrint(head);
        }
    }
}