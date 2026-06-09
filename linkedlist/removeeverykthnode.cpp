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
    node *ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<"NULL\n";
}

node *removeeverykthnode(node *head,int k){
    
    int count=1;
    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
        count++;
    }
    if(head==NULL || k<=0)
        return head;
   if(k==1){
    while(head){
        node *temp=head;
        head=head->next;
        delete temp;
    }
    return NULL;
   }

   

node *curr=head;
node *prev=NULL;
while(curr!=NULL){
    if(count%k==0){
        prev->next=curr->next;
        node *temp=curr;
        curr=curr->next;
        delete temp;
    }
    else{
        prev=curr;
        curr=curr->next;
    }
    count++;
}
return head;
    
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
    int k;
    cin>>k;
    head=removeeverykthnode(head,k);
    display(head);
    return 0;

}