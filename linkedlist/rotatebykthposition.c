#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *insert(struct node *head,int val){
    struct node *newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
        return head;
    }
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    return head;
}
void display(struct node *head){
    while(head!=NULL){
        printf("%d ",head->data);
        head=head->next;
    }
}

// two pointer approach........

struct node *rotate(struct node *head,int k){
    if(head==NULL || head->next==NULL ||k==0){
        return head;
    }
    struct node *tail=head;
    int n=1;
    while(tail->next!=NULL){
        tail=tail->next;
        n++;
    }
    k=k%n;
    if(k==0){
        return head;
    }
    tail->next=head;
    int step=n-k-1;

    struct node *newtail=head;
    for(int i=0;i<step;i++){
        newtail=newtail->next;
    }
    struct node *newhead=newtail->next;
    newtail->next=NULL;
    return newhead;
}

int main(){
    struct node *head=NULL;
    int n,k;
    int data;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&data);
        head=insert(head,data);
    }
    printf("Original list:");
    display(head);
    scanf("%d",&k);
    head=rotate(head,k);
    display(head);
    return 0;
}
