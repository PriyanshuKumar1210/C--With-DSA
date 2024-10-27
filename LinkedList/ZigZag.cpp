#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }

    Node(){
        if(next!=NULL){
            delete next;
            next = NULL;
        }
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


void printList(){
    Node* temp=head;

    while(temp!=NULL){
        cout<< temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
};

Node* splitList(Node* head){
    Node* prev=NULL;
    Node* slow=head;
    Node* fast= head;

    while(fast!=NULL && fast->next!=NULL){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
        
    }   
        if(prev!=NULL){
            prev->next = NULL;
        } 
        return slow;
}

Node* reverse(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    
    while(curr!=NULL){
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node* zigzag(Node* head){

    Node* rightHead = splitList(head);  //split the list
    Node* rightRev = reverse(rightHead);    //reverse the right list
   
//Alternate Merging

    Node* left = head;  //left list
    Node* right = rightRev;
    Node* tail = right;

    while(left!=NULL && right!=NULL){
        Node* nextLeft = left->next;
        Node* nextRight = right->next;

        left->next = right;
        right->next = nextLeft;

        tail = right;
        left = nextLeft;
        right = nextRight;

    }
    if(right!=NULL){
        tail->next = right;
    }
        return head;
}

int main(){
    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printList();
    ll.head= zigzag(ll.head);
    ll.printList();
    return 0;

}