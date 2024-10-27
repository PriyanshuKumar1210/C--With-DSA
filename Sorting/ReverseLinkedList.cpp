#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }

};

class List{
public:
     Node* head;
     Node* tail;

List(){
      head  = NULL;
      tail = NULL;
}
  ~List(){
        
        if(head!=NULL){
            delete head;
            head = NULL;
        }
  }
void push_front(int data){

    Node* newNode = new Node(data);

    if(head!=NULL){
        newNode->next = head;
        head=newNode;
    }
    else{
        head=tail=newNode;
    }

}
Node* reverse(Node* head) {
    Node* prev = NULL;
    Node* curr = head;

    while(curr != NULL) {
        Node* next = curr->next;

        curr->next = prev;
        prev = curr;
        curr = next;
    }
    cout<< " prev : "<<prev<<endl; 
    return prev; // prev is head
}

void printList(){
    Node* temp=head;

    while(temp!=NULL){
        cout<< temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
};
int main(){
    List ll;
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printList();
    ll.reverse(ll.head);
    ll.printList();
    return 0;

}