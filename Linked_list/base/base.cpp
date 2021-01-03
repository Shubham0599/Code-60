#include <iostream>
#include <stdio.h>
using namespace std;
class node {
    public:
    int data;
    node* next;
    
    node(int d){
        data=d;
        next=NULL;
    }
};

void insertathead(node*& head,int d){
    node* n=new node(d);
    n->next=head;
    head=n;
}


void insertattail(node* &head,int d){
    if(head->next==NULL){
        insertathead(head,d);
        return;
    }
    node* tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
     tail->next= new node(d);
     return;
}

int len(node* head){
int count=1;
while(head->next!=NULL){
    head=head->next;
    count++;
}

return count;
}

void insertinmiddle(node* &head,int data,int p){
    if(head==NULL||p==0){
        insertathead(head,data);
        return;
    }
  else if(p>len(head)){
        insertattail(head,data);
        return;
    }
else {
        int jump=p-1;
    node* n=new node(data);
    node* temp=head;
    while(jump--){
        temp=temp->next;
    }
    n->next=temp->next;
    temp->next=n;
}

}


void deletehead(node* &head){
    node* temp=head;
    head=head->next;
    delete temp;
}

void deletetail(node* &head){
    node* temp=head;
    node* previous;
    while(temp->next!=NULL){
       
       previous=temp; temp=temp->next;
        
    }
    delete temp;
    previous->next=NULL;
}
void deletemiddle(node* &head,int p){
    node* temp=head;
    node* pre;
   p--;
    while(p--){
        pre=temp;
        temp=temp->next;
    }
    pre->next=temp->next;
    delete temp;
}

bool search(node* head,int key){
    node* temp =head;
    while(temp!=NULL){
        if(temp->data==key)return 1;
        temp=temp->next;
    }
    return 0;
}
bool research(node* head,int key){
    if(head->data==key)return 1;
    if(head->next!=NULL)research(head->next,key);
    else return 0;
}



void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
void buildlist(node*&head){
    int data;
    cin>>data;
    while(data!=-1){
    insertattail(head,data);
    cin>>data;
    }
}

int main() {
	node* head=NULL;
	insertathead(head,8);
	insertathead(head,5);
	insertattail(head,12);
	insertinmiddle(head,10,2);
	insertinmiddle(head,15,6);
	insertinmiddle(head,6,1);
	print(head);
	deletehead(head);
	deletetail(head);
	print(head);
	deletemiddle(head,2);
	print(head);
	if(research(head,12))cout<<"12 is present"<<endl;

//buildlist(head);
print(head);
	return 0;
}