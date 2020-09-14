#include <stdio.h>
#include <stdlib.h>

struct BST
{
    int INFO;
    struct BST *LEFT, *RIGHT;
};

typedef struct BST node;

node *insert(node *, int);
void search(node *, int);
int del(node *, int);
void display(node*);

int count = 1;

int main()
{
    node *root = NULL;
    int element, choice, num, flag;

    while(1)
    {
        printf("\n 1");
        printf("\n 2");
        printf("\n 3");
        printf("\n 4");
        printf("\n 5");
        printf("\n your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
        {   scanf("%d",&element);
            root = insert(root,element);
            break;
        }
            case 2:
            {
            scanf("%d",&num);
            search(root,num);
            break;
            }

            case 3:
            {
                scanf("%d",&num);
                flag = del(root,num);
                if(flag==1)
                printf("deleted");
                else
                printf("not present");
                break;
            }

            case 4:
            {
            display(root);
            break;
            }

            case 5:
            {
                exit(1);
                break;
            }
            default:
            {
            printf("\n Invalid choice");
            break;
            }
        }


    }
    return 0;
}

node *insert(node *r, int n)
{
    if(r==NULL)
    {r=(node*) malloc (sizeof(node));
    r->LEFT = r->RIGHT = NULL;
    r->INFO = n;
    }
    else if(n<r->INFO)
    r->LEFT = insert(r->LEFT,n);
    else if(n>r->INFO)
    r->RIGHT = insert(r->RIGHT,n);
    else if(n==r->INFO)
    printf("failed");
    return(r);
}

void search(node *r, int n)
{
    if(r==NULL)
    {printf("not present");
    return;}
    else if(n==r->INFO)
    printf("present");
    else if(n<r->INFO)
    search(r->LEFT,n);
    else
    search(r->RIGHT,n);
}

int del(node *r,int n)
{node *ptr;
if(r==NULL)
{return(0);
}
else if(n<r->INFO)
return (del(r->LEFT,n));
else if(n>r->INFO)
return (del(r->RIGHT,n));
else
{
if(r->LEFT==NULL)
{ptr=r;
r=r->RIGHT;
free(ptr);
return(1);
}
else
{
ptr=r->LEFT;
while(ptr->RIGHT!=NULL)
ptr=ptr->RIGHT;
r->INFO = ptr->INFO;
return (del(r->LEFT, ptr->INFO));
}
}
}
  
void display(node *r)
{ if(r->LEFT != NULL)
display(r->LEFT);
printf("%d\n", r->INFO);
if(r->RIGHT!=NULL)
display(r->RIGHT);
}
