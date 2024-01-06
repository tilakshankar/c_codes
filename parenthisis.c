#include <stdio.h>
#include<ctype.h>

int stack[100];
int top=-1;
void push(char e){
	stack[++top]=1;
}
int pop(){
	return stack[top];
}
int main(){
	char exp[100],*e;
	printf("eneter expression");
	scanf("%s",&exp);
	e=exp;
	int i,x;
	
  while(*e != '\0')        
    {
        if(isalnum(*e))
           push(*e);
        else if(*e == '(')
            push(*e);
        else if(*e == ')')
        {
            while((x = pop()) != '('){if(top==-1){
             printf("not balanced 2");
             break;
			}}
                
        }
        else
        {
        	if(top==-1){
        		printf("balancef3");
			}else{
				printf("nb3");
			}
		}
        e++;
    }
    
		if(top==-1){
        		printf("balancef last");
			}
	
}
