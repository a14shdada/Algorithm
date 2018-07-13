# include<stdio.h>

void swap(int *first, int *second) 
{
	int tmp;
	tmp = *first;
	*first = *second;
	*second = tmp;
	return;
}
void insertion_sort(int arr[], int n)
{
	int i,j;					/* Counter */
	for (i=1; i<n; i++) {
		j=i;
		while(j>0 && arr[j] < arr[j-1]) {
			swap(&arr[j], &arr[j-1]);
			j = j -1;
		}
	}
	return;
}

int main()
{
	int i;
	int arr[5] = {5,4,3,2,1};
	insertion_sort(arr, sizeof(arr)/sizeof(arr[0]));
	for (i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
		printf("%d\t", arr[i]);
	return 0;
}
