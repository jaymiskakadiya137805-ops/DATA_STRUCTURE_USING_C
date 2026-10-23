 // multiply two 2D matrices
#include <stdio.h>

void main() {
    int a[2][2], b[2][2], c[2][2];
    int i, j, k;

    printf("Enter first 2x2 matrix:\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter second 2x2 matrix:\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            scanf("%d", &b[i][j]);
        }
    }

    // multiply
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            c[i][j] = 0;
            for(k=0; k<2; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }

    printf("Resultant matrix:\n");
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    getch();
}
