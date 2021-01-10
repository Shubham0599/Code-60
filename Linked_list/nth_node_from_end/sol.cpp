int getNthFromLast(Node *head, int n)
{
       // Your code here
       int p=n;
       Node *fast=head;
       Node* slow=head;
       while(p--){
           if(fast==NULL)return -1;
           fast=fast->next;
       }
       while(fast){
           fast=fast->next;
           slow=slow->next;
       }
       return slow->data;
       
}