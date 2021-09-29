#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5
int stack[CAPACITY];
int top=-1;
void push(int);
void traverse(void);
void peek(void);
void pop(void);

int main()
{

    int ch,ele;

    while(1)
    {

        printf("\n\nStack implementation using static array \n");
        printf("1.Push\n2.Traverse\n3.Peek\n4.Pop\n5.exit");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1 : printf("Enter element : ");
                     scanf("%d",&ele);
                     push(ele);
                     break;

            case 2 : traverse();
                     break;

            case 3 : peek();
                     break;

            case 4 : pop();
                     break;

            case 5 : exit(1);

        }
    }
}


void push(int ele)
{

    if(top==CAPACITY -1)
    {
        printf("Stack is Full\n");

    }

    else
    {
        top++;
        stack[top]=ele;
        printf("%d is inserted\n",ele);

    }
}

void traverse()
{
    if(top==-1)
    {
        printf("Stack is empty");
    }

    else
    {
        for(int i=0;i<=top;i++)
        {
            printf("%d->",stack[i]);
        }

    }

}


void peek()
{

    if(top==-1)
    {
        printf("Stack is Empty");
    }
    else
    {
        printf("Peek element is %d ",stack[top]);

    }
}

void pop()
{
    if(top==-1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("%d is popped",stack[top--]);
    }

}






