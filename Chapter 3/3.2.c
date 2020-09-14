#include <stdio.h>
#include <stdlib.h>

struct cl_node{
    int INFO;
    struct cl_node *NEXT;
};

struct cl_node *FIRST = NULL;
struct cl_node *LAST = NULL;

void insert(int);
int delete1(int);
void print(void);
struct cl_node *search(int);

int main(){
    int num1, num2, choice;
    struct cl_node *location;

    while(1)
    {
    printf("\n1");
    printf("\n2");
    printf("\n3");
    printf("\n4");
    printf("\n5");

    printf("\n Enter choice: ");
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
    printf("%d --> %d", num1, (location->NEXT)->INFO);     
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
}
    return 0;
}

void insert(int value)
{
    struct cl_node *PTR =  (struct cl_node*)malloc(sizeof(struct cl_node));
    PTR -> INFO = value;

    if (FIRST == NULL)
    {FIRST = LAST = PTR;
    PTR->NEXT = FIRST;}
else
{
    LAST->NEXT = PTR;
    PTR->NEXT = FIRST;
    LAST = PTR;
}
}

int delete1(int value)
{ struct cl_node *LOC, *TEMP;
int i;
i = value;
LOC = search(i);
if (LOC == NULL)
return (-9999);

if(LOC == FIRST)
{
    if(FIRST==LAST)
    FIRST=LAST=NULL;
    else{
        FIRST=FIRST->NEXT;
        LAST->NEXT = FIRST;
    }
    return(value);
}

for(TEMP = FIRST; TEMP->NEXT!=LOC;TEMP=TEMP->NEXT)
;
    if(LOC==LAST)
    {
    LAST = TEMP;
    TEMP->NEXT = FIRST;
    }
    else TEMP->NEXT = LOC->NEXT;
    return(LOC->INFO);
}

struct cl_node *search(int value)
{ struct cl_node *PTR;
if(FIRST==NULL)
return(NULL);
if(FIRST==LAST && FIRST->INFO==value)
return(FIRST);

for(PTR=FIRST;PTR!=LAST;PTR=PTR->NEXT)
if(PTR->INFO==value)
return(PTR);

if(LAST->INFO==value)
return(LAST);
else
return(NULL);
}

void print()
{ 
    struct cl_node *PTR;

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