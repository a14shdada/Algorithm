#include<stdio.h>

void swap(int *a, int *b) 
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
void selection_sort(int arr[], int n)
{
	int i, j, min;
	for (i=0; i<n; i++){
		min = i;
		for (j=i+1; j<n; j++){
			if (arr[j] < arr[min]) 
				min = j;
		}
		swap(&arr[min], &arr[i]);
	}
}

int main()
{
	int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
   	int i, n;
	n = sizeof(arr)/sizeof(arr[0]);
	selection_sort(arr, n);
	for(i=0; i<n; i++)
		printf("%d\t", arr[i]);
	return 0;
}
