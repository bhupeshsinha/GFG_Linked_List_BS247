#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;

        Node(int x)
        {
            this->data = x;
            this->next = nullptr;
        }
};

Node* reverseLL(Node* node)
{
    Node* prev=nullptr;
    Node* cur=node;
    Node* nxt=nullptr;

    while(cur)
    {
        nxt=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nxt;
    }

    return prev;
}


void printLL(Node* node)
{
    while(node)
    {
        cout<<node->data<<" ";
        node=node->next;
    }
    cout<<endl;
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
    head->next->next->next->next->next->next->next->next = new Node(90);

    cout<<"Before Reverse: "<<endl;
    printLL(head);

    Node* newNode = reverseLL(head);

    cout<<"After Reverse: "<<endl;
    printLL(newNode);

}