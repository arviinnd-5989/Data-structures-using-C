#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int element;
    struct queue *next;
};

struct queue *front = NULL;
struct queue *rear = NULL;

void insert(int);
int del();
void display(void);

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
            insert(num1);
            break;
        }
            case 2:
            {
                num2 = del();
                if (num2==-9999)
                printf("Empty");
                else
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
            {
            printf("\n Invalid choice");
            break;
            }
        }


    }
}

void insert(int value)
{
    struct queue *ptr;
    ptr = (struct queue*)malloc(sizeof(struct queue));
    ptr->element=value;

    if(front == NULL)
    {front = rear = ptr;
    ptr->next=NULL;
    }
    else
    {rear->next = ptr;
    ptr->next = NULL;
    rear = ptr;
    }
}

int del()
{ 
    int i;

    if(front==NULL)
    return (-9999);
    else
    {
        i=front->element;
        front=front->next;
        return(i);
    }
}
  
void display()
{ struct queue *ptr1=front;
if(front==NULL)
{printf("empty");
}
else{
while(ptr1!=rear)
{printf("%d\t",ptr1->element);
ptr1=ptr1->next;}
printf("%d",rear->element);
}

}
