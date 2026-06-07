#include<stdio.h>
#define max 100
char stack[max];
int top=-1;

void push(char ch){
    if(top==max-1){
        printf("Overflow");
        
    }
    stack[++top]=ch;
}
char pop(){
    if(top==-1){
        printf("Underflow");
        return '\0';
    }

    return stack[top--];
}




void peek(){
    if(top==-1){
        printf("stack is an empty");
        
    }
    else{
        printf("peek:%c",stack[top]);
    }
}

void display(){
    if(top==-1){
        printf("stack is an empty");
        
    }
    for(int i=top;i>=0;i--){
        printf("%c",stack[i]);
    }
}

int main(){
    int n;
    int choice;
    char data;
   
    while(1){
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Peek");
        printf("\n4. display");
        printf("\n5. Exit");
         printf("enter the choice\n");
        scanf("%d",&choice);


        switch(choice){
            case 1:
                printf("enter the number of character\n");
                scanf("%d",&n);
                for(int i=0;i<n;i++){
                    scanf(" %c",&data);
                    push(data);
                }
                break;

            case 2:
                printf("Retrive character:%c",pop());
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;
            case 5:
                return 0;
            
            deflaut:
                printf("INVALID CHOICES");
        }
    }
    
}

