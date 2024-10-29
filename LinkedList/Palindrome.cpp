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

void push_back(int data){
    Node* newNode = new Node(data);

    if(tail==NULL){
        head = tail = newNode;
    }
    else{
        tail->next = newNode;
        tail = newNode;
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

Node* splitAtMiddle(Node* head){

    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;

    while(fast!=NULL && fast->next!=NULL){
        prev = slow;
        slow = slow -> next;
        fast = fast->next->next;
    }

    if(prev!=NULL){
        prev->next = NULL;
    }
        return slow;
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

    return prev; // prev is head
}


bool isPalindrome(Node* head){

    if(head == NULL || head->next == NULL){
        return true;
    }

    Node* middle = splitAtMiddle(head);
    Node* right = reverse(middle->next);

    Node* left = head;

    while(right!=NULL){
        if(left->data != right->data){
            return false;
        }

            left = left->next;
            right = right->next;
    }
            return true;;
}

int main(){
    List ll;
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(2);
    ll.push_back(1);
    ll.printList();
    
    
    cout<<isPalindrome(ll.head)<<endl;

    return 0;

}