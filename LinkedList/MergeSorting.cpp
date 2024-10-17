#include <iostream>
#include <list>
#include <iterator>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }

    ~Node()
    {
        if (next != NULL)
        {
            delete next;
            next = NULL;        
        }
    }
};

class List
{
public:
    Node *head;
    Node *tail;

    List()
    {
        head = NULL;
        tail = NULL;
    }

    ~List()
    {
        if (head != NULL)
        {
            delete head;
            head = NULL;
        }
    }

void push_front(int val){
        Node *newnode = new Node(val); // create a node with a value

        if (head == NULL)
        {
            head = tail = newnode;
            /*  It also written as :-
                head = newnode
                tail = newnode*/
        }

        else
        {
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
void printList()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        // cout<<"NULL";
        cout << "\n";
}

Node* mergeSort(Node* head){
    
}


};

int main()
{
    List ll;
    // list<int>::iterator itr; //creating the iterator
    ll.push_front(3);
    ll.push_front(4);
    ll.push_front(5);
    ll.push_front(2);

    ll.printList();

    ll.head = mergeSort(ll.head);
    ll.printList();
    return 0;
}