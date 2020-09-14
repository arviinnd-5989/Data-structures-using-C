#include <stdio.h>
#include <curses.h>

void traverse(int*, int);

int main()
{int arr[5] = {2,6,7,3,8};
int N = 5;
printf("press key to perform array traversal \n");
traverse(arr,N);
return endwin();
}

void traverse(int *array, int size)
{
int i;
for (i =0; i<size;i++)
printf("%d = %d\n", i, array[i]);
}