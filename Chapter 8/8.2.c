#include <stdio.h>
#include <stdlib.h>

void insertion(int [], int);

int main()
{ int *arr;
int i, N;

printf("Enter number");
scanf("%d",&N);

arr = (int*)malloc(sizeof(int));
for(i=0;i<N;i++)
scanf("%d",&arr[i]);
insertion(arr,N);
printf("The sorted elements are: \n");
for(i=0;i<N;i++)
printf("%d\n", arr[i]);
}

void insertion(int array[], int size)
{
    int i,j, temp;
    for(i=1;i<size;i++)
    {
        temp = array[i];
        for(j=i-1;j>=0;j--)
        if(array[j]>temp)
        array[j+1] = array[j];
        else
        break;
        array[j+1]=temp;
    }
}
