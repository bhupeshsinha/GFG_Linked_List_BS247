#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
        int data;
        Node* next;

        Node(int x)
        {
            this->data=x;
            this->next=nullptr;
        }

};

void printLL(Node* head)
{
    Node* node = head;
    while(node)
    {
        cout<<node->data<<" ";
        node=node->next;
    }
    cout<<endl;
}

Node* reverseLL(Node* head)
{
    if(head==NULL || head->next==NULL)return head;

    Node* newHead = reverseLL(head->next);
    
    Node* front = head->next;
    front->next=head;
    head->next=NULL;


    return newHead;
}

int main()
{
    Node* head = new Node(10);
    head->next = new Node(20);

    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);

    cout<<"Before :"<<endl;
    printLL(head);

    Node* newNode = reverseLL(head);

    cout<<"After :"<<endl;
    printLL(newNode);

    return 0;
}