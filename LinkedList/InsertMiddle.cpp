#include<iostream>
using namespace std;

class Node{

public :
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }

    ~Node(){
        cout<<"Node Destructor "<<data<<"\n";
        if(next!=NULL){
            delete next;
            next = NULL;
        }
    }
};

class List{

    Node* head;
    Node* tail;

public:
    List(){

        head = NULL;
        tail = NULL;
    }

    ~List(){
        cout<<"~List \n";
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
            head = newNode;
        }
    }

    void push_back(int val){

            Node* newNode = new Node(val);

            if(tail==NULL){
                head = tail = newNode;
            }

            else{
                tail->next = newNode;
                tail = newNode;
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

    void insert(int val,int pos){

        Node* newNode = new Node(val);
        Node* temp = head;

        for(int i=0;i<pos-1;i++){

            if(temp==NULL){ // not require this if statement
                cout<<"postion is invalid \n";
                return;
            }
            temp = temp->next;
        }
    //temp is now at pos-1 i.e - prev/left
            newNode->next = temp->next;
            temp->next = newNode;
    }

    void pop_front(){
        if(head==NULL){
            cout<<"List is empty"<<endl;
        }

        Node* temp = head;
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
    ll.insert(100,2);
    ll.printList();
    ll.pop_front();
    ll.printList();
    return 0;
}