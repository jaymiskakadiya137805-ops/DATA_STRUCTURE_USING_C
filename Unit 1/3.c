//Create arrays A , B and C of size 3, perform C = A + B .
#include<stdio.h>
#include<conio.h>

void main()
{
    int A[3],B[3],C[3];
    int i;

    // Input values for array A
    printf("Enter 3 integers for array A:\n");
    for(i = 0; i < 3; i++) {
        scanf("%d", &A[i]);
    }

   // Input values for array B
   printf("Enter 3 integers for array B :\n");
   for(i=0;i<3;i++){
    scanf("%d",&B[i]);
   }

    // Perform C = A + B
    for(i = 0; i < 3; i++) {
        C[i] = A[i] + B[i];
    }

    // Display array C
    printf("Resultant array C (A + B):\n");
    for(i = 0; i < 3; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    getch();
}
