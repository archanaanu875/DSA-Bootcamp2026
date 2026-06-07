//remove every kth nodes.....

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
        newnode->next=head;
        return head;
    }
    node *temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=head;
    return head;
}


void display(node *head){
    node *ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<"NULL\n";
}

node *removeeverykthnode(node *head,int k){
    node *curr=head;
    node *prev=NULL;
    // int count=0;
    // while(temp->next!=NULL){
    //     temp=temp->next;
    //     count++;
    // }
    int count=k;
    while(count<k){
        prev=curr;
        curr=curr->next;
        count++;
    }
    prev->next=curr->next;
    delete curr;
    curr=prev->next;
    count=k;
    return head;
}
