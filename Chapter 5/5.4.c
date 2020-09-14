#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int element;
    int priority;
    struct queue *next;
};

struct queue *front = NULL;

void insert(int, int);
int del();
void display(void);

int main()
{
    int choice;
    int num1, num2, pr;
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
            scanf("%d",&pr);
            insert(num1,pr);
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

void insert(int value, int p)
{
    struct queue *temp;
    struct queue *ptr = (struct queue*)malloc(sizeof(struct queue));
    
    ptr->element=value;
    ptr->priority=p;

    if(front == NULL || ptr->priority < front->priority)
    {ptr->next = front;
    front=ptr;
    }
    else
    {temp = front;
    while(temp->next!=NULL && temp->next->priority <= ptr->priority)
    temp=temp->next;
    ptr->next = temp->next;
    temp->next = ptr;
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
{ struct queue *ptr=front;
if(front==NULL)
{printf("empty");
}
else{
    printf("Element\tpriority\n");
while(ptr!=NULL)
{printf("%d\t%d",ptr->element,ptr->priority);
ptr=ptr->next;
}
}
}
