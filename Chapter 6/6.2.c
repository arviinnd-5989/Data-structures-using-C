#include <stdio.h>
#include <stdlib.h>

struct bin_tree
{
    int INFO;
    struct bin_tree *LEFT, *RIGHT;
};

typedef struct bin_tree node;

node *insert(node *, int);
void preorder(node*);
void inorder(node *);
void postorder(node *);

int count = 1;

int main()
{
    node *root = NULL;
    int element, choice;

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
            preorder(root);
            break;
            }

            case 3:
            {
                inorder(root);
                break;
            }

            case 4:
            {
                postorder(root);
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
    count=count+1;
    }
    else
    {
        if(count%2==0)
        r->LEFT = insert(r->LEFT,n);
        else
        r->RIGHT = insert(r->RIGHT,n);
    }
    return(r);
}
  

void preorder(node*r)
{
    if(r!=NULL)
    {printf("%d\n",r->INFO);
    preorder(r->LEFT);
    preorder(r->RIGHT);
    }
} 

void inorder(node*r)
{
    if(r!=NULL)
    {inorder(r->LEFT);
    printf("%d\n",r->INFO);
    
    inorder(r->RIGHT);
    }
} 

void postorder(node*r)
{
    if(r!=NULL)
    {postorder(r->LEFT);
    postorder(r->RIGHT);
    printf("%d\n",r->INFO);
    }
} 