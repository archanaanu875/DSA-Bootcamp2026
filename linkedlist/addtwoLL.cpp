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
 node *additiontwoLL(node *L1,  node *L2){
     node *dummynode=new node(-1);
     node *curr=dummynode;
     node *temp1=L1;
     node *temp2=L2;
    int carry=0;

    while(temp1!=NULL || temp2!=NULL){
        int sum=carry;
        if(temp1) sum+=temp1->data;
        if(temp2) sum+=temp2->data;
        node *newnode=new node(sum%10);
        
        carry=sum/10;

        curr->next=newnode;
        curr=curr->next;

        if(temp1) temp1=temp1->next;
        if(temp2) temp2=temp2->next;
    }
    if(carry){
        node *carrynode=new node(carry);
        curr->next=carrynode;
    }
    return dummynode->next;
}
void display(node *head){
    node *ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<"NULL\n";
}


int main(){
    node *head1=NULL;
    node *head2=NULL;
    int n1,n2;
    int x,y;
    cin>>n1>>n2;
    cout<<"first list";
    for(int i=0;i<n1;i++){
        cin>>x;
        head1=insert(head1,x);
    }
    cout<<"second list";
    for(int i=0;i<n2;i++){
        cin>>y;
        head2=insert(head2,y);
    }

    cout<<"first list";
    display(head1);

    cout<<"second list";
    display(head2);
    
    node *result=additiontwoLL(head1,head2);
    cout<<"sum of two linkedlist";
    display(result);
    return 0;

}