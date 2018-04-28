// Ryan Slipher
// Algorithms Project 1

#include <iostream>
#include <climits>
using namespace std;

void insertionSort(int size, int numbers[]);
void merge(int numbers[], int p, int q, int r, int &numAssignments);
void mergeSort(int numbers[], int p, int r, int &numAssignments);
void printArray(int size, int numbers[]);
int* makeRandomArray(int size, int range);

int main(int argc, const char* argv[]) {

	int numsOne[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int numsTwo[10] = { 10,9,8,7,6,5,4,3,2,1 };
	
	int* numsThree = new int[100];
	for (int i = 0; i < 100; i++) {
		numsThree[i] = (rand() % 100) + 1;
	}
	for (int i = 0; i < 100; i++) {
		cout << numsThree[i] << endl;
	}

	int* numsFour = new int[1000];
	for (int i = 0; i < 1000; i++) {
		numsFour[i] = (rand() % 1000) + 1;
	}
	for (int i = 0; i < 1000; i++) {
		cout << numsFour[i] << endl;
	}
	int* numsFive = new int[100];
	for (int j = 0; j < 100; j++) {
		int size = 100;
		int* numsFive = makeRandomArray(100, 10);
	}
	int* numsSix = new int[1000];
	for (int j = 0; j < 100; j++) {
		int size = 1000;
		int* numsSix = makeRandomArray(1000, 10);
	}
	int numAssignments = 0;
	printArray(10, numsOne);
	printArray(10, numsTwo);

	insertionSort(10, numsOne);
	printArray(10, numsOne);
	insertionSort(10, numsTwo);
	printArray(10, numsTwo);
	mergeSort(numsOne, 0, 9, numAssignments);
	printArray(10, numsOne);
	mergeSort(numsTwo, 0, 9, numAssignments);
	printArray(10, numsTwo);
	insertionSort(100, numsThree);
	printArray(100, numsThree);
	mergeSort(numsThree, 0, 99, numAssignments);
	printArray(100, numsThree);
	insertionSort(1000, numsFour);
	printArray(1000, numsFour);
	mergeSort(numsFour, 0, 999, numAssignments);
	printArray(1000, numsFour);
	insertionSort(100, numsFive);
	printArray(100, numsFive);
	mergeSort(numsFive, 0, 99, numAssignments);
	printArray(100, numsFive);
	insertionSort(1000, numsSix);
	printArray(1000, numsSix);
	mergeSort(numsSix, 0, 999, numAssignments);
	printArray(1000, numsSix);
	//merge(, 0, 2, 5, numAssignments);
	//printArray();
	
	cout << "Number of swaps is " << numAssignments << endl;

	cin.ignore(10, '\n');
	cin.get();
	return 0;
}

	void insertionSort(int size, int numbers[]){
	int counter = 0;
	for (int j = 1; j < 5; j++)
	{
		int key = numbers[j];
		int i = j - 1;

		while (i >= 0 && numbers[i] > key)
		{
			numbers[i + 1] = numbers[i];
			counter++;
			i = i--;
		}
		numbers[i + 1] = key;
		cout << key << endl;
	}
	cout << "counter is " << counter << endl;
}

void merge(int numbers[], int p, int q, int r, int &numAssignments)
{
	int n1 = q - p + 1;
	//cout << n1 << endl;
	int n2 = r - q;
	//cout << n2 << endl;
	int* L = new int[n1 + 1];
	int* R = new int[n2 + 1];
	for (int i = 0; i < n1; i++) {
		L[i] = numbers[p + i];
	}
	for (int j = 0; j < n2; j++) {
		R[j] = numbers[q + 1 + j];
	}
	L[n1] = INT_MAX;
	R[n2] = INT_MAX;
	//printArray(n1 + 1, L);
	//printArray(n2 + 1, R);
	int i = 0;
	int j = 0;
	for (int k = p; k <= r; k++) {
		if (L[i] < R[j]) {
			numbers[k] = L[i];
			i = i + 1;
			numAssignments++;
		}
		else {
			numbers[k] = R[j];
			j = j + 1;
			numAssignments++;
		}
	}

}

void mergeSort(int numbers[], int p, int r, int &numAssignments)
{
	int q = 0;
	if (p < r) {
		q = (p + r) / 2;
		mergeSort(numbers, p, q, numAssignments);
		mergeSort(numbers, q + 1, r, numAssignments);
		merge(numbers, p, q, r, numAssignments);
	}
}

void printArray(int size, int numbers[])
{
	for (int i = 0; i < size; i++)
	{
		cout << numbers[i] << " ";
	}
	cout << endl;
}

int* makeRandomArray(int size, int range) {
	int* array = new int[size];
	for (int i = 0; i < size; i++) {
		array[i] = (rand() % range) + 1;
	}
	return array;
}