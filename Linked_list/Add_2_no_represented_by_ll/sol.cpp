//segmentation fault (sigsegv) section marked by comment ,have a close look
struct Node* reverse(Node* head){
    
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


struct Node* addTwoLists(struct Node* f, struct Node* s)
{
    // code here
    f=reverse(f);
    s=reverse(s);
    int carry=0,val;
     //  val=f->data+s->data+carry;
    //  val=val%10;
    int a,b;
    Node *res=NULL;
    Node *track;
    while(f||s){
    //val=f->data+s->data+carry;
       a=f!=NULL?f->data:0;
       b=s!=NULL?s->data:0;
       val=a+b+carry;
       carry=(val>=10)?1:0;
       val=val%10;
       if(res==NULL){ res=new Node(val);
           track=res;
       }
       else {track->next=new Node(val);
           track=track->next;
       }
       //f=f->next; s=s->next;
       
       if(f!=NULL)f=f->next;if(s!=NULL)s=s->next;
    }
    if(carry>0){
       track->next=new Node(carry);
        track=track->next; 
    }
    res=reverse(res);
    return res;
}
