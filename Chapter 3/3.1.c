#include <stdio.h>
#include <stdlib.h>
struct node{
    int INFO;
    struct node *NEXT;
};

struct node *FIRST = NULL;
struct node *LAST = NULL;

void insert(int);
int delete1(int);
void print(void);
struct node *search(int);

int main(){
    int num1, num2, choice;
    struct node *location;
    int cnt;
    while(1)
    {
    printf("\n1");
    printf("\n2");
    printf("\n3");
    printf("\n4");
    printf("\n5");
    fflush(stdout);

    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
    {scanf("%d",&num1);
    insert(num1);
    break;
    }

    case 2:
    {scanf("%d",&num1);
    num2 = delete1(num1);
    if(num2==-9999)
    printf("NOt present");
    break;
    }

    case 3:
    {scanf("%d", &num1);
    location = search(num1);
    if(location==NULL)
    printf("Not present");
    else
    {
        if (location == LAST)
        printf("last element");
        else
        {
            printf("%d --> %d", num1, (location->NEXT)->INFO);
        }
        
    }
    break;
    }

    case 4:
    {print();
    break;}

    case 5:
    {exit(1);
    break;
    }

    default:
    {printf("incorrect choice");
    break;
    }
}
cnt +=1;
}
    return 0;
}

void insert(int value)
{
    struct node *PTR =  (struct node*)malloc(sizeof(struct node));
    PTR -> INFO = value;

    if (FIRST == NULL)
    {FIRST = LAST = PTR;
    PTR->NEXT = NULL;}
else
{
    LAST->NEXT = PTR;
    PTR->NEXT = NULL;
    LAST = PTR;
}
}

int delete1(int value)
{ struct node *LOC, *TEMP;
int i;
i = value;
LOC = search(i);
if (LOC == NULL)
return (-9999);

if(LOC == FIRST)
{
    if(FIRST==LAST)
    FIRST=LAST=NULL;
    else
        FIRST=FIRST->NEXT;
        return(value);
}

for(TEMP = FIRST; TEMP->NEXT!=LOC;TEMP=TEMP->NEXT)
;
    TEMP->NEXT = LOC->NEXT;
    if(LOC==LAST)
    LAST = TEMP;
    return(LOC->INFO);
}

struct node *search(int value)
{ struct node *PTR;
if(FIRST==NULL)
return(NULL);
for(PTR=FIRST;PTR!=LAST;PTR=PTR->NEXT)
if(PTR->INFO==value)
return(PTR);

if(LAST->INFO==value)
return(LAST);
else
{
    return(NULL);
}
}

void print()
{ 
    struct node *PTR;

if(FIRST==NULL)
{
    printf("\nEmptylist");
    return;
}
printf("\n linkedlist elements \n");
if(FIRST==LAST)
{printf("%d",FIRST->INFO);
return;
}

for(PTR=FIRST;PTR!=LAST;PTR=PTR->NEXT)
printf("%d",PTR->INFO);
printf("%d",LAST->INFO);
}