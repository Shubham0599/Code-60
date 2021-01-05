struct Node* reverseList(struct Node* head)
{
    // code here
    // return head of reversed list
    Node* p=NULL;
    Node* n;
    Node* c=head;
    while(c!=NULL){
    n=c->next;
    c->next=p;
    p=c;
    c=n;
    }

    return p;
}