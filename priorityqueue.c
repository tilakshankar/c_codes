#include<stdio.h>
#define max 5
int queue[max];
int front=-1,rear=-1;
struct pq{
	int data;
	int pri;
}pq[5];

void insert(){
	if(rear==max-1){
		printf("full");
		
	}else if(front==-1&&rear==-1){int temp,i;
	front=0;rear=0;int n;
		printf("enter  no of elements");
		scanf("%d",&n);
		for(i=0;i<n;i++){
		printf("enter data and priority");
			scanf("%d",&pq[rear].data);
			scanf("%d",&pq[rear].pri);
			rear++;} priority();
	}
		
	
	else{int i,n1;	printf("enter  no of elements");
		scanf("%d",&n1);
		for(i=0;i<n1;i++){
		printf("enter data and priority");
			scanf("%d",&pq[rear].data);
			scanf("%d",&pq[rear].pri);
			rear++;} priority();
		
	}
	
}
 
 void display(){int i;
 	for(i=front+1;i<=rear;i++){
 		printf("%d,",pq[i].data);
	 }
 }



priority(){int i,j;struct pq temp;
	for(i=0;i<rear;i++){
		for(j=i+1;j<=rear;j++){
			if(pq[i].pri>pq[j].pri){
				temp=pq[i];
				pq[i]=pq[j];
				pq[j]=temp;
				
			}
		}
		
		//bubble sort
	}
	
}
void del(){if(front==-1 && rear==-1){
	printf("empty");
}else{
	front++;
}
	
}

int main(){int c=9;
while(c!=0)	{printf("enter data\n1.insert\n2.delete\n3.display");
	scanf("%d",&c);
	
	switch(c){
		
		case 1: insert();break;
		case 2: del();break;
		case 3: display();break;
}
	}return 0;
	
}
