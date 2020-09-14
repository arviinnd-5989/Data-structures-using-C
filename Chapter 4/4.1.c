#include <stdio.h>
#include <stdlib.h>

int stack[100];
int top = -1;

void push(int);
int pop();
void display();

int main()
{
    int choice;
    int num1=0, num2 = 0;
    while(1)
    {
        printf("\n 1");
        printf("\n 2");
        printf("\n 3");
        printf("\n 4");
        printf("\n your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
        {   scanf("%d",&num1);
            push(num1);
            break;
        }
            case 2:
            {
                num2 = pop();
                printf("%d", num2);
                break;
            }

            case 3:
            {
                display();
                break;
            }

            case 4:
            exit(1);
            break;

            default:
            printf("\n Invalid choice");
            break;
        }


    }
}

void push(int element)
{
    if(top==99)
    {printf("stack is full");
    exit(1);
    }
    top = top+1;
    stack[top] = element;

}

int pop()
{ if (top == -1)
{
    printf("\n Stack is empty");
    exit(1);
}
return (stack[top--]);

}

void display()
{ int i;
printf("\n the various stack elements are:");
for(i=top;i>=0;i--)
printf("%d\n",stack[i]);

}