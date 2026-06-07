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
    struct node *ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
       
    }
    printf("\n");
}
// two pointer approach.......

struct node *removenthnode(struct node *head,int k){
    struct node *fast=head;
    struct node *slow=head;
    for(int i=0;i<k;i++){
        fast=fast->next;
    }
    
    if(fast==NULL){
        struct node *temp=head;
        head=head->next;
        free(temp);
    }
    while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    struct node *temp=slow->next;
    slow->next=slow->next->next;
    free(temp);
    return head;

    
}

int main(){
    struct node *head=NULL;
    int n,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        head=insert(head,x);

    }
    printf("Original list:");
    display(head);
    int k;
    scanf("%d",&k);
    head=removenthnode(head,k);
    display(head);
    return 0;
}
