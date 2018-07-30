def swap(a, b):
	return b,a

def selection_sort(arr):
	for i in range(0, len(arr)):
		min = i;
		for j in range(i+1, len(arr)):
			if arr[j] < arr[min]:
				min = j
		arr[i], arr[min] = swap(arr[i], arr[min])

if __name__ == "__main__":
	arr = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
	print(arr)
	selection_sort(arr)
	print(arr)
