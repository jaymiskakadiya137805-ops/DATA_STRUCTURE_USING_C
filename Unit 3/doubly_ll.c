 #include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
} *start = NULL , *newnode;

void insert_start()
{
    newnode = (struct node*) malloc(sizeof(struct node));
    printf("Enter Value : ");
    scanf("%d", &newnode->data);
    newnode->prev = NULL;
    newnode->next = NULL;

    if (start == NULL)
    {
        start = newnode;
    }
    else
    {
        newnode->next = start;
        start->prev = newnode;
        start = newnode;
    }
}
void insert_before()
{
    struct node *ptr, *preptr;
    int val;
    printf("Enter value before which to insert: ");
    scanf("%d", &val);
    if(start == NULL) {
        printf("List is empty\n");
        return;
    }
    if(start->data == val) {
        insert_start();
        return;
    }
    preptr = start;
    while(preptr != NULL && preptr->data != val) {
        preptr = preptr->next;
    }
    if(preptr == NULL) {
        printf("Node not found\n");
        return;
    }
    ptr = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &ptr->data);
    ptr->next = preptr;
    ptr->prev = preptr->prev;
    preptr->prev->next = ptr;
    preptr->prev = ptr;
}
void insert_after()
{
    struct node *ptr, *preptr;
    int val;
    printf("Enter value after which to insert: ");
    scanf("%d", &val);
    preptr = start;
    while(preptr != NULL && preptr->data != val) {
        preptr = preptr->next;
    }
    if(preptr == NULL) {
        printf("Node not found\n");
        return;
    }
    ptr = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &ptr->data);
    ptr->next = preptr->next;
    ptr->prev = preptr;
    if(preptr->next != NULL) {
        preptr->next->prev = ptr;
    }
    preptr->next = ptr;
}
void insert_end()
{
    struct node *ptr;
    newnode = (struct node*) malloc(sizeof(struct node));
    printf("Enter Value :");
    scanf("%d", &newnode->data);
    newnode->next=NULL;
     if (start == NULL)
        {
        start = newnode;
        }
    else
        {
    ptr = start;

    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=newnode;
    newnode->prev=ptr;
        }
}

void display()
{
    struct node *ptr;
    if (start == NULL)
    {
        printf("List is empty!\n");
        return;
    }
    printf("List elements: ");
    for (ptr = start; ptr != NULL; ptr = ptr->next) {
        printf("%d ", ptr->data);
    }
    printf("\n");
}

void main()
{
    int ch;
    while (1)
        {
        printf("\n-----Menu-----");
        printf("\n 1. Insert at Beginning ");
        printf("\n 2. Insert Beofre ");
        printf("\n 3. Insert After ");
        printf("\n 4. Insert at End ");
        printf("\n 5. Display");
        printf("\n 6. Exit");

        printf("\n Enter Your Choice : ");
        scanf("%d", &ch);

        switch (ch)
        {

        case 1:
            insert_start();
            break;

        case 2:
            insert_before();
            break;

        case 3:
            insert_after();
            break;

        case 4:
            insert_end();
            break;

        case 5:
            display();
            break;

        case 6:
            exit(0);

        default:
            printf("Invalid Choice !!!\n");
        }
    }
    getch();
}

