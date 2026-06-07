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

node *convertsinglyintocircular(node *head){
     if(head == NULL)
        return NULL;
    node *ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=head;
    return head;
}

void display(node *head){
    node *ptr=head;
    do{
        cout<<ptr->data;
        ptr=ptr->next;
    }while(ptr!=head);

}

int main(){
    node *head=NULL;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        head=insert(head,x);

    }
    head=convertsinglyintocircular(head);
    display(head);
    return 0;
}


