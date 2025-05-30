#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
        int data;
        Node* next;
        Node* prev;

        Node(int x)
        {
            this->data = x;
            this->next=nullptr;
            this->prev=nullptr;
        }
};

void printLL(Node* node)
{
    while(node)
    {
        cout<<node->data<<" ";
        node=node->next;
    }

    cout<<endl;
}

Node* reverseDLL(Node* node)
{
    if(node==nullptr)return node;

    swap(node->next, node->prev);

    if(node->prev==nullptr)return node;

    return reverseDLL(node->prev);
}

Node* OPTreverseDLL(Node* node)
{
    if(node == nullptr || node->next == nullptr)return node;
    Node* prevNode=nullptr;
    Node* curNode = node;

    while(curNode)
    {
        prevNode=curNode->prev;
        curNode->prev = curNode->next;
        curNode->next = prevNode;

        curNode = curNode->prev;
    }

    return prevNode->prev;
}

int main()
{
    Node* head = new Node(10);
    
    head->next = new Node(20);
    head->next->prev=head;

    head->next->next=new Node(30);
    head->next->next->prev=head->next;

    head->next->next->next=new Node(40);
    head->next->next->next->prev = head->next->next;

    cout<<"Before "<<endl;
    printLL(head);

    // Node* newHead = reverseDLL(head);
    Node* newHead = OPTreverseDLL(head);

    cout<<"After "<<endl;
    printLL(newHead);
}