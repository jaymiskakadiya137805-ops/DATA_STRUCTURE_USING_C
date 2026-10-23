// Print Address through pointer.
#include<stdio.h>
#include<conio.h>

void main()
{

    int a=10;
    int*p;

    p=&a;
    printf("Address of a is : %d\n ",p);
    printf("Value of a is %d",*p);

    getch();
}
