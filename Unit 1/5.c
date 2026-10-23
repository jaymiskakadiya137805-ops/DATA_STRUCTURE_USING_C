// Find The Largest
#include<stdio.h>
#include<conio.h>
void  main(){
    int a[10],largest;
 // user will input 10 values
    printf("Enter 10 Values : ");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }

    //Assigning 0th index as largest iykyk!
    largest = a[0];

    //checking from 1 to 10 largest
    for (int i=1;i<10;i++){
        if(a[i]>largest)
        {
            largest = a[i];
        }
    }
    //now we will print largest
    printf("Largest Value : %d",largest);
    getch();

 }







