#include <iostream>
#include <string>
#pragma once


template<typename T>
void sorting(T arr[], int size) {
	int j = 0;
	for (int i = 0; i < size; i++) {
		T x = arr[i];
		for (j = i - 1; j >= 0 && x < arr[j]; j--)
			arr[j + 1] = arr[j];
		arr[j + 1] = x;
	}
}

template <typename Tuple>
void printTupleOfThree(Tuple t)
{
	std::cout << "("
		<< std::get<0>(t) << ", "
		<< std::get<1>(t) << ", "
		<< std::get<2>(t) << ")" << std::endl;
}

template <typename T>
double arithmean(const T &arr, int size) {
	double summ = 0;
	for (int i = 0; i < size; i++)
	{
		summ += static_cast<double>(arr[i]);
	}
	return (summ / size);
}

template <typename T>
void Print(const T &arr, std::string sep) {
	for (auto item = arr.begin(); item != arr.end(); item++) {
		auto ending = item;
		if (++ending == arr.end())
			std::cout << *item ;
		else
			std::cout << *item << sep;
	}
	std::cout << std::endl;
}