#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val): data(val), next(nullptr) {}
};

class List {
public:
    Node* head;
    Node* tail;

    List() {
        head = NULL;
        tail = NULL;
    }

    void push_back(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printList() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};
    // Function to split the list at the middle
    Node* splitAtMid(Node* head) {
        Node* slow = head;
        Node* fast = head;
        Node* prev = NULL;

        while (fast != NULL && fast->next != NULL) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        if (prev != NULL) {
            prev->next = NULL;  // Split the list into two halves
        }

        return slow;
    }

    // Custom merge function that merges two sorted linked lists
    Node* merge(Node* left, Node* right) {
        List ans;  // Temporary list to store the merged result
        Node* i = left;
        Node* j = right;

        while (i != NULL && j != NULL) {
            if (i->data <= j->data) {
                ans.push_back(i->data);
                i = i->next;
            } else {
                ans.push_back(j->data);
                j = j->next;
            }
        }

        // Add remaining nodes from the left list
        while (i != NULL) {
            ans.push_back(i->data);
            i = i->next;
        }

        // Add remaining nodes from the right list
        while (j != NULL) {
            ans.push_back(j->data);
            j = j->next;
        }

        // Return the head of the merged list
        return ans.head;
    }

    // Merge sort function for the linked list
    Node* mergeSort(Node* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }

        Node* rightHead = splitAtMid(head);

        Node* left = mergeSort(head);
        Node* right = mergeSort(rightHead);

        return merge(left, right);
    }

    // Function to sort the list using merge sort
    // void sort() {
    //     head = mergeSort(head);
    // }


int main() {
    List ll;
    ll.push_back(5);
    ll.push_back(4);
    ll.push_back(3);
    ll.push_back(2);
    ll.push_back(1);

    cout << "Original List:\n";
    ll.printList();

    // ll.sort();  // Call sort to sort the list

    cout << "Sorted List:\n";
    ll.head = mergeSort(ll.head);
    ll.printList();

    return 0;
}