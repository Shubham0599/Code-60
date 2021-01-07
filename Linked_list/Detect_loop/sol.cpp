/*

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/



//   Node* n;
//     Node* temp=head;
//     head->data=-1;
//     while(n->next!=NULL){
//         n=n->next;
//         if(temp->data==-1)return 0;
//         temp->data=-1;
//         temp=n;
        
//     }
//     return 1;




bool detectLoop(Node* head)
{
    // your code here
    Node* p=head;
    Node* q=head;
    while(p&&q&&q->next){
      p=p->next;
      q=q->next->next;
      if(p==q)return 1;
    }
    return 0;
}


