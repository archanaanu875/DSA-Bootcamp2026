#include<stdio.h>
#define max 100
int stack[max];
int top=-1;

void push(int val){
    // if(top==max-1){
    //     printf("Overflow");
    //     return 0;
    // }
    stack[++top]=val;
}

void display(){
    int sum=0;
    if(top==-1){
        printf("stack is an empty");
    }
    for(int i=top;i>=0;i--){
        sum+=stack[i];
    }
    printf("%d",sum);
}

int main(){
    int n,data;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&data);
        push(data);
    }
    display();
    return 0;
}

