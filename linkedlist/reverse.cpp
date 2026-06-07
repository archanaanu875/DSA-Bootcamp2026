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
void display(node *head){
    node *ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}

node *reverse(node *head){
    node *curr=head;
    node *prev=NULL;
    node *next;

    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
int main(){
    node *head=NULL;
    int n,val;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        head=insert(head,val);
    }
    cout<<"Original List:";
    display(head);


    head=reverse(head);
    cout<<"Reverse List:";
    display(head);

    return 0;
}
