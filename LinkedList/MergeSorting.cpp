#include <iostream>
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
    Node* head;
    Node* tail;

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

    void push_front(int val)
    {
        Node* newnode = new Node(val); // create a node with a value

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

    void push_back(int val)
    {
        Node* newnode = new Node(val);

        if (tail == NULL)
        {
            head = tail = newnode;
        }

        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }
    void printList()
    {
        Node* temp = head;

        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL";
        cout << "\n";
    }
};
    Node* spilitList(Node* head)
    {

        Node* slow = head;
        Node* fast = head;
        Node* prev = NULL;

        while (fast != NULL && fast->next != NULL)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if (prev != NULL)
        {
            prev->next = NULL;
        }

        return slow;
    }

    Node* merge(Node* left, Node* right)
    {
        List ans;
        Node* i = left;
        Node* j = right;

        while (i != NULL && j != NULL)
        {
            if (i->data <= j->data)
            {
                ans.push_back(i->data);
                i = i->next;
            }
            else
            {
                ans.push_back(j->data);
                j = j->next;
            }
        }

        while (i != NULL)
        {
            ans.push_back(i->data);
            i = i->next;
        }

        while (j != NULL)
        {
            ans.push_back(j->data);
            j = j->next;
        }
        return ans.head;
    }

    Node* mergeSort(Node *head)
    {
        cout << "mergeSort";

        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        Node* rightHead = spilitList(head);

        Node* left = mergeSort(head);
        Node* right = mergeSort(rightHead);

        return merge(left, right);
    }

int main()
{
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);

    cout << "Original List \n";
    ll.printList();
    cout << "\n Sorted List \n";
    ll.head = mergeSort(ll.head);
    ll.printList();
    return 0;
}