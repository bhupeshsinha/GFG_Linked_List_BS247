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