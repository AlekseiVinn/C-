#include <iostream>
#include <cmath>
#include <ctime>
#include "practise5.h"



void fillArray(int *parr, const int n) {
	srand(time(0));
	int len = sizeof(parr);
	int el = sizeof(parr[0]);

	for (int i = 0; i < n; i++) {
		parr[i] = rand() % 100 - rand() % 100;
	}
}

void printArray(const int *parr, const int n) {
	std::cout << "[ ";
	for (int i = 0; i < n; i++) {
		if (i == n - 1)
			std::cout << parr[i] << " ]" << std::endl;
		else
			std::cout << parr[i] << ", ";
	}
}

int sumArray(int *parr, const int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += parr[i];
	}
	return sum;
}

double averageArray(int *parr, const int n) {
	int sum = sumArray(parr, n);
	return double(sum) / n;
}

int sumPosArray(int *parr, const int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (parr[i] >= 0)
			sum += parr[i];
	}
	return sum;
}

int sumNegArray(int *parr, const int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (parr[i] < 0)
			sum += parr[i];
	}
	return sum;
}

int sumEvenIndArray(int *parr, const int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0)
			sum += parr[i];
	}
	return sum;
}

int sumOddIndArray(int *parr, const int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (i % 2 != 0)
			sum += parr[i];
	}
	return sum;
}

int minIndArray(int *parr, const int n) {
	int minInd = 0;
	for (int i = minInd + 1; i < n; i++) {
		if (parr[minInd] > parr[i])
			minInd = i;
	}
	return minInd;
}

int maxIndArray(int *parr, const int n) {
	int maxInd = 0;
	for (int i = maxInd + 1; i < n; i++) {
		if (parr[maxInd] < parr[i])
			maxInd = i;
	}
	return maxInd;
}

long multMinMaxArray(int *parr, const int n) {
	
	long mult = 1;
	int maxInd = maxIndArray(parr, n);
	
	//std::cout << "max " << maxInd << std::endl;
	
	int minInd = minIndArray(parr, n);
	
	//std::cout << "min " << minInd << std::endl;
	
	if (abs(maxInd - minInd) == 1)
		return mult;
	if (maxInd < minInd) {
		int temp = maxInd;
		maxInd = minInd;
		minInd = temp;
	}
	//std::cout << "min " << minInd << std::endl;
	//std::cout << "max " << maxInd << std::endl;

	while (minInd <= maxInd)
	{
		mult *= parr[minInd];
		//std::cout << mult << std::endl;
		minInd++;
	}
	return mult;
}

void sortArray(int* parr, const int n) {
	int min = 0;
	int buf = 0;

	for (int i = 0; i < n; i++)
	{
		min = i;
		for (int j = i + 1; j < n; j++)
			min = (parr[j] < parr[min]) ? j : min;
		if (i != min)
		{
			buf = parr[i];
			parr[i] = parr[min];
			parr[min] = buf;
		}
	}
}

bool from_min(const int a, const int b)
{
	return a > b;
}

bool from_max(const int a, const int b)
{
	return a < b;
}

void bubble_sort(int Arr[], const int N, bool (compare)(int a, int b))
{
	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < N - 1; j++)
		{
			if ((*compare)(Arr[j], Arr[j + 1])) 
				std::swap(Arr[j], Arr[j + 1]);
		}
	}
}

int* max_vector(const int len, const int* arr1, const int* arr2){
	int *a = new int[len]{};
	for (int i = 0; i < len; i++)
	{
		a[i] =  arr1[i] >= arr2[i]  ? arr1[i] : arr2[i];
	}

	return a;
}


int searchTranspose(const int len, int* arr, int searchKey) {
	int result = -1;
	
	for (int i = 0; i < len; i++)
	{
		if (arr[i] == searchKey) {
			if (i > 0) {
				std::swap(arr[i], arr[i - 1]);
				result = i - 1;
				return result;
			}
			else
			{
				result = i;
				return result;
			}
		}
	}
	return result;
}

int v_func(int num1, int num2, int (*some_func)(int a, int b)) {
	return some_func(num1, num2);
}

int some_sum(int a, int b) {
	return a + b;
}

int some_mult(int a, int b) {
	return a * b;
}

void mainProcessing(int argc, char** argv) {
	int arc = atoi(argv[1]); // 4
	if (argc - 2 == arc && !strncmp(argv[2], "v_func", 6)) {
		int a = atoi(argv[4]);
		int b = atoi(argv[5]);
		//std::cout << "a=" << a << ", b=" << b << std::endl;
		//int c = strncmp(argv[3], "-a", 2);
		//int d = strncmp(argv[3], "-m", 2);
		if (strncmp(argv[3], "-a", 2) == 0) {
			std::cout << a << " + " << b << " = " << v_func(a, b, some_sum) << std::endl;
		}
		else if (strncmp(argv[3], "-m", 2) == 0) {
			std::cout << a << " * " << b << " = " << v_func(a, b, some_mult) << std::endl;
		}
		else {
			std::cout << "Something wrong here - -a or -m" << std::endl;
		}

	}
	else {
		std::cout << "Something wrong here - v_func" << std::endl;
	}
}