// Create an array of size 10 , input values and print the array and search an element in the array.

#include<stdio.h>


void main()
{
    int a[10], i, search,  found = 0;
    printf("Enter 10 values :");
    for(i=0;i<10;i++)
    {
         scanf("%d",&a[i]);

    }

    printf("10 values are :\n");
    for(i=0;i<10;i++)
    {
         printf("%d\n",a[i]);

    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    for(i = 0; i < 10; i++) {
        if(a[i] == search)
            {
            printf("Element %d found at position %d.\n", search, i+1);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Element %d not found in the array.\n", search);
    }

   getch();

}
