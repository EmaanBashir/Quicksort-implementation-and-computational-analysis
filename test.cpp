#include "SortingAlgorithm.h"

//print array
void printArray(int* array, int size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
}

//main method to test the algorithm
int main() {
	int array[20];
	srand(time(0));
	SortingAlgorithm s;
	int n, size = sizeof(array) / sizeof(array[0]);

	//loop to assign random integers to the array
	for (int j = 0; j < 20; j++) {
		n = 1 + rand() % 100; 
		array[j] = n;
	}

	//unsorted array
	cout << "\nUnsorted array:\t";
	printArray(array, size);

	//apply quick sort
	s.quickSort(array, 0, size - 1);

	//sorted array
	cout << "\nSorted array:\t";
	printArray(array, size);

	return 0;
}
