#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int val){
        data=val;
        next=NULL;
    }    
};

node *insert(node *head,int val){
    node *newnode=new node(val);
    if(head==NULL){
        return newnode;
    }
    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;

    return head;
}

node *middle(node *head){
    node *slow=head;
    node *fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

void display(node *head){
    node *ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    

}

int main(){
    node *head=NULL;
    int n,val;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        head=insert(head,val);
    }
    cout<<"Original LIsts\n:";
    display(head);
    cout<<"MIddle node\n";
    node *mid=middle(head);
    cout<<mid->data;
    return 0;
}
