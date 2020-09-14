#include<stdio.h>
#include<stdlib.h>

struct vertex
{
    struct vertex *edge[10];
    int id;
} node[10];

void display(int);

int main()
{ int i,j,N;
char ch;
i=j=N=0;
printf("Enter number of vertices");
scanf("%d",&N);

for(i=0;i<N;i++)
{
    node[i].id=i;
    fflush(stdin);
    for(j=0;j<N;j++)
    {fflush(stdin);
    printf("Edge %d to %d y/n",i+1,j+1);
    scanf("%c",&ch);
    scanf("%c",&ch);
    if(ch=='y')
    node[i].edge[j]=&node[j];
    else
    node[i].edge[j]=NULL;
    }
}
display(N);
return 0;
}

void display(int num)
{
    int i, j;
    printf("\n");
    for(i=0;i<num;i++)
    {printf("Edges of node[%d] are: ",i+1);
    for(j=0;j<num;j++)
    {if(node[i].edge[j]==NULL)
    continue;
    printf("%d-%d",i+1,node[i].edge[j]->id+1);
    }
    printf("\n");
    }
}
