#include <stdio.h>
#include <stdlib.h>

void insertion(int*,int);
void bucket(int*, int);

int main()
{ int *arr;
int i, N;

printf("Enter number");
scanf("%d",&N);

arr = (int*)malloc(sizeof(int));
for(i=0;i<N;i++)
scanf("%d",&arr[i]);
bucket(arr,N);
printf("The sorted elements are: \n");
for(i=0;i<N;i++)
printf("%d\n", arr[i]);
return 0;
}

void insertion(int * array, int size)
{
    int i=0, j=0, temp=0;
    for(i=1;i<size;i++)
    {
        temp = array[i];
        for(j=i-1;j>=0;j--)
        if(array[j]>temp)
        array[j+1] = array[j];
        else
        break;
        array[j+1] = temp;
    }
}
        
void bucket(int *array, int size)
{
    int i,j,k,b[5][10];
    int c[5];

    for(i=0;i<5;i++)
    c[i]=0;

    for(i=0;i<size;i++)
    {
        if(array[i]>=0 && array[i]<=9)
        b[0][c[0]++] = array[i];

        if(array[i]>=10 && array[i]<=19)
        b[1][c[1]++] = array[i];

        if(array[i]>=20 && array[i]<=29)
        b[2][c[2]++] = array[i];

        if(array[i]>=30 && array[i]<=39)
        b[3][c[3]++] = array[i];

        if(array[i]>=40 && array[i]<=49)
        b[4][c[4]++] = array[i];
    }

    for(i=0;i<5;i++)
    if(c[i]!=0)
    insertion(&b[i][0], c[i]);

    i=0;
    k=0;
    while(i<5)
    {
    if(c[i]==0)
    {
        i=i+1;
        continue;
    }

    for(j=0;j<c[i];j++)
    array[k++] = b[i][j];
    i=i+1;
}


}
