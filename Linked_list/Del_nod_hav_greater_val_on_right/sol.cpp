//recursive approch
Node *compute(Node *head)
{
    // your code goes here
    if(head->next==NULL)return head;
    Node* temp=compute(head->next);
    if(head->data<temp->data){
       
      return temp;
    }
    else {
        head->next=temp;
        return head;
    }
}

//normal approch by reversing

Node* reverse(Node* head){
    Node* temp=head;
    Node* prev=NULL;
    Node * nex;
    while(temp){
        nex=temp->next;
        temp->next=prev;
        prev=temp;
        temp=nex;
        
    }
    return prev;
}



Node *compute(Node *head)
{
    // your code goes here
    head=reverse(head);
    Node * current=head;
    Node * max=head;
    Node* temp;
   while(current&&current->next){
        if(current->next->data<max->data){
        temp=current->next;
        current->next=temp->next;
        free(temp);
    }
    else{
         current = current->next;
            max = current;
    }
   }
    head=reverse(head);
return head;
}


/*
The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/


