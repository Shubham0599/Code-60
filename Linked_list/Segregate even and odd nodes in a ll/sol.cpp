//head=head->next; not writing this gives "Output Limit Exceeded" error
#include <iostream>
using namespace std;
struct node{
    int data;
    node * next;
    
    node(int d){
        data=d;
        next=NULL;
    }
};
void print(node*  head){
    	node* steven=NULL,*eneven;
    	node* stodd=NULL, *enodd;
    	while(head){
    	    if(head->data%2==0&&steven==NULL){
    	        steven=head;
    	        eneven=steven;
    	       
    	    }
    	    else if(head->data%2==0){
    	        eneven->next=head;
    	        eneven=head;
    	    }
    	    else if(head->data%2!=0&&stodd==NULL){
    	        stodd=head;
    	        enodd=stodd;
    	    }
    	    else{
    	        enodd->next=head;
    	        enodd=head;
    	    }
    	     head=head->next;
    	}
    	if(steven==NULL){
    	   head=stodd; 
    	   enodd->next=NULL;
    	}
    	else if(stodd==NULL){
    	    head=steven;
    	    eneven->next=NULL;
    	}
    	else{
    	    head=steven;
    	eneven->next=stodd;
    	enodd->next=NULL;
    	}
    	while(head){
    	    cout<<head->data<<" ";
    	    head=head->next;
    	}
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	     node *head, *tail;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            
            if(i == 0)
            {
                head = new node(x);
                tail = head;
            }
            else
            {
                tail->next = new node(x);
                tail = tail->next;
            }
        }
	   print(head);
	    cout<<endl;
	}
	return 0;
}









