#include<stdio.h>
#include<ctype.h>
int stack[100];
int top=-1;

void push(int x){
	top++;
	stack[top]=x;
}

int pop(){
	return stack[top--];
}
int main(){
	printf("enter expression");
	char exp[20];char *e;
	scanf("%s",&exp);
	e=exp;
	int n1,n2,n3;
	int num;
	while(*e!='\0'){
		
		if(isdigit(*e)){
			num = *e - 48;
			push(num);
		}
		else {n1=pop();
		n2=pop();
		
		switch(*e){
			case '+':  n3=n1+n2;break;
			case '-':  n3=n2-n1;break;
			case '*':  n3=n2*n1;break;
			case '/': n3=n2/n1;break;		}push(n3);
		
			
		} e++;
	}
	printf(" answe5 is %d",pop());return 0;
}
