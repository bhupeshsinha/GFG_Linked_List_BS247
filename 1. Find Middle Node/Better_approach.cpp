#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int x)
        {
            this->data = x;
            this->next = nullptr;
        }
};

int getMiddle(Node* head)
{
    Node* slow = head;
    Node* fast = head;

    while(fast!=NULL && fast->next != NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }

    return slow->data;
}

int main()
{
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);
    head->next->next->next->next->next->next = new Node(70);
    head->next->next->next->next->next->next->next = new Node(80);
    head->next->next->next->next->next->next->next->next = new Node(80);

    cout<<getMiddle(head);
}