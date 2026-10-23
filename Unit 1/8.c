//Sort the array into ascending order.
#include <stdio.h>

void main() {
    int a[50], n, i, j, temp;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    // this is bubble sort in ascending order
    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
            if(a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Array in ascending order:\n");
    for(i=0; i<n; i++)
        printf("%d ", a[i]);

        getch();
}

