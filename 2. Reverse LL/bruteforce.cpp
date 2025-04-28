#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int x)
        {
            this->data = x;
            this->next=nullptr;
        }
};

void printLL(Node* node)
{
    Node* temp = node;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

Node* reverseLL(Node* node)
{
    Node* temp = node;
    stack<int> st;

    while(temp)
    {
        st.push(temp->data);
        temp=temp->next;
    }

    temp = node;

    while(temp)
    {
        temp->data = st.top();
        st.pop();
        temp=temp->next;
    }

    return node;
}

int main()
{
    Node* head = new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    head->next->next->next->next->next=new Node(60);
    
    cout<<"Before Reverse: ";
    printLL(head);

    Node* newHead=reverseLL(head);

    cout<<"After Reverse: ";
    printLL(newHead);

}