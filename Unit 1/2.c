// Create an array of size 10 , input values and display sum and average of array.
#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10],i,sum;
    float avg;
    printf("Enter 10 values :\n ");

    sum=0;
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/10.0; // here we have to take 10.0 otherwise it will be consider as int remember this thing.

    printf("Sum = %d\n",sum);
    printf("Average = %f\n",avg);
    getch();
}
