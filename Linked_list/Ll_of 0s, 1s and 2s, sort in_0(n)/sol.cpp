Node* segregate(Node *head) {
    
    // Add code here
    int zero=0,one=0,two=0;
    Node* temp=head;
    while(temp){
        if(temp->data==0)zero++;
        else if(temp->data==1)one++;
        else two++;
        temp=temp->next;
    }
    temp=head;
    while(zero--){
        temp->data=0;
        temp=temp->next;
    }
    while(one--){
        temp->data=1;
        temp=temp->next;
    }
    while(two--){
        temp->data=2;
        temp=temp->next;
    }
    
    return head;
}