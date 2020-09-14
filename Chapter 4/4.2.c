#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int element;
    struct stack *next;
}*top;

void push(int);
int pop();
void display();

int main()
{
    int choice;
    int num1, num2;
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

void push(int value)
{
    struct stack *ptr;
    ptr = (struct stack*)malloc(sizeof(struct stack));
    ptr->element=value;

    ptr->next = top;
    top = ptr;
    return;
}

int pop()
{ 
    if(top==NULL)
{printf("\nstack is empty");
exit(1);
}
else
{
    int temp = top->element;
    top = top->next;
    return(temp);
}

}
  
void display()
{ struct stack *ptr1=NULL;
ptr1=top;
while(ptr1!=NULL)
{printf("%d\t",ptr1->element);
ptr1=ptr1->next;}
}
