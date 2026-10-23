 //Write a program to find the Smallest Common Divisor of a given number.
#include <stdio.h>

void main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        if (n % i == 0) {
            printf("Smallest divisor of your number is %d\n", n, i);
            break;
        }
    }

    getch();
}
