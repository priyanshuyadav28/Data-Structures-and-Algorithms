#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm>

using namespace std;

class Node
{
public:
    int data;
    Node *next = NULL;

    Node()
    {
        this->data = data;
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        cout << "dtor called..." << endl;
    }
};

int findLength(Node *&head)
{
    Node *temp = head;
    int len = 0;

    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }

    return len;
}

void printNode(Node *head)
{
    Node *temp = head;

    cout << "Printing list " << endl;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


Node* checkLoop(Node* &head) {
    if (head == NULL)
    {   
        cout << "Linked List is empty " << endl; 
        return NULL; 
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
            slow = head; 
            break; 
        }
    }

    while (slow != fast)
    {
        fast = fast->next;
        slow = slow->next;
    }
    return slow; 
    
}



int main() {

    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    Node *six = new Node(60);
    Node *seven = new Node(70);
    Node *eight = new Node(80);
    Node *nine = new Node(90);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = six;
    six->next = seven;
    seven->next = eight;
    eight->next = nine;
    nine->next = fifth;


    // find out the starting point of the loop in the LL

    cout << checkLoop(head)->data << endl; 


    return 0;
}