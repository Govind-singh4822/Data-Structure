//Double linked list .
#include<stdio.h>
#include<stdlib.h>
void append(void);
void addatbegin(void);
void addatafter(void);
int length(void);
void display(void);
void delet(void);
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node* root=NULL;
int main()
{
	int ch,len;
	while(1)
	{
 	  printf("\nDouble linked list opperation\n");
	  printf("1.Append\n");
	  printf("2.Addatbegin\n");
	  printf("3.Addatafter\n");
	  printf("4.Length\n");
	  printf("5.Display\n");
	  printf("6.Delete\n");
	  printf("7.Exit\n");
	
	  printf("Enter your choice :: ");
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
		            printf("Length is %d\n",len);       
					break; 
					
		   case 5 : display();		 
					break; 
					      
		   case 6 : delet();
		            break;		      
		   
		   case 7 : exit(1);
		            break;
		            
		   default : printf("Invalid location\n");         
	    }
   }
}

void append()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter node data :: ");
	scanf("%d",&temp->data);
	temp->left=NULL;
	temp->right=NULL;
	
	if(root==NULL)
	{
		root=temp;
	}
	
	else
	{
		struct node* p;
		p=root;
		
		while(p->right!=NULL)
		{
			p=p->right;
		}
		p->right=temp;
		temp->left=p;
	}
}



void addatbegin()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter node data :: ");
	scanf("%d",&temp->data);
	temp->left=NULL;
	temp->right=NULL;
	
	if(root==NULL)
	{
		root=temp;
	}
	
	else
	{
		temp->right=root;
		root->left=temp;
		root=temp;
	}
}


int length()
{
	struct node* temp=root;
	int count=0;
	
	while(temp!=NULL)
	{
		count++;
		temp=temp->right;
	}
	return count;
	
}



void display()
{
	struct node* temp=root;
	
	if(temp==NULL)
	{
		printf("List is empty");
	}
	
	else
	{
		while(temp!=NULL)
		{
			printf("%d   ",temp->data);
			temp=temp->right;
		}
		printf("\n");
	}
}



void addatafter()
{
	struct node* temp,*p;
	int loc,i=1,len;
	printf("Enter location to add :: ");
	scanf("%d",&loc);
	
	len=length();
	if(loc > len )
	{
		printf("Invalid locatio\n");
		printf("List contain %d element",len);
	}
	
	else
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter node data :: ");
	scanf("%d",&temp->data);
	temp->left=NULL;
	temp->right=NULL;
	p=root;
	
	while(i<loc)
	{
	p=p->right;
	i++;
	}
	temp->right=p->right;
	p->right->left=temp;
	temp->left=p;
	p->right=temp;
}


void delet()
{
	struct node* temp;
	int loc;
	printf("Enter location to delete :: ");
	scanf("%d",&loc);
	
	if(loc > length() )
	{
		printf("Invalid location\n");
	}
	
	else
	if(loc==1)
	{
		temp=root;
		root=temp->right;
		temp->right=NULL;
		free(temp);
	}
	
	else
	{
		struct node* p=root,*q;
		int i=1;
		while(i<loc-1)
		{
			p=p->right;
			i++;
		}
		q=p->right;
		p->right=q->right;
		q->right=NULL;
		q->left=NULL;
		free(q);
		
	}
}


























