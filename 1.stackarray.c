#include<stdio.h>
#define max 5
int stack[max];
int top=-1;
 void push(){int x;
    if(top==max-1){
        printf("overflow");

    }else{printf("enter data");
    scanf("%d",&x);
        top++;
        stack[top]=x;
    }
 }

 void pop(){
    if(top==-1){
        printf("underflow");

    }else{
        int x=stack[top];
        top--;
        printf("%d popped",x);

    } }


    void peek(){
        if(top==-1){
            printf("underflow");

        }else{
            printf("%d is at top of stack",stack[top]);
        }
    }


void display(){int i;
  

        for(i=top;i>=0;i--){
            printf("%d  ",stack[i]);
        }
    
}


int main(){
int choice;
  while(choice!=0){  printf("Enter Choice\n1.pusp\n2.pop\n3.display\n4.peek");
    scanf("%d",&choice);
    switch(choice){
        case 1: push();break;
        case 2: pop();break;
        case 3: display();break;
        case 4: peek();break;
    }}
    return 0;

}