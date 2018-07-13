def insertion_sort(arr):
	for i in range(1, len(arr)):
		j = i
		while(j > 0 and arr[j] < arr[j-1]):
			tmp = arr[j]
			arr[j] = arr[j-1]
			arr[j-1] = tmp
			j = j-1

if __name__ == '__main__':
	arr = [5,4,3,2,1]
	insertion_sort(arr)
	print(arr)
