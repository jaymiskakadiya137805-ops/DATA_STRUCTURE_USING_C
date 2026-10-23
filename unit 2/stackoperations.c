#include<stdio.h>
#include<conio.h>
#define MAX 5

int stack[10];
int top=-1;

//Function to Push an element into stack

void push()

{

    int val;

    if (top ==MAX-1)
    {

        printf("\n Stack Overflow !! Crazy Hai Bhai Crazy !!\n");

    }

    else
    {

         printf("Enter Element to push :");
         scanf("%d",&val );
         top++;
         stack[top]=val;
         printf("Inserted successfully \n");

    }


}


//Function to POP an element from the stack

void pop ()
{
if(top==-1)
{

        printf("Stack is Empty... ");


}

else
{

 printf("Deleted Element is : %d\n", stack[top]);
 top--;

}


}

// Function to Display Stack Elements
void display()
{

int i;

if(top==-1)
{

    printf("Stack Is Empty...\n");

}

else
{

    printf("\n Stack Elements Here : \n");

    for(i=top;i>=0;i--)
    {
        printf("%d \n",stack[i]);
    }

}

}

void peek()
{

        if(top==-1)
        {
            printf("Stack is Empty...");

        }
        else
        {
            printf("Top Most Element is %d ", stack[top]);
        }

}

void update()
{
    int x,i;
    printf("Enter The element that you wanna update : ");
    scanf("%d",&i);

    if(top - 1 + 1 == -1 )
    {
        printf("Empty");
    }
    else
    {
        printf("Enter New Value :");
        scanf("%d",&x);
        stack[top-i+1]= x;
    }
}

// Main Function

void main()
{

    int choice;
   while(1)
    {

        printf("\n ----- STACK MENU -----\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Display\n");
        printf("4. Peek \n");
        printf("5.Update \n");
         printf("6. Exit \n");


        printf("Enter your choice :");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1 :
            push();
            break;

        case 2 :
            pop();
            break;

        case 3 :
            display();
            break;

        case 4 :
                peek();
                break;


        case 5 :
            update();
            break;


        case 6 :
            printf("Programm Terminated. --- Mission Completed --- \n");
            exit(0);

        default:
        printf("Invalid Choice ! Select from (1-4). Better Luck next time ...");



        }


    }
    getch();

}






