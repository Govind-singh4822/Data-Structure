// Queue implementation using static array . 
#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5
int queue[CAPACITY];
int rear=0,front=0;
void insert(void);
void delete(void);
void traverse(void);
int main()
{
	int ch;
	while(1)
	{
		printf("\nQueue implementation using static array \n");
 	    printf("1.Insert\n");
	    printf("2.Delete\n");
	    printf("3.Traverse\n");
	    printf("4.exit\n");
	    
	    printf("Enter your choice :: ");
	    scanf("%d",&ch);
	    
	    switch(ch)
	    {
	    	case 1 : insert();
	    	         break;
	    		    	
	    	case 2 : delete();
	    	         break;
	    	
	    	case 3 : traverse();
	    	         break;
	    	         
	    	case 4 : exit(1);         
		}
} 
}


void insert()
{
	if(CAPACITY==rear)
	{
		printf("Queue is FULL \n");
	}
	
	else
	{
		int ele;
	    printf("Enter element :: ");
	    scanf("%d",&ele);
	    queue[rear]=ele;
	    rear++;
	}
}

void delete()
{
	if(front==rear)
	{
		printf("Queue is full\n");
	}
	
	else
	{
		int i;
		printf("Delelted elemnt is %d\n",queue[front]);
		for(i=0;i<rear-1;i++)
		{
			queue[i]=queue[i+1];
		}
		rear--;
	}
}




void traverse()
{
	if(front==rear)
	{
		printf("Queue is full\n");
	}
	
	else
	{
		int i;
		printf("\nQueue element are :: \n");
		for(i=front;i<rear-1;i++)
		{
			printf("%d\n",queue[i]);
		}
	}
}

