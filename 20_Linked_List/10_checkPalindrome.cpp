#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

class Node {
    public: 
    int data; 
    Node *next; 

    Node() {
        this->data = 0; 
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }

    ~Node() {
        cout << "dtor called " << endl; 
    }
}; 

void printNode(Node *&head) {
    Node *temp = head; 

    cout << "Printing Node " << endl; 

    while (temp != NULL)
    {
        cout << temp->data << " "; 
        temp = temp->next; 
    }

    cout << endl; 
    
}

Node *findMid(Node *&head) {
    Node *fast = head;
    Node *slow = head;

    while (fast != NULL)
    {
        fast = fast->next;

        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
}

Node* reverse(Node* &head) {
    Node *prev = NULL; 
    Node *curr = head; 
    Node *next = curr->next; 

    while (curr != NULL)
    {   
        next = curr->next; 

        curr->next = prev;
        prev = curr; 
        curr = next; 
    }
    
    return prev; 
}

bool isPalindrome(Node *&head) {
    if (head == NULL)
    {
        cout << "List is empty from Palindrome" << endl; 
        return true; 
    }
    if (head->next == NULL)
    {
        return true; 
    }

    // find middle node 
    // reverser from mid + 1 
    // check for same  

    // finding mid 
    Node *mid = findMid(head);

    Node *ReversedLLHead = reverse(mid->next);

    mid->next = ReversedLLHead;

    Node *temp1 = head;
    Node *temp2 = ReversedLLHead;

    while (temp2 != NULL)
    {
        if (temp1->data == temp2->data)
        {
            temp1 = temp1->next; 
            temp2 = temp2->next;
        } else  {
            return false; 
        }
        
    }
    
    return true; 

}



int main() {

    Node *head = new Node(10); 
    Node *second = new Node(20); 
    Node *third = new Node(30); 
    Node *fourth = new Node(20); 
    Node *fifth = new Node(10); 

    head->next = second; 
    second->next = third; 
    third->next = fourth; 
    fourth->next = fifth; 
    fifth->next = NULL; 

    printNode(head); 

    cout << "Mid is " << findMid(head)->data << endl; 

    printNode(head);  

    // check for palindrom in the linked list 
    cout << isPalindrome(head) << endl; 

    if (isPalindrome)
    {
        cout << "Palindrome" << endl; 
    } else {
        cout << "Not Palindrome" <<endl; 
    }
    

    return 0; 
}