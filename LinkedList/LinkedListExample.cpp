#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;


    Node(int val){
        data=val;
        next = NULL;
    }

    ~Node(){
        cout<<"~node "<<data<<"\n";

        if(next!=NULL){
            delete next;
            next = NULL;
        }
    }
};

class List{
    Node *head;
    Node *tail;

public:
    List(){
        head = NULL;
        tail = NULL;
    }

    ~List(){
        cout<<"~list \n";
        if(head!=NULL){
            delete head;
            head = NULL;
        }
    }

    void push_front(int val){
        Node* newnode = new Node(val); //create a node with a value

        if(head==NULL){
            head = tail = newnode;
            /*  It also written as :-
                head = newnode
                tail = newnode*/
        }

        else{
            newnode->next = head;
            head = newnode;
        }

    }

    void push_back(int val){
        Node *newnode = new Node(val);

        if(tail==NULL){
            head = tail =  newnode;
        }

        else{
            tail->next = newnode;
            tail = newnode;
        }
    }

    void printList(){
        Node* temp = head;
    
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
        cout<<"\n";
    }

    void pop_front(){

        Node* temp = head;
        if(head==NULL){
            cout<<"List is empty";
            return;
        }

        head = head->next;
        temp->next = NULL;
        delete temp;
    }
};

int main(){
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printList();
    ll.push_back(4);
    ll.printList();
    return 0;
}