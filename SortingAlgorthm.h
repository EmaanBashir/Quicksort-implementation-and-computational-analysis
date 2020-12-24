#include <iostream>
#include <time.h>

using namespace std;

//class SortingAlgorithm
class SortingAlgorithm {

	//public methods
public:

	//quick sort method
	void quickSort(int* array, int firstIndex, int lastIndex) {
		if (firstIndex < lastIndex) {
			int bound = partition(array, firstIndex, lastIndex);
			quickSort(array, firstIndex, bound - 1);
			quickSort(array, bound + 1, lastIndex);
		}

	}

	//partition method
	int partition(int* array, int firstIndex, int lastIndex) {
		int i = firstIndex - 1;
		for (int j = firstIndex; j < lastIndex; j++) {
			if (array[j] <= array[lastIndex]) {
				i++;
				swap(array[i], array[j]);
			}
		}
		swap(array[++i], array[lastIndex]);
		return i;
	}
};
