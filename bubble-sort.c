
#include<stdio.h>

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubblesort(int a[],int len)
{
  int i,j;
   for (i=0 ; i <len -1 ; i++)
  {
    for (j=0 ; j<len-i-1 ; j++)
    {
      if (a[j] > a[j+1]) /* For decreasing order use '<' instead of '>' */
      {
        swap(&a[j],&a[j+1]);
      }
    }
  }    
}




void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}


int main()
{
  int array[100], n, c;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  bubblesort(array,n);
  printf("Sorted list in ascending order:\n");
  printArray(array, n);
  return 0;
}

