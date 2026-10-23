#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
} *start = NULL;

void insert_beginning() {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter Value: ");
    scanf("%d", &newnode->data);
    newnode->next = start;
    start = newnode;
}

void insert_before() {
    int val;
    printf("Enter the node value before which to insert: ");
    scanf("%d", &val);

    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }

    if (start->data == val) {
        insert_beginning();
        return;
    }

    struct node *ptr = start, *prev = NULL;
    while (ptr != NULL && ptr->data != val) {
        prev = ptr;
        ptr = ptr->next;
    }

    if (ptr == NULL) {
        printf("Node with value %d not found.\n", val);
        return;
    }

    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter Value: ");
    scanf("%d", &newnode->data);

    newnode->next = ptr;
    prev->next = newnode;
}

void insert_after() {
    int val;
    printf("Enter the node value after which to insert: ");
    scanf("%d", &val);

    struct node *ptr = start;
    while (ptr != NULL && ptr->data != val) {
        ptr = ptr->next;
    }

    if (ptr == NULL) {
        printf("Node with value %d not found.\n", val);
        return;
    }

    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter Value: ");
    scanf("%d", &newnode->data);

    newnode->next = ptr->next;
    ptr->next = newnode;
}

void insert_last() {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter Value: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if (start == NULL) {
        start = newnode;
    } else {
        struct node *ptr = start;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = newnode;
    }
}

void delete_first() {
    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct node *ptr = start;
    start = start->next;
    free(ptr);
}

void delete_last() {
    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }
    if (start->next == NULL) {
        free(start);
        start = NULL;
        return;
    }
    struct node *ptr = start, *prev = NULL;
    while (ptr->next != NULL) {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = NULL;
    free(ptr);
}


void delete_before_node() {
    int val;
    printf("Enter the node value before which to delete: ");
    scanf("%d", &val);

    if (start == NULL || start->data == val) {
        printf("No node exists before %d.\n", val);
        return;
    }

    struct node *ptr = start, *prev = NULL, *preptr = NULL;
    while (ptr != NULL && ptr->data != val) {
        preptr = prev;
        prev = ptr;
        ptr = ptr->next;
    }

    if (ptr == NULL) {
        printf("Node with value %d not found.\n", val);
        return;
    }

    if (preptr == NULL) { // delete first node
        delete_first();
    } else {
        preptr->next = ptr;
        free(prev);
    }
}

void display() {
    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct node *ptr = start;
    while (ptr != NULL) {
        printf(" %d", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void main() {
    int ch;
    while (1) {
        printf("\n--- MENU ---");
        printf("\n1. Insert at Beginning");
        printf("\n2. Insert Before");
        printf("\n3. Insert After");
        printf("\n4. Insert at End");
        printf("\n5. Delete First");
        printf("\n6. Delete Before Node");
        printf("\n7. Delete Last");
        printf("\n8. Display");
        printf("\n9. EXIT");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                insert_beginning();
                break;

            case 2:
                 insert_before();
                 break;

            case 3:
                 insert_after();
                  break;

            case 4:
                 insert_last();
                  break;

            case 5:
                 delete_first();
                  break;

            case 6:
                 delete_before_node();
                  break;

            case 7:
                 delete_last();
                  break;

            case 8:
                 display();
                  break;

            case 9:
                 exit(0);

            default: printf("Wrong Choice\n");
        }
    }
    getch();
}
