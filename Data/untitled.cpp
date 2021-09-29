#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* right;
    struct node* left;
};
struct node* root=NULL;
int node=0;

void insert(int ele);
void inorder(struct node *t);
void preorder(struct node *t);
void postorder(struct node *t); 
void node_count(struct node *t);

int main()

{
    int ch,ele;
    
    while(1)
    {
        printf("\n\n1.Insert\n2.preorder\n3.inorder\n4.postorder\n5.node_count\n6.Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1 : printf("Enter node data : ");
            		 scanf("%d",&ele);
            		 insert(ele);
                     break;

             case 2 : preorder(root);
           			  break; 

           	 case 3 : inorder(root);
           			  break;   
           			   
             case 4 : postorder(root);
           			  break;

           	 case 5 : node_count(root);
           	 		  printf("Tree contain %d node\n",node );
           	 		  break;

             case 6 : exit(1);
        }
    }
}


void insert(int ele)
{
	struct node* temp,*p;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=ele;
	temp->left=NULL;
	temp->right=NULL;

	if(root==NULL)
	{
		root=temp;
	}

	else
	{
		struct node* curr;

		curr=root;

		while(curr)
		{
			p=curr;

			if(temp->data > curr->data)
			{
				curr=curr->right;
			}

			else
			{
				curr=curr->left;
			}
		}


		if(temp->data > p->data)
		{
			p->right=temp;
		}

		else
		{
			p->left=temp;
		}
	}
	
}


void inorder(struct node *t)
{

	 if(root == NULL)
    {
        printf("No elements in a tree to display");
        return;
    }
    if(t->left != NULL)    
        inorder(t->left);
    printf("%d -> ", t->data);
    if(t->right != NULL)    
        inorder(t->right);
   
}
 
void preorder(struct node *t)
{

	 if(root == NULL)
    {
        printf("No elements in a tree to display");
        return;
    }
    printf("%d -> ", t->data);

    if(t->left != NULL)    
        inorder(t->left);
    
    if(t->right != NULL)    
        inorder(t->right);
   
}

void postorder(struct node *t)
{

	 if(root == NULL)
    {
        printf("No elements in a tree to display");
        return;
    }
    if(t->left != NULL)    
        inorder(t->left);
    
    if(t->right != NULL)    
        inorder(t->right);

    printf("%d -> ", t->data);
   
} 


void node_count(struct node *t)
{
	
	if(t!=NULL)
	{
		node++;
		node_count(t->left);
	}

	if(t!=NULL)
	{
		node++;
		node_count(t->right);
	}

	
}










