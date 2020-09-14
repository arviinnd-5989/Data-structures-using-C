#include <stdio.h>
#include <stdlib.h>

int queue[100];
int front = -1;
int rear = -1;

void insert(int);
int del();
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
            insert(num1);
            break;
        }
            case 2:
            {
                num2 = del();
                if(num2==-9999)
                ;
                else
                {
                    printf("%d", num2);
                }
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

void insert(int element)
{
    if(front==-1)
    {
    front = rear = front+1;
    queue[front] = element;
    return;
    }
    if(rear == 99)
    {printf("full");
    return;}
    rear = rear+1;
    queue[rear] = element;

}

int del()
{ int i;
if(front == -1 && rear == -1)
{
    printf("\n queue is empty");
    return(-9999);
}
if(front != -1 && front == rear)
{
    i=queue[front];
    front=-1;
    rear = -1;
    return(i);
}
return(queue[front++]);
}

void display()
{ int i;
if(front==-1)
{printf("Queue is empty");
return;
}
printf("\n the various queue elements are:\n");
for(i=front;i<=rear;i++)
printf("%d\n",queue[i]);

}