/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

void removeLoop(Node* head)
{
    // code here
    // just remove the loop without losing any nodes
       Node* p=head;
    Node* q=head;
    while(p&&q&&q->next){
      p=p->next;
      q=q->next->next;
      if(p==q)break;
    }
    Node* w=head;
   if(p==q){
        
    while(w!=p){
        p=p->next;
        w=w->next;
    }
    while(p!=q->next){
        q=q->next;
    }
    q->next=NULL;
   }
}