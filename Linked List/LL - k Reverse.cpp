#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;

    node(int d){
        data=d;
        next=NULL;
    }
};
void insertAtTail(node*&head,int data){
    if(head==NULL){
        head=new node(data);
        return;
    }
    node*tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    tail->next=new node(data);
    return;
}
void print(node* head){
    while(head!=NULL){
        cout<<head->data<<"-->";
        head=head->next;
    }
}
node*reverse(node*&head,int k){
    node*c=head;
    node*p=NULL;
    node*n;
    int count=0;
    while(c!=NULL && count<k){
        n=c->next;
        c->next=p;
        p=c;
        c=n;
        count++;
    }
    head=p;
    for(int i=0;i<k;i++){
        cout<<p->data<<" ";
        p=p->next;
    }
    if(n!=NULL){
        head->next= reverse(n,k);
    }
    return p;
}
int main() {
    node*head=NULL;
    int n,k;
    cin>>n>>k;
    int d;
    for(int i=0;i<n;i++){
        cin>>d;
        insertAtTail(head,d);   
    }
    reverse(head,k);
    return 0;
}