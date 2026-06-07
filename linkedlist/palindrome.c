
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
struct node *middle(struct node *head){
    struct node *slow=head;
    struct node *fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

struct node* reverse(struct node *head){
    struct node *curr=head;
    struct node *prev=NULL;
    struct node *next;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
    
}
int palindrome(struct node *head){
    if(head==NULL || head->next==NULL){
        return 1;
    }

    struct node *mid = middle(head);
    struct node *secondhalf = reverse(mid);

    
    // compare the 1st and 2nd half
    struct node *firsthalf=head;
    struct node *temp=secondhalf;
    while(temp!=NULL){
    if(firsthalf->data!=temp->data){
        // printf("Not palindrome");
        return 0;
    }
    firsthalf=firsthalf->next;
    temp=temp->next;
    }
    return 1;
    // printf("Palindrome");
}
int main(){
    struct node *head=NULL;
    int n,data;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&data);
        head=insert(head,data);
    }
    // head=palindrome(head);
    if(palindrome(head)){
        printf("Linkedlist is palindrome");
    }
    else{
        printf("NOT");
    }
    return 0;
    
}
