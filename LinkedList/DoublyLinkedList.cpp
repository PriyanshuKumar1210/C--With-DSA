#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }

    ~Node(){
        if(next!=NULL){
            delete next;
            next = NULL; 
        }
    }
};

class DoublyList{

    Node *head;
    Node *tail;

public:
    DoublyList(){
        head = NULL;
        tail = NULL;
    }

    ~DoublyList(){
        // cout<<"~list \n";
        if(head!=NULL){
            delete head;
            head = NULL;
        }
    }


void push_front(int val){
        Node* newNode = new Node(val);

        if(head==NULL){
            head = tail = newNode;
        }

        else{
            newNode->next = head;
            head->prev = newNode;
            head= newNode;
        }
}

void push_back(int val){
    Node* newNode = new Node(val);

    if(tail==NULL){
        head = tail = newNode;
    }

    else{
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void pop_front(){
        Node* temp = head;
        head=head->next;
        if(head!=NULL){
            head->prev=NULL;
            temp->next=NULL;
            delete temp;
        }
}

void pop_back(){
    Node* temp = head;
    while(temp!=NULL  && temp->next->next!=NULL){
        temp = temp->next;
    }

        tail->prev=NULL;
        temp->next=NULL;
        tail=temp;
}

void print(){
        Node* temp=head;

        while(temp!=NULL){
            cout<<temp->data<<" <=> ";
            temp=temp->next;
        }
            cout<<"NULL";
            cout<<"\n";
}
};

int main(){
    DoublyList ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_front(5);
    ll.print();
    ll.pop_back();
    ll.print();
   // ll.push_back(6);
   ll.pop_back();
    ll.print();
    return 0;
}