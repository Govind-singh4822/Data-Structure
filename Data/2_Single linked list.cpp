/*Single linked list */
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;  // data type filed 
	struct node* link; // linked field
};
struct node* root = NULL;
int len;
void append(void);
void addatbegin(void);
void addatafter(void);
int length(void);
void display(void);
void delet(void);
void reverselist(void);

int main()
{
	int ch;
	while(1)
	{
			printf("\nSingle Linked List Opearation : \n");
			printf("1.Append\n");
			printf("2.Addbegin\n");
			printf("3.Addafter\n");
			printf("4.Lenght\n");
			printf("5.Display\n");
			printf("6.Delete\n");
			printf("7.Reverse list\n");
			printf("8.Quiet\n");
			
			printf("Enter your choice : ");
			scanf("%d",&ch);
			
			switch(ch)
			{
				case 1 : append();
				         break;
				
				case 2 : addatbegin();
				         break;
				
				case 3 : addatafter();
						 break;
						  
				case 4 : len=length();
				         printf("Lenght is :: %d\n\n",len);
						 break;
						 
				
				case 5 : display(); 
				         break;
				         
				case 6 : delet();
				         break;
				         
				case 7 : reverselist();
				         break;   
				         
			    case 8 : exit(1);
			    
				default : printf("Invalid enter \n");         
			}
	}
	
}
 
 
 
void append()
{
	system("cls");
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter node data : ");
	scanf("%d",&temp->data);
	temp->link=NULL;
	
	if(root==NULL)  //list is empty
	{
		root=temp;
	}
	
	else
	{
		struct node* p;
		p=root;
		
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=temp;
	}
}




int length()
{
	int count=0;
	struct node* temp;
	temp=root;
	
	while(temp!=NULL)
	{
		count++;
		temp=temp->link;
	}
	return count;
}





void display()
{
	struct node* temp;
	temp=root;
	if(temp==NULL)
	{
		printf("List is empty\n\n");
	}
	
	else
	{
		while(temp!=NULL)
		{
			printf("%d-->",temp->data);
			temp=temp->link;
		}
		printf("\n\n");
	}
}





void addatbegin(void)
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter node data : ");
	scanf("%d",&temp->data);
	temp->link=NULL;
	
	if(root==NULL)  //list is empty
	{
		root=temp;
	}
	
	else
	{
		temp->link=root;
		root=temp;
	}
}





void addatafter(void)
{
	struct node* temp,*p;
	int loc,len,i=1;
	
	printf("Enter location : ");
	scanf("%d",&loc);
	
	if(loc > len )
	{
		printf("Invalid location \n");
		printf("Current last location is %d",len);
	}
	
	else
	struct node* p;
	
	p=root;
	while(i<loc)
	{
		p=p->link;
		i++;
	}
	
	temp=(struct node*)malloc(sizeof(struct node));
	temp->link = p->link;
	p->link=temp;
	
}



void delet(void)
{
	struct node* temp;
	int loc;
	printf("Enter loction  to delete :: ");
	scanf("%d",&loc);
	
	if( loc > length() )
	{
		printf("Invalid location"); 
	}
	
	else if(loc==1)
	{
		temp=root;
		root = temp->link;
		temp->link=NULL;
		free(temp);
	}
	
	else
	{
		struct node* p=root,*q;
		int i=1;
		
		while(i < loc - 1 )
		{
			p=p->link;
			i++;
		}
		q = p->link;
		p->link = q->link;
		q->link = NULL;
		free(q);
	}
}



void reverselist(void)
{
	int i,j,len,temp;
	len=length();
	i=0;
	j=len-1;
	struct node *p,*q;
    p=q=root;
	
	while(i<j)
	{
		int k=0;
		while(k<j)
		{
			q=q->link;
			k++;
		}
		temp=p->data;
		p->data=q->data;
		q->data=temp;
		i++;
		j--;
		p=p->link;
		q=root;
	}
}


