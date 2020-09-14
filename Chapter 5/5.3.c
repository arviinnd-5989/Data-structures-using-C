#include <stdio.h>
#include <stdlib.h>

int queue[5];
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
                if(num2==(-9999))
                ;
                else
                {
                    printf("removed %d", num2);
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
    return 0;
}

void insert(int element)
{
    if((front==0 && rear == 4) || front==rear+1)
    {
        printf("Full");
        return;
    }
    if (front==-1)
    {front=0;
    rear=0;
    }
    else if(rear ==4)
    rear=0;
    else
    rear = rear+1;
    queue[rear]=element;
    }

int del()
{ int i;
if(front == -1)
{
    printf("\n queue is empty");
    return(-9999);
}
i = queue[front];

if(front == rear)
{
    front=-1;
    rear = -1;
    return(i);
}
else if (front==4)
{front=0;
return(i);
}
else
{
    front=front+1;
    return(i);
}
}

void display()
{ int i;
if(front==-1)
{printf("Queue is empty");
return;
}
printf("\n the various queue elements are:\n");
i=front;
while(i!=rear)
{
printf("%d\n",queue[i]);
if(i==4)
i=0;
else
i=i+1;
}
printf("%d",queue[i]);
}
