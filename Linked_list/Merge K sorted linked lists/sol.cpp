Node* merge(Node* head1,Node* head2){
//     Node* head=NULL,*temp;
//     if(head1->data<head2->data){
//         head=new Node(head1->data);
//         temp=head;
//         head1=head1->next;
//     }
//     else{
//          head=new Node(head2->data);
//         temp=head;
//         head2=head2->next;
//     }
//     while(head1&&head2){
//         if(head1->data<head2->data){
//             temp->next=new Node(head1->data);
//             head1=head1->next;
//         }
//         else{
//             temp->next=new Node(head2->data);
//             head2=head2->next;
//         }
//     }
//   if(head1){
//         while(head2){
//         temp->next=new Node(head2->data);
//         head2=head2->next;
//     }
//   }
//   else{
//             while(head1){
//         temp->next=new Node(head1->data);
//         head1=head1->next;
//     } 
//   }
//   return head;
if(head1==NULL)return head2;
else if(head2==NULL)return head1;
Node * head;
if(head1->data<head2->data){
    head=head1;
    head->next=merge(head1->next,head2);
}
else{
    head=head2;
    head->next=merge(head1,head2->next);
}
return head;
}

/* arr[] is an array of pointers to heads of linked lists
  and N is size of arr[]  */
Node * mergeKLists(Node *arr[], int N)
{
       // Your code here
       if(N==1)return arr[0];
       Node* head1=arr[0];
       Node* head2=arr[1];
       Node* temp=merge(head1,head2);
       for(int i=2;i<N;i++){
           Node* p=arr[i];
          temp=merge(temp,p);
       }
       return temp;
}