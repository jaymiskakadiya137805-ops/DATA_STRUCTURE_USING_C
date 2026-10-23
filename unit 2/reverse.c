#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 50

char stack[MAX];
int top = -1;


void push(char c) {
    if (top == MAX - 1) {
        printf("\nStack Overflow!\n");
    } else {
        top++;
        stack[top] = c;
    }
}


void pop() {
    if (top == -1) {
        printf("\nStack Underflow!\n");
    } else {
        printf("%c", stack[top]);
        top--;
    }
}

void main() {
    char str[MAX];
    int i;

    printf("Enter a string: ");
    gets(str);

    // Push each character of the string
    for (i = 0; i < strlen(str); i++) {
        push(str[i]);
    }

    printf("\nReversed string: ");

    while (top != -1) {
        pop();
    }

    getch();
}

