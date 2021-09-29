//*Stack implementation using static array.
#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5
int stack[CAPACITY],top=-1;
void push(int);
int pop(void);
int isFull(void);
int isEmpty(void);
void peek(void);
void traverse(void);
int main()
{
	int ch,item;
	while(1)
	{
		printf("\n1.Push \n");
		printf("2.Pop \n");
		printf("3.Peek \n");
		printf("4.Traverse \n");
		printf("5.Quit \n");
		
		printf("\nEnter your choice :: ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1 :   printf("Enter element :: ");
			           scanf("%d",&item);
			           push(item);
			           break;
			           
			case 2 :   item=pop(); //collect iteam
			           if(item==0)
			           {
			           	    printf("stack is underflow\n");
					   }
					   else
					   {
					        printf("popped item : %d\n",item);	
					   }
					   break;
					   
			case 3 : peek();
			         break;
			           
			case 4 : traverse();
			          break;
			          
			case 5 : exit(0);
			default : printf("Invalid input\n\n");	
		}
	}
}
 
 
 
 
void push(int ele)
{
	if(isFull() )
	{
		printf("stack is overflow\n");
	}
	else
	{
	top++;                     //-1 to 0 position
	stack[top]=ele;	
	printf("%d pushed \n",ele);
	}
}
	
int isFull()
{
		if(top==CAPACITY-1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
}



	
int pop()
{
	if(isEmpty() )
	{
		return 0;
	}
	else
	{
		return stack[top--];
	}
	
}	

int isEmpty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}





void peek()
{
	if(isEmpty() )
	{
		printf("Stack is empty \n");
	}
	else
	{
		printf("Peek element : %d \n",stack[top]);
	}
}






void traverse()
{
	if(isEmpty() )
	{
		printf("Stack is empty \n");
	}
	else
	{
		int i;
		printf("Stack element are :: \n");
		for(i=0;i<=top;i++)
		{
			printf("%d \n",stack[i]);
		}
}
	}


