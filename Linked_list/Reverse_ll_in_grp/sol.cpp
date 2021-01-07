struct node *reverse (struct node *head, int k)
{ 
    // Complete this method
    node* p=NULL;node* c=head ;node* n=c->next;
    int count=0;
    while(c!=NULL && count<k){
        n=c->next;
        c->next=p;
        p=c;
        c=n;
        count++;
    }
    if(n!=NULL){
        head->next=reverse(n,k);
    }
    return p;
    
}

