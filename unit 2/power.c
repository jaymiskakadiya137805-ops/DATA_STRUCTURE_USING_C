// Power of given number using stack.
#include <stdio.h>
#define MAX 50

int stack[MAX];
int top = -1;

void push(int b){
    top++;
    stack[top] = b;
}

int pop(){
    int v;
    v = stack[top];
    top--;
    return v;
}

void main(){
    int b, p, i, val, mul;
    printf("Enter base value : ");
    scanf("%d", &b);

    printf("Enter power value : ");
    scanf("%d", &p);

    for (i=1; i<=p; i++){
        push(b);
    }
    mul = 1;
    for (i=1; i<=p; i++){
        val  = pop();
        mul = mul * val;
    }
    printf("%d^%d = %d\n", b, p, mul);
    getch();
}

