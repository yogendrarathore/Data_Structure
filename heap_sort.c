// Heap Sort in C

#include <stdio.h>

// Function to swap the position of two elements
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// To heapify a subtree rooted with node i
void heapify(int arr[], int N, int i)
{

	// Initialize largest as root
	int largest = i;

	// left = 2*i + 1
	int left = 2 * i + 1;

	// right = 2*i + 2
	int right = 2 * i + 2;

	// If left child is larger than root
	if (left < N && arr[left] > arr[largest])

		largest = left;

	// If right child is larger than largest
	if (right < N && arr[right] > arr[largest])

		largest = right;

	if (largest != i) {

		swap(&arr[i], &arr[largest]);

		heapify(arr, N, largest);
	}
}

// Main function to do heap sort
void heapSort(int arr[], int N)
{

	// Build max heap
	for (int i = N / 2 - 1; i >= 0; i--)

		heapify(arr, N, i);

	// Heap sort
	for (int i = N - 1; i >= 0; i--) {

		swap(&arr[0], &arr[i]);
		heapify(arr, i, 0);
	}
}

//function to print array
void printArray(int arr[], int N)
{
	for (int i = 0; i < N; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

// Driver's code
int main()
{
	int arr[1000],n;
	printf("Enter number of Elements :");
    scanf("%d",&n);
    printf("Enter elements to be inserted :");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d",&arr[i]);
    }

    printf("Given array is \n");
	printArray(arr, n);

	// Function call
	heapSort(arr, n);
	printf("Sorted array is\n");
	printArray(arr, n);
}

