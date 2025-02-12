#include<stdio.h>
#include<stdlib.h>
struct node {
	int data1;
	struct node *list;
};
struct node *createnode(int data)	
{
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data1= data;
	newnode->list = NULL;
	
 return newnode;
  
	
}

struct node *initilization(struct node *head,int data)
{
  struct node *newnode = createnode(data);
  newnode->list=head;
  return newnode;
  
  
  }
struct node *add_last(struct node* head1,int date){
 struct node *newnode = createnode(date);
 if(head1==NULL)
	{
	return newnode;
	}
	struct node* temp = head1;
	while(temp->list!=NULL){
		temp = temp->list;
	}
	temp->list = newnode;
 	return head1;
 }
 
 void printList(struct Node* head) {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data1);
        temp = temp->list;
    }
    printf("\n");
}
  
  

int main()
{
	struct node *head = NULL;
	struct node *head1= NULL;
	int data, size,date;
	//scanf("%d ", &size);
	int i;
	do {
        printf("\nMenu:\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Print list\n");
        printf("4 or more. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &size);
	
	  switch (size) {
            case 1:{
                printf("Enter data: ");
                scanf("%d", &data);
                head = initilization(head,data);
                printf("entered data: ");
                printList(head);
                break;
                }
            case 2:{
                printf("Enter data: ");
                scanf("%d", &date);
                head1 = add_last(head1,date);
                printList(head1);
                break;
                }
            }
	}
	while(size <4);


}

