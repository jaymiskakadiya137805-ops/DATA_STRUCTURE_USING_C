// Create array A , B of size of 3 and C size of 6 then merge A and B.
#include<stdio.h>
#include<conio.h>

void main(){

     int A[3], B[3], C[6];
    int i, j;

    // input Elements for A
    printf("Enter 3 elements for array A:\n");
    for(i = 0; i < 3; i++) {
        scanf("%d", &A[i]);
    }

    //input Elements for B
    printf("Enter 3 elements for array B :\n");
    for(i=0;i<3;i++){
        scanf("%d",&B[i]);
    }

     // Merge A into C
    for(i = 0; i < 3; i++) {
        C[i] = A[i];
    }
    //Merge B into C
     for(j = 0; j <3; j++) {
        C[i+j] = B[j];
    }
    // Display merged array C
    printf("Merged array C:\n");
    for(i = 0; i < 6; i++) {
        printf("%d ", C[i]);
    }
    getch();
}
