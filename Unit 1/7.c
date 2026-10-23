// Delete an element at user defined position.
#include <stdio.h>

void main() {
    int a[10], n, pos, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("Enter position to delete : ");
    scanf("%d", &pos);

    // validate position
    if(pos < 1 || pos > n) {
        printf("Location not found!\n");
    } else {
        // shift elements left
        for(i=pos-1; i<n-1; i++)
            a[i] = a[i+1];

        n--;  // size reduced

        printf("Array after deletion:\n");
        for(i=0; i<n; i++)
            printf("%d ", a[i]);
    }

    getch();
}


