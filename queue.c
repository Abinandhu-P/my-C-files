#include<stdio.h>
#include<stdlib.h>

typedef struct node{
int data;
struct node *next;
} node;
node *front =NULL;
node *rear = NULL;
//node *temp ;

node *createnode(int data){
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data= data;
	newnode->next = NULL;
	return newnode;
	}
	


node *enqueue(node *head,int data)
{
 node *n = createnode(data);
   if(front ==NULL && rear == NULL)
   front=rear=n;
   else
   {
   	rear->next = n;
   	rear =n;
   }
}
void dequeue()
{
	if(front == NULL && rear == NULL)
	{
		printf("stack overflow\n");
		
	}
	else
	{
		node *temp = front ;
		front = front->next;
		if(front == NULL)
		 rear == NULL;
		 free(temp);
	}
}
void display()
{
	if(front ==NULL && rear == NULL )
	printf("the stack ius underflow\n");
	else {
	node *temp ;
	for(temp = front ; temp != NULL;temp= temp->next)
	{
	   printf("\t%d",temp->data);
	}
	}
}
void peek(){
	if(front !=NULL)
	printf("%d\n",front->data);
	else
	printf("NULL");
}
void rearprint(){
if(rear !=NULL)
	printf("%d\n",rear->data);
	else
	printf("NULL\n");
}
void isempty()
{
	if(front == NULL)
	printf("Yes the queue is empty\n");
	else 
		printf("No,the queue is not empty\n");
}

int main()
{
node *head = NULL;
int choice;
int value;
do{
	printf("\nqueue function using linkedlist \n");
	printf("enter 1. to enqueue node\n");
	printf("enter 2. to dequeue node\n");
	printf("enter 3. to print node\n");
	printf("enter 4. to print front node\n");
	printf("enter 5. to print rear node\n");
	printf("enter 6. to know if the queue is empty\n");
	scanf("%d",&choice);

switch (choice)
{
	case 1:{
 	printf("enter the data that entered in the node\n");
	scanf("%d",&value);
	head= enqueue(head,value);
	break;
	
	 }
	case 2:{
	  dequeue();
	  break;
	}
	case 3: {
	  display();
	  break;
	}
	 case 4:
	 peek();
	 break;
	 case 5 :
	 rearprint();
	 break;
	 case 6:
	 isempty();
	 break;
	 default :
	 printf("enter the correct choice\n");
}

}
while(choice <7);
}

