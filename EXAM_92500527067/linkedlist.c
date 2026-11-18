//leet code no.203
//remove linked list alemenets.

#include<stdio.h>
#include<conin.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head = NULL , *temp,*newnode;
    int n, i , t;
    printf("enter number of node: ");
    scanf("%d" ,&n );

    for (i = 0; i< n; i++)
    {
        newnode = malloc(sizeof(structnode));

        printf("Enter data:");
        scanf("%d",&newnode->data);

        newnode->next = head;
        head = newnode;
    }

}
