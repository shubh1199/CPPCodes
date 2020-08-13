#include <iostream>
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
void buildList(node*&head){
    int data;
    cin>>data;
    while(data!=-1){
        insertAtTail(head,data);
        cin>>data;
    }
}
void kthelement(node*head,int k){
    node*slow=head;
    node*fast=head;
    int j=1;
    while(j!=k+1){
        fast=fast->next;
        j++;
    }
    while(fast!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    cout<< slow->data;
    return;
}
int main() {
    node*head=NULL;
    buildList(head);
    int k;
    cin>>k;
    kthelement(head,k);
    return 0;
}