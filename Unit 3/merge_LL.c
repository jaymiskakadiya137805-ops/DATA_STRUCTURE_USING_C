#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void merge(struct node *start1, struct node *start2)
{
    struct node *ptr;

    ptr = start1;

    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    ptr->next = start2;

    printf("\nMerged Linked List: ");

    ptr = start1;

    while(ptr != NULL)
    {
        printf("%d", ptr->data);
        ptr = ptr->next;
    }
}

void main()
{
    struct node *start1 = NULL, *start2 = NULL;
    struct node *newnode, *ptr;
    int i,n;

    // First Linked List
    printf("Enter number of nodes in List 1: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if(start1 == NULL)
        {
            start1 = newnode;
        }
        else
        {
            ptr = start1;

            while(ptr->next != NULL)
            {
                ptr = ptr->next;
            }

            ptr->next = newnode;
        }
    }

    // Second Linked List
    printf("\nEnter number of nodes in List 2: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if(start2 == NULL)
        {
            start2 = newnode;
        }
        else
        {
            ptr = start2;

            while(ptr->next != NULL)
            {
                ptr = ptr->next;
            }

            ptr->next = newnode;
        }
    }


    merge(start1, start2);

    getch();
}
