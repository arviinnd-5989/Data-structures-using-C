#include <stdio.h>
#include <stdlib.h>

void quick(int [], int, int);

int main()
{ int *arr;
int i, N;

printf("Enter number");
scanf("%d",&N);

arr = (int*)malloc(sizeof(int));
for(i=0;i<N;i++)
scanf("%d",&arr[i]);
quick(arr,0,N-1);
printf("The sorted elements are: \n");
for(i=0;i<N;i++)
printf("%d\n", arr[i]);
}

void quick(int array[], int LB, int UB)
{
    int pivot, nxt_pvt, left, right;
    left = LB;
    right = UB;
    pivot = array[left];
    while(LB<UB)
    {
        while((array[UB]>=pivot) && (LB<UB))
        UB--;
        if(LB!=UB)
        {array[LB]=array[UB];
        LB++;
        }

        while((array[LB]<=pivot) && (LB<UB))
        LB++;
        if(LB!=UB)
        {array[UB]=array[LB];
        UB--;
        }
    }

    array[LB]=pivot;
    nxt_pvt=LB;
    LB=left;
    UB=right;

    if(LB<nxt_pvt)
    quick(array,LB,nxt_pvt-1);
    if(UB>nxt_pvt)
    quick(array,nxt_pvt+1,UB);

}
