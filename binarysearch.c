#include<stdio.h>

int main(){
	int n,i;
	int array[20];
	printf("enter no of elemnt");
	scanf("%d",&n);
	printf("enter elemnetrs in sorted order");
	for(i=0;i<n;i++){
	
	scanf("%d",&array[i]);
	}int mid,s;
	printf("enetr element to search");
	scanf("%d",&s);
	int first=0,last=n-1;

	while(first<=last){
			mid=(first+last)/2;
		if(s==array[mid]){
			printf("element is %d found at %d",s,mid);break;
		}else if(s>array[mid]){
			first=mid+1;
			
		}else{
			last=mid-1;
		}
	}
	if(first>last){
		printf("lol not there");
	}
	
}
