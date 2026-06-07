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
        head=newnode;
        return head;
    }
    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    return head;
}

void display(node *head){
    int count=0;
    node *ptr=head;
    while(ptr!=NULL){
        count++;
        ptr=ptr->next;
    }
    cout<<count<<" ";
}

int main(){
    node *head=NULL;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        head=insert(head,x);
        
    }
    display(head);
    return 0;
}