#include <stdio.h>
#include <stdlib.h>

int linear(int [], int, int);

int main()
{ int *arr;
int i, N, k, index;

printf("Enter number elements");
scanf("%d",&N);

arr = (int*)malloc(sizeof(int));

for(i=0;i<N;i++)
scanf("%d",&arr[i]);

printf("\nEnter search element");
scanf("%d",&k);

index=linear(arr,N,k);

if(index==-999)
printf("not present");
else
printf("%d",index);
return 0;
}

int linear(int array[], int size, int num)
{
    int i;
    for(i=0;i<size;i++)
    if(num==array[i])
    return(i);
    printf("%d",i);
    if(i==size)
    return(-999);
}