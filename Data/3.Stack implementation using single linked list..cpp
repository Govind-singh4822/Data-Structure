//Stack implementation using single linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;  // data type filed 
	struct node* link; // linked field
};
struct node* top = NULL;
void push(void);
void pop(void);
void traverse(void);

int main()
{
	int ch;
	while(1)
	{
			printf("\nStack implementation using single linked list \n");
			printf("1.Push\n");    // Insertion
			printf("2.Pop\n");     //Delete
		    printf("3.Traverse\n");  //Display
			printf("4.Quiet\n");
			
			printf("Enter your choice : ");
			scanf("%d",&ch);
			
			switch(ch)
			{
				case 1 : push();  
				         break;
				
				case 2 : pop();
				         break;
				
				case 3 : traverse(); 
				         break;
				         
			    case 4: exit(1);
			    
				default : printf("Invalid enter \n");         
			}
	}
	
}



void push()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	
	printf("Enter the node data : ");
	scanf("%d",&temp->data);
	
	temp->link=top;
	top=temp;
}


void pop()
{
	struct node* temp;
	if(top==NULL)
	{
		printf("NO element\n");
	}
	
	temp=top;
	printf("\nElement %d is POP\n",temp->data);
	top=top->link;
	temp->link=NULL;
	free(temp);
}



void traverse()
{
	struct node* temp;
	if(top==NULL)
	{
		printf("Stack is full\n");
	}
	
	else
	
	temp=top;
	printf("\nStack element are :: \n");
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->link;
	}
}

