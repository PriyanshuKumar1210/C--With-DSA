#include<iostream>
using namespace std;

class Node{

public:
    int data;
    Node* next;

    Node(int val){

        data = val;
        next = NULL;
    }

    ~Node(){
        
        if(next!=NULL){
            next = NULL;
            delete next;
        }
    }
};

class List{

    Node* head;
    Node* tail;

public:
    List(){
        head =NULL;
        tail = NULL; 
    }

void printList(){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
        cout<<"\n";
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

    int search(int key){

        Node* temp = head;
        int idx=0;

        while(temp != NULL){
            if(temp->data==key){
                return idx;
            }

            temp = temp->next;
            idx++;
        }
            return -1;
    }
    ~List(){
        if(head!=NULL){
            head = NULL;
            delete head;
        }
    }

int RecursiveSearchHelper(Node* temp,int key){
        
        if(temp==NULL){
            return -1;
        }

        int idx;
        if(temp->data == key){
            return 0;
        }

        idx = RecursiveSearchHelper(temp->next,key);

        if(idx==-1){
            return -1;
        }

        return idx+1;

}

int RecursiveSearch(int key){
    RecursiveSearchHelper(head,key);
}

};
int main(){
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printList();
    // cout<<ll.search(3);
    cout<<ll.RecursiveSearch(3);
    return 0;
}