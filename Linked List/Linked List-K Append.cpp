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
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main() {
    node*head=NULL;
    int n,k;
    cin>>n;
    int d;
    for(int i=0;i<n;i++){
        cin>>d;
        insertAtTail(head,d);   
    }
    cin>>k;
    if(k==n){print(head);}
    else{
        int mark;
        if(k>n){mark=n+(n-k)-1;}
    else{mark=n-k-1;}
    node*prev=head;
    node*curr=head->next;
    for(int i=0;i<mark;i++){
        curr=curr->next;
        prev=prev->next;
    }
    node*temp=curr;
    prev->next=NULL;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=head;
    print(curr);
    }
    return 0;
}