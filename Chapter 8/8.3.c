#include <stdio.h>
#include <stdlib.h>

void bubble(int [], int);

int main()
{ int *arr;
int i, N;

printf("Enter number");
scanf("%d",&N);

arr = (int*)malloc(sizeof(int));
for(i=0;i<N;i++)
scanf("%d",&arr[i]);
bubble(arr,N);
printf("The sorted elements are: \n");
for(i=0;i<N;i++)
printf("%d\n", arr[i]);
}

void bubble(int array[], int size)
{
    int i,j, temp;
    for(i=size;i>1;i--)
    for(j=0;j<i-1;j++)
    if(array[j]>array[j+1])
    {temp=array[j+1];
    array[j+1]=array[j];
    array[j]=temp;
    }
}
