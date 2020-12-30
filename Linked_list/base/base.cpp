#include <iostream>
#include<algorithm>
using namespace std;
class node{
public:
    int data;
    node* next;//pointer to next node
//constructor
   node (int d){
   data= d;
   next=NULL;
   }
};

void inserathead(node*&head,int d){
node* n=new node(d);
n->next=head;
head=n;

}
void print(node* head ){
    //node* temp=head;
    while(head!=NULL){
        cout<<head->data<<"--";
        head=head->next;
    }
}

int main() {

    node* head=NULL;
    inserathead(head,7);
    inserathead(head,6);
    inserathead(head,9);
    print(head);
	return 0;
}
