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