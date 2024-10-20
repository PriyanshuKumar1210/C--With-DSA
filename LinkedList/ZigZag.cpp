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
};

//split the list into two parts

Node* splitList(Node* head){
        Node* slow=head;
        Node* fast = head;
        Node* prev = NULL;

        while(fast!=NULL && fast->next!=NULL){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        if(prev!=NULL){ //break the list
            prev->next = NULL;
        }

        return slow;
}

Node* reverse(Node* head){
        Node* prev=NULL;
        Node* curr = head;

        while(curr!=NULL && curr->next!=NULL){
            Node* next = curr->next;
            curr->next=prev;
            curr = next;

        }

}

Node* zigzag(Node* head){

    
    Node* rightHead = splitList(head);
    Node* rightRev = reverse(rightHead); //reverse right list

// Alternet merging

    Node* left = head;
    Node* right = rightRev;
    Node* nextLeft = NULL;
    Node* nextRight = NULL;
    Node* tail=right; 

    while(left!=NULL && right!=NULL){

        nextLeft = left->next;
        nextRight = right->next;

        left->next = right;
        right->next = nextLeft;
        tail = right;   // it tracks the tail for right
        left = nextLeft;
        right = nextRight;
    }
        if(right!=NULL){ //it's used for odd linked list
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
    return 0;
}