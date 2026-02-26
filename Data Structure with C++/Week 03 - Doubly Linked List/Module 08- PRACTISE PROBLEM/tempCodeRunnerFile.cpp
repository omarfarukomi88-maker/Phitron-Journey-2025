if(idx==0)//head
    {
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        Node *tmp=head;
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }