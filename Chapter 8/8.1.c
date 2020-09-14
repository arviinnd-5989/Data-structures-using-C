#include <stdio.h>
#include <stdlib.h>

void selection(int *, int);
int Min(int *, int, int);

int main()
{ int *arr;
int i, N;

printf("Enter number");
scanf("%d",&N);

arr = (int*)malloc(sizeof(int));
printf("%d",N);
for(i=0;i<N;i++)
scanf("%d",&arr[i]);
selection(arr,N);
printf("The sorted elements are: \n");
for(i=0;i<N;i++)
printf("%d\n", arr[i]);
}

void selection(int *a, int size)
{
    int i=0, loc=0, temp=0;
    for(i=0;i<size;i++)
    {
        loc=Min(a,i,size);
        temp=a[loc];
        a[loc]=a[i];
        a[i]=temp;

    }
}

int Min(int *array, int LB, int UB)
{
    int m=LB;
    while(LB<UB)
    {
        if(array[LB]<array[m])
        m=LB;
        LB++;
    }
    return(m);
}