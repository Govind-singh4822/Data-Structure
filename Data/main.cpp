#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node* left;
    struct node* right;
}nodetype;
nodetype* create(int n);
void insert(nodetype* root,nodetype* temp);
int main()
{
    nodetype* root=NULL,*temp;
    int ch,ele;
    while(1)
    {
        printf("1.Insert\n");
        printf("2.Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : printf("\nEnter element : ");
                scanf("%d",&ele);
                temp=create(ele);
                if(root==NULL)
                {
                    root=temp;
                }
                else
                {
                    insert(root,temp);
                    
                }
        }
    }
}

nodetype* create(int n)
{
    nodetype* temp;
    temp=(nodetype*)malloc(sizeof(nodetype));
    if(temp==NULL)
    {
        printf("No enough memory");
    }
    else
    {
        temp->data=n;
        temp->left=NULL;
        temp->left=NULL;
    }
    return temp;
}

void insert(nodetype* root,nodetype* temp)
{
    if(temp->data<root->data)
    {
        if(temp->left==NULL)
        {
            root->left=temp;
        }
        else
            insert(root->left,temp);
    }
    
    else
        if(temp->right==NULL)
        {
            root->right=temp;
        }
        else{
            insert(root->right,temp);
        }
    
}
