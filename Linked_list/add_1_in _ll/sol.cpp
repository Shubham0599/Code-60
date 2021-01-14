struct Node* reversed(Node* head){
    
    Node* c=head;
    Node* p=NULL;
    Node* n;
    
    while(c){
      n=c->next;
      c->next=p;
      p=c;
      c=n;
    }
    return p;
}

Node* addOne(Node *head) 
{
    // Your Code here
    // return head of list after adding one 
  
    head=reversed(head);
    Node* res=head;
    
    Node* temp;
    int carry=1;
    
    while(head){
        head->data=head->data +carry;
        // carry=(head->data>=10)?1:0;
        carry=head->data/10;
        head->data=head->data%10;
        temp=head;
        head=head->next;
    }
    if(carry==1){
        temp->next=new Node(carry);
        temp=temp->next;
    }
    
    head=reversed(res);
    return head;
}