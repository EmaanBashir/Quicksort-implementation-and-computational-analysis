#include "SortingAlgorithm.h"
//main method
int main() {
	int n;
	srand((unsigned)time(0));
	SortingAlgorithm s;
	clock_t start;
	int* array;

	cout << "\t'''Quick Sort'''\n";

	//loop to create arrays of size 100, 1000, 10000, 100000, 1000000
	for (int i = 100; i <= 50000; i *= 2) {
		cout << "\n  Array size: " << i << endl;
		array = new int[i];

		//loop to assign random integers to the arrays
		for (int j = 0; j < i; j++) {
			n = 1 + rand() % 100;
			array[j] = n;
		}

		//calculating execution time
		cout << "Execution time: ";
		start = clock();
		s.quickSort(array, 0, i - 1);
		cout << (double)(clock() - start) / CLOCKS_PER_SEC << "s" << endl;
	}
	return 0;
}
