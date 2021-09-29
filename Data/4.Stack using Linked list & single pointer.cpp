#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;  // data type filed 
	struct node* link; // linked field
}nodetype;

nodetype* push(nodetype*,int);
nodetype* pop(nodetype*);
void display(nodetype*);
int main()
{
	nodetype *top=NULL;
	int num,ch;	
	
	
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
				case 1 :   scanf("%d",&num);
		                   top=push(top,num);
				           break;
				
				case 2 :   if(top!=NULL)
  		                         top=pop(top);
  		   
  		                   else
  		                         printf("stack is Empty");
				           break;
				
				case 3 : 	if(top!=NULL)
		                           display(top);
                        	else
	                               printf("stack is empty\n");
				            break;
				          
			    case 4: exit(1);
			    
				default : printf("Invalid enter \n");         
			}
	}
}
	

  

nodetype* push(nodetype*tp,int nm)
{
	nodetype*p;
	p=(nodetype*)malloc(sizeof(nodetype*));
	
	if(p==NULL)
	{
		printf("no enough memopry");
	}
	
	else
	p->data=nm;
	p->link=tp;
	tp=p;
	return(tp);
}



nodetype* pop(nodetype* tp)
{
	nodetype* temp;
	temp=tp;
	printf("Element is popped is %d",tp->data);
	tp=tp->link;
	free(temp);
	return(tp);
}


void display(nodetype *tp)
{
	while(tp!=NULL)
	{
		printf("%d\t",tp->data);
		tp=tp->link;
	}
}


