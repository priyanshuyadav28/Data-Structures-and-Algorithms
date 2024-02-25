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

    Node () {
        this->data = 0; 
        this->next = NULL; 
    }

    Node (int data) {
        this->data = data; 
        this->next = NULL; 
    }

    ~Node () {
        cout << "dtor called " << endl; 
    }

}; 

void printNode(Node *head) {
    Node *temp = head; 
    
    cout << "Printing Nodes" << endl; 

    while (temp != NULL)
    {
        cout << temp->data << " "; 
        temp = temp->next; 
    }

    cout << endl; 
    
}

bool checkForLoop(Node *&head) {
    if (head == NULL)
    {
        return false; 
    }
    
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL)
    {
        fast = fast->next; 

        if (fast != NULL)
        {
            fast = fast->next; 
            slow = slow->next;
        }
        if (slow == fast)
        {
            return true;
        }
    }

    // fast NULL ho gaya 
    return false; 
    
}


Node* startingPointOfLoop(Node *&head) {
    if (head == NULL)
    {
        return NULL; 
    }

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

        if (slow == fast)
        {
            // now put slow on head; 
            slow = head; 
            break; 
        }
    }

    while (slow != fast)
    {
        slow = slow->next; 
        fast = fast->next; 
    }
    

    return slow; 
    
    
    
}

void removeLoop(Node *&head)
{
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

        if (slow == fast)
        {
            slow = head; 
            break;
        }
    }

    Node *prev = fast;
    while (slow != fast)
    {
        prev = fast; 
        slow = slow->next;
        fast = fast->next; 
    }
    prev->next = NULL; 
}

int main() {

    Node *head = new Node(10); 
    Node *second = new Node(20); 
    Node *third = new Node(30); 
    Node *four = new Node(40); 
    Node *five = new Node (50); 
    Node *six = new Node (60); 
    Node *seven = new Node (70); 
    Node *eight = new Node (80); 
    Node *nine = new Node (90); 

    head->next = second; 
    second->next = third; 
    third->next = four; 
    four->next = five; 
    five->next = six; 
    six->next = seven; 
    seven->next = eight; 
    eight->next = nine; 
    nine->next = five; 

   

    cout << checkForLoop(head) << endl; 

    cout << startingPointOfLoop(head)->data << endl;

    removeLoop(head); 

    cout << checkForLoop(head) << endl; 

    printNode(head); 


    return 0; 
}