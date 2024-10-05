#include<iostream>
using namespace std;

class Node{
public:
        int data;
        Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }

    ~Node(){
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


    void print(){
        
        Node* temp=head;

        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }

            cout<<"\n";
    }

    int getSize(){
        int count =0;
        Node* temp = head;
        while(temp!=NULL){
            temp = temp->next;
            count++;
        }
        return count;
    }

    void deleteNth(int n){

        Node* prev=head;
        int size = getSize();
     //   cout<<"List size : "<<size<<endl;

        for(int i=1;i<size-n;i++){
            prev = prev->next;
        }

            prev->next = prev->next->next;

    }
};

int main(){

    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.print();
    ll.deleteNth(2);
    ll.print();
    return 0;
}