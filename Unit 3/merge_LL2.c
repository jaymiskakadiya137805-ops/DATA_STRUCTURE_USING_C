#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}*start1,*start2;
void LL_1()
{
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
}

void LL_2()
{

     struct node *newnode, *ptr;
     int i,n;

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

}
void merge()
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
      int ch;
        while (1) {
            printf("\n--- MENU ---");
            printf("\n1. Linked List 1:");
            printf("\n2. Linked List 2:");
            printf("\n3. MERGED LINKEDLIST:");
            printf("\n4. EXIT");
            printf("\nEnter choice: ");
            scanf("%d", &ch);

    switch (ch) {
            case 1:
                LL_1();
                break;

            case 2:
                LL_2();
                 break;

            case 3:
                merge();
                break;

            case 4:
                 exit(0);
                  break;

            default: printf("Wrong Choice\n");



                }
        }

        getch();
}

