#include <stdio.h>
#include <stdlib.h>

int binary(int [], int, int);

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

index=binary(arr,N,k);

if(index==-999)
printf("not present");
else
printf("%d",index);
return 0;
}

int binary(int array[], int size, int num)
{
    int i,j=size,k;
    while(i<=j)
    { k = (i+j)/2;
    if(array[k]==num)
    return(k);
    else if(array[k]<num)
    i=k+1;
    else
    {
        j=k-1;
    }
    }
    return(-999);
}