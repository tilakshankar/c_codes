#include <stdio.h> 
#include <conio.h> 
#include <malloc.h> 

struct node 
{ 
int data; 
struct node *next; 
}; 
struct node *start = NULL; 
struct node *create_cll(struct node *); 
struct node *display(struct node *); 
struct node *insert_beg(struct node *); 
struct node *delete_after(struct node *); 

int main() 
{ 
int option; 
      printf("\n\n      MAIN MENU      "); 
      printf("\n 1: Create a list"); 
      printf("\n 2: Display the list"); 
      printf("\n 3: Add a node at the beginning"); 
      printf("\n 4: Add a node at the end"); 
      printf("\n 5: Delete a node after a given node"); 
      printf("\n 6: Delete the entire list"); 
      printf("\n 7: EXIT"); 
do
{	
      printf("\n\n Enter your option : "); 
      scanf("%d", &option); 
      switch(option) 
      { 
            case 1: start = create_cll(start); 
            printf("\n CIRCULAR LINKED LIST CREATED"); 
            break; 
            case 2: start = display(start); 
            break; 
            case 3: start = insert_beg(start); 
            break; 
            case 4: start = insert_end(start); 
            break; 
            case 5: start = delete_after(start); 
            break; 
      } 
} 
while(option !=9);
getch(); 
  return 0; 
} 

struct node *create_cll(struct node *start) 
{ 
struct node *new_node; 
int num; 
printf("\n Enter the data : "); 
scanf("%d", &num); 
new_node = (struct node*)malloc(sizeof(struct node)); 
new_node -> data = num; 
if(start == NULL) 
{
new_node -> next = new_node; 
start = new_node; 

 
}
return start; 
} 

struct node *display(struct node *start) 
{ 
struct node *ptr; 
ptr=start; 
do{ 
printf("\t %d", ptr -> data); 
ptr = ptr -> next; 
} while(ptr -> next != start) 

return start; 
} 

struct node *insert_beg(struct node *start) 
{ 
struct node *new_node, *ptr; 
int num; 
printf("\n Enter the data : "); 
scanf("%d", &num); 
new_node = (struct node *)malloc(sizeof(struct node)); 
new_node -> data = num; 
ptr = start; 
do{
ptr = ptr -> next; }while(ptr -> next != start) ;
ptr -> next = new_node; 
new_node -> next = start; 
start = new_node; 
return start; 
} 


struct node *delete_after(struct node *start) 
{ 
struct node *ptr, *preptr; 
ptr=start;
preptr=start;
ptr=ptr->next;
start=ptr->next;
printf("frred element is %d",preptr->data);
free(preptr);
return start;

} 
