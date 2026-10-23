// Factorial of given number using stack
#include <stdio.h>
#define MAX 50

int stack[MAX];
int top = -1;

// Push function
void push(int b){
    top++;
    stack[top] = b;
}

// Pop function
int pop(){
    int v;
    v = stack[top];
    top--;
    return v;
}

void main(){
    int n, i, val, fact;

    printf("Enter a number : ");
    scanf("%d", &n);

    // Push all numbers from 1 to n into stack
    for(i = 1; i <= n; i++){
        push(i);
    }

    fact = 1;
    // Pop and multiply
    for(i = 1; i <= n; i++){
        val = pop();
        fact = fact * val;
    }

    printf("Factorial of %d = %d\n", n, fact);

    getch();   // Turbo C style pause
}

