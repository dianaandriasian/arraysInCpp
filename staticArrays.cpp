///////////////////
/// 1-6, 11, 12 ///
///////////////////


#include <iostream>

void fillArray(int*, int);
int  findMax(int*, int);
int  findMaxIndex(int*, int);
int  findMin(int*, int); 
int  findMinIndex(int*, int);
void reverseArray(int*, int);
void printProduct(int*, int*, int);
void printSum(int*, int*, int);
int  oddNumCount(int*, int);
int evenNumCount(int*, int);

int main()
{
	const int s = 10;
	int arr[s] = {};

	std::cout << "Please, fill array : " << std::endl << std::endl;  
	fillArray(arr, s);

	std::cout << "Index of array's max element : " << findMaxIndex(arr, s) << std::endl;
	std::cout << "Index of array's min element : " << findMinIndex(arr, s) << std::endl;
	std::cout << "MAX + min = " << findMax(arr, s) + findMin(arr, s) << std::endl << std::endl;

	std::cout << "Reverse array : " << std::endl << std::endl; 
	reverseArray(arr, s);

	int secondArr[s] = {};
	std::cout << "Please, fill second array : " << std::endl << std::endl; 
	fillArray(secondArr, s);

	printProduct(arr, secondArr, s);
	printSum(arr, secondArr, s);

	std::cout << "Count of odds : " << oddNumCount(arr, s) << std::endl;
	std::cout << "Count of evens : " << evenNumCount(secondArr, s) << std::endl;

	return 0;
}

void fillArray(int* array, int size)
{
	for (int i = 0; i < size; ++i) {
		std::cout << "array[" << i << "] = ";
		std::cin >> array[i];
	}

	std::cout << std::endl;
}

int findMax(int* array, int size)
{
	int max = array[0];

	for (int i = 1; i < size; ++i) {

		if (max < array[i]) {

			max = array[i];
		}
	}

	return max;
}

int findMaxIndex(int* array, int size)
{
	int max = array[0];
	int index = 0;

	for (int i = 1; i < size; ++i) {

		if (max < array[i]) {

			max = array[i];
			index = i;
		}
	}

	return index;
}

int findMin(int* array, int size)
{
	int min = array[0];

	for (int i = 1; i < size; ++i) {

		if (min > array[i]) {

			min = array[i];
		}
	}

	return min;
}


int findMinIndex(int* array, int size)
{
	int min = array[0];
	int index = 0;

	for (int i = 1; i < size; ++i) {

		if (min > array[i]) {

			min = array[i];
			index = i;
		}
	}

	return index;
}

void reverseArray(int* array, int size)
{
	for (int i = size - 1; i >= 0; --i) {
		std::cout << "array[" << i << "] = " << array[i] << std::endl;
	}

	std::cout << std::endl;
}

void printProduct(int* first_array, int* second_array, int size)
{
	std::cout << "Array's product : { ";

	for (int i = 0; i < size - 1; ++i) {
		std::cout << first_array[i] * second_array[i] << ", ";
	}

	std::cout << first_array[size - 1] * second_array[size - 1] << " } " << std::endl;
}

void printSum(int* first_array, int* second_array, int size)
{
	std::cout << "Array's sum : { ";

	for (int i = 0; i < size - 1; ++i) {
		std::cout << first_array[i] + second_array[i] << ", ";
	}

	std::cout << first_array[size - 1] + second_array[size - 1] << " } " << std::endl;
}

int oddNumCount(int* arr, int s)
{
	int count = 0;
	for (int i = 0; i < s; ++i) {
		if (arr[i] % 2 != 0) {
			++count;
		}
	}

	return count;
}

int evenNumCount(int* arr, int s)
{
	int count = 0;
	for (int i = 0; i < s; ++i) {
		if (arr[i] % 2 == 0) {
			++count;
		}
	}

	return count;
}
