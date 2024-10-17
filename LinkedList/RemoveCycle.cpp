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
public:

        Node* head;
        Node* tail;

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

    bool detectCycle(Node* head){
        Node* fast;
        Node* slow;

        fast = slow = head;

        while(fast!=NULL && fast->next!=NULL){

                slow = slow->next;
                fast = fast->next->next;
                if(slow==fast){
                    cout<<"cycle detect\n";
                    return true;
                }
        }

             cout<<"cycle doesn't detect\n";
                    return false;
    }

    void removeCycle(Node* head){
        Node* slow;
        Node* fast;
        

        bool isCycle = detectCycle(head);
        

        if(!isCycle){
            cout<<"Cycle doesn't exists \n";
            return;
        }

        slow = head;
        if(slow==fast){

            while(fast->next!=slow){
                fast = fast->next;

            }
                fast->next = NULL;

        }

        else{
            Node* prev=fast;
            while(slow!=fast){
                slow = slow->next;
                prev = fast;
                fast = fast->next;

            }
            prev->next = NULL ; //It's removes the cycle 
        }

    }

};

int main(){

    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.tail->next = ll.head; //this lines helps to create a cycle
    // ll.print();
    // ll.isCycle(ll.head);
    ll.removeCycle(ll.head);
    ll.print();
    return 0;
}