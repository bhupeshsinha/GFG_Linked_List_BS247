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
}

int findLength(Node* head)
{
    Node* temp = head;
    int len=0;

    while(temp)
    {
        len++;
        temp=temp->next;
    }

    return len;
}

int getMiddle(Node* head)
{
    Node* temp = head;
    int len = findLength(head);
    
    int middle = (len%2 == 0) ? (len/2)+1:len/2;
    while(middle--)
    {
        temp=temp->next;
    }

    return temp->data;
}

int main()
{
    Node* head = new Node(10);
    
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);

    cout<<"Middle Node is "<<getMiddle(head);
}