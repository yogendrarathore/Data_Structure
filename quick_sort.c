// Quick sort in C

#include <stdio.h>

// function to swap elements
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

// function to find the partition position
int partition(int array[], int low, int high) {
  
 
  int pivot = array[high];
  
 
  int i = (low - 1);

  // traverse each element of the array
  // compare them with the pivot
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
        
      
      i++;
      
      
      swap(&array[i], &array[j]);
    }
  }

  // swap the pivot element with the greater element at i
  swap(&array[i + 1], &array[high]);
  
  // return the partition point
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    
    
    int pi = partition(array, low, high);
    
    
    quickSort(array, low, pi - 1);
    
   
    quickSort(array, pi + 1, high);
  }
}

// function to print array elements
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

// main function
int main() {
  int arr[1000],n;
  printf("Enter number of Elements :");
  scanf("%d",&n);
  printf("Enter elements to be inserted :");
  for (int i = 0; i < n; ++i)
  {
      scanf("%d",&arr[i]);
  }
  
  printf("Unsorted Array\n");
  printArray(arr, n);
  
 
  quickSort(arr, 0, n - 1);
  
  printf("Sorted array in ascending order: \n");
  printArray(arr, n);
}