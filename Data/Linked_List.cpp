#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
struct node* root=NULL;
void append();
void length(void);
void display(void);
void addatbegin(void);
void delet(void);

int main()
{
    int ch,len;

    while(1)
    {
        printf("\nSingle Liked List Operation\n");
        printf("1.Append\n2.Lenght\n3.Display\n4.Add at Begin\n5.Delete\n6.exit\n");
        printf("Enter your Choice : ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1 : append();
                     break;

            case 2 : length();
                     break;

            case 3 : display();
                     break;

            case 4 : addatbegin();
                     break;     

            case 5 : delet();
                     break;                     

            case 6 : exit(1);
        }
    }

}


void append()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter node data : ");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL)
    {
        root=temp;
    }

    else
    {
        struct node *p;
        p=root;

        while(p->link!=NULL)
        {
            p=p->link;
        }

        p->link=temp;

    }
}

void length()
{
    struct node* temp;
    int count=0;
    temp=root;

    while(temp!=NULL)
    {
        count++;
        temp=temp->link;
    }
    printf("Length is %d\n",count);
}

void display()
{
    struct node* temp;
    temp=root;

    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->link;
    }
    printf("\n");
}

void addatbegin()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
     printf("\nEnter node data : ");
    scanf("%d",&temp->data);
    temp->link=NULL;

    if(root==NULL)
    {
        root=temp;
    }

    else
    {
        temp->link=root;
        root=temp;
    }
   
   
}


void delet()
{
	int len,loc;
	printf("\nEnter location you want delete : ");
	scanf("%d",&loc);

	if(loc==1)
    {
        struct node* temp;
        temp=root;
        root=temp->link;
        temp->link=NULL;
        free(temp);
    }

    else
    {
        struct node* p=root,*q;
        int i=1;

        while(i < loc-1)
        {
            p=p->link;
            i++;
        }
        q=p->link;
        p->link=q->link;
        q->link=NULL;
        free(q);

        
    }

	

}















