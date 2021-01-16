/* Node structure  used in the program

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

/*  Function which returns the  root of 
    the flattened linked list. */
    Node* merge(Node*a,Node*b){
        if(a==NULL)return b;
        else if(b==NULL)return a;
        Node* c;
        if(a->data<b->data){
            c=a;
          c->bottom=merge(a->bottom,b);
        }
         else{
            c=b;
          c->bottom=merge(a,b->bottom);
        }
        return c;
    }
    
Node *flatten(Node *root)
{
   // Your code here
   if(!root||!root->next) return root;
   Node* head1=root;
  
  Node* head2=root->next;
  head2=flatten(head2);
   
  Node * c=merge(head1,head2);
   //return merge(root,flatten(root->next));
 return c;
}
