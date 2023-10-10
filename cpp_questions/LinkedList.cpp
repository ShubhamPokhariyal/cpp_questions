#include<iostream>

using namespace std;

struct Node{
    int data;
    Node *next;
};
Node* head;

void insert_at_end(Node* &head,int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = NULL;
    if(head==NULL){
        head=temp;
        return;
    }
    Node *iter=head;
    while(iter->next != NULL){
        iter = iter->next;
    }
    iter->next = temp;
    
}

void insert_at_pos(Node* &head,int x,int pos){
    Node* temp = new Node();
    temp->data = x;
    temp->next = NULL;
    if(pos==1){
        temp -> next = head;
        head = temp;
        return;
    }
    Node* temp1 = head;
    for(int i=0; i<pos-2;i++){
        temp1 = temp1->next;
    }
    temp->next = temp1->next;
    temp1->next = temp;
}

void display(Node* head){
    if(head==NULL){
        cout << "Linked List is empty!";
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        cout << temp->data<<" ";
        temp = temp->next;
    }cout << temp->data<<endl;
}



void delete_at_pos(Node* &head, int pos){
    Node* temp = head;
    if(pos==1){
        head = temp->next;
        delete temp;
        return;
    }
    for(int i=0;i<pos-2;i++)
        temp = temp->next;
    Node *temp1 = temp->next;
    temp->next = temp1->next;
    delete temp1;
}

void reverse(Node* &head){
    Node *current, *next, *prev;
    current = head;
    prev = NULL;
    while(current!=NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }head = prev;
}

void print_reverse(Node* temp){
    if(temp==NULL) return;
    print_reverse(temp->next);
    cout << temp->data;
} 

void reverse_recursion(Node* &head, Node* temp){
    if(temp->next==NULL){
        head = temp;
        return;
    }
    reverse_recursion(head,temp->next);
    Node* temp1  = temp -> next;
    temp1->next = temp;
    temp -> next = NULL;
    
}

int main(){
    head = NULL;
    int t,d,pos;  
    while(true){
        cout << "0. To quit.\n1. To insert Node.\n2. To show linked list.\n3. To insert at postition.\n4. To delete at position.\n5. Reverse the list.\n6. Print reverse list."<<endl;
        cin >> t;
        if(t==0) break;
        else if(t==1){
            cout << "Enter the number"<<endl;
            cin >> d; 
            insert_at_end(head,d);           
        }
        else if(t==2) display(head);
        else if(t==3){
            cin >> d>>pos;
            insert_at_pos(head,d,pos);
        }
        else if(t==4) {
            cin >> pos;
            delete_at_pos(head,pos);
        }else if(t==5){
            reverse(head);
        }else if(t==6){
            reverse_recursion(head,head);
        }
    }
}
