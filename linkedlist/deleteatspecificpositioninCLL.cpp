// delete at specific position in circular LL
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
    do{
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }while(ptr!=head);
    cout<<"head\n";
}

node *deletespecificposition(node *head,int pos){
    node *temp1,*temp2;
    if(head==NULL){
            cout<<"Limkedlist is an empty";
            return head;
        }
    if(pos==1){
        if(head->next==head){
            delete head;
            return NULL;
        }
        temp1=head;
        temp2=head;
        while(temp2->next!=head){
            temp2=temp2->next;
        }
        head=head->next;
        temp2->next=head;
        delete temp1;
        return head;
    }
    
    else{
        int i=1;
        temp1=head;
        temp2=NULL;
        while(i<pos && temp1->next!=head){
            temp2=temp1;
            temp1=temp1->next;
            i++;
        }

        if(i!=pos){
            cout<<"INVALID POSITION";
            return 0;
        }
        temp2->next=temp1->next;
        delete temp1;
        return head;

    }
}

int main(){
    node *head=NULL;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        head=insert(head,x);
    }
    cout<<"Original lists";
    display(head);
    int pos;
    cin>>pos;
    cout<<"After the deletion specific position";
    head=deletespecificposition(head ,pos);
    display(head);
    return 0;
    
}