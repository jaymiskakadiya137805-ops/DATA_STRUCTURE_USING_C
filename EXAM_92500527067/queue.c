//SET-2
//write a program with following operation queue insert delete and display and exit.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 10

int queue[max];

int front=-1,rear=-1;

void insert()
{
    int val;
    if(rear==max-1)
    {
        printf("Queue is full");
    }
    else
    {
        printf("Enter the value:");
        scanf("%d",&val);
        if(front==-1)
        {
            front=0;
        }
        rear++;
        queue[rear]=val;
    }
}
void delete()
{
    if(front==-1 || front>rear)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("Deleted value is %d",queue[front]);
        front++;
        if(front>rear)
        {
            front=-1;
            rear=-1;
        }
    }
}
void display()
{
    int i;
    if(front==-1)
    {
        printf("Queue is empty");
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d ",queue[i]);
        }
    }
}
void main()
{
    int ch;
    while(1)
    {
        printf("\n1.Insert \n2.Delete \n3.Display \n4.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    insert();
                    break;

            case 2:
                    delete();
                    break;

            case 3:
                    display();
                     break;

            case 4:
                    exit(0);

            default: printf("Wrong choice");
        }
    }
}
