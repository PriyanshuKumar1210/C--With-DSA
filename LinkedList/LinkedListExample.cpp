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
        // cout<<"~node "<<data<<"\n";

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
        // cout<<"~list \n";
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
        cout<<temp->data<<"->";
        temp = temp->next;
    }
       // cout<<"NULL";
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

    void pop_back(){
        Node* temp = head;
        if(head==NULL){
            cout<<"List is empty";
            return;
        }
        if(head->next ==NULL ){
            delete head;
            head->next = NULL;
            return;
        }

        while(temp->next->next!=NULL){
            temp = temp->next;

        }

            temp->next = NULL; // just prev node as tail node 
            delete tail;
            tail = temp;
            
    }

    void reverseList(){
        Node* prev=NULL;
        Node* curr=head;

        while(curr!=NULL){
            Node* next = curr->next; //Assigned next node of current node in curr
            curr->next = prev; // Assign current node to the previos node
            prev = curr;    //update current node to previous node
            curr = next;    //update current node to the next node
        }

            head = prev;    //assign the head to the last node 
            
    }

    
};

int main(){
    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printList();
    // ll.push_back(4);
    // ll.pop_back();
    // ll.printList();
    ll.reverseList();
    ll.printList();
    return 0;
}