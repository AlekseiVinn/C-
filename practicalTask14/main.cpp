#include <iostream>
#include <Windows.h>
#include <tuple>
#include <vector>
#include <string>
#include <iomanip>
#include <list>
#include <set>
#include "practise14.h"
#include "TuplePrinter.h"
#include "array.h"

int main() {
	////ѕрактическое зан€тие 14. упражнение 1.
	//int arr1[] = { 9,3,17,6,5,4,31,2,12 };
	//int size1 = sizeof(arr1) / sizeof(arr1[0]);
	//sorting(arr1, size1);
	//for (int i=0; i < size1; i++)
	//	std::cout << arr1[i] << ";";
	//std::cout << std::endl;
	//
	//double arr2[] = { 2.1, 2.3,1.7,6.6,5.3,2.44,3.1,2.4,1.2 };
	//int size2 = sizeof(arr2) / sizeof(arr2[0]);
	//sorting(arr2, size2);
	//for (int i = 0; i < size2; i++)
	//	std::cout << arr2[i] << ";";
	//std::cout << std::endl;
	//
	//char arr3[] = "Hello, word";
	//int size3 = sizeof(arr3) / sizeof(arr3[0]);
	//sorting(arr3, size3);
	//for (int i = 0; i < size3; i++)
	//	std::cout << arr3[i] << ";";
	//std::cout << std::endl;

	
	////ѕрактическое зан€тие 14. упражнение 2.
	//auto tuple = std::make_tuple(arr1[0], arr2[0], arr3[0]);
	//printTupleOfThree(tuple);


	////ѕрактическое зан€тие 14. упражнение 3.
	//std::vector<std::string> v1{ "one", "two", "three", "four", "five", "six" };
	//std::vector<int> v2 = { 1, 2, 3, 4, 5, 6 };
	//std::vector<float> v3 = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };
	//auto t1 = std::make_tuple(v1[0], v1[1], v3[0]);
	//auto t2 = std::make_tuple(v1[0], v1[1], v2[1], v3[0], v3[1]);
	//printTuple(t1);
	//printTuple(t2);


	////ѕрактическое зан€тие 14. упражнение 4.
	//arrays<int, long> numbers(100);
	//arrays<float, float> values(200);
	//
	//int i;
	//
	//for (i = 0; i < 50; i++) 
	//	numbers.add_value(i);
	//numbers.show_array();
	//std::cout << "Sum = " << numbers.sum() << std::endl;
	//std::cout << "Average = " << numbers.average_value() << std::endl;
	//
	//for (i = 0; i < 100; i++) 
	//	values.add_value(i * 100);
	//values.show_array();
	//std::cout << "Sum = " << values.sum() << std::endl;
	//std::cout << "Average = " << values.average_value() << std::endl;


	////ѕрактическое зан€тие 14 контрольное задание 1.
	//int iarr[] = { 1, 2, 3, 4, 5, 6, 9,3,17,6,5,4,31,2,12 };
	//int iarrSize = sizeof(iarr) / sizeof(iarr[0]);
	//double darr[] = { 2.1, 2.3,1.7,6.6,5.3,2.44,3.1,2.4,1.2 };
	//int darrSize = sizeof(darr) / sizeof(darr[0]);
	//char carr[] = "Hello, word, one, two, three, four, five, six";
	//int carrSize = sizeof(carr) / sizeof(carr[0]);
	//long larr[] = { 10006416513, 165165161321,546123132454,46896456313,1654161313876 };
	//int larrSize = sizeof(larr) / sizeof(larr[0]);
	//
	//std::cout << "Int array\t= " << arithmean(iarr, iarrSize) << std::endl;
	//std::cout << "Double array\t= " << arithmean(darr, darrSize) << std::endl;
	//std::cout << "Char array\t= " << arithmean(carr, carrSize) << std::endl;
	//std::cout << "Long array\t= " << std::setprecision(15) << arithmean(larr, larrSize) << std::endl;


	////ѕрактическое зан€тие 14 контрольное задание 2.
	//std::vector<float> v3 = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 3.3 };
	//Print(v3, "----");
	//
	//std::vector<int> v31 = {53,4512,3, -5, -6 };
	//Print(v31, "-*-");
	//
	//std::vector<char> v32 = { 'a', 'e', 't', 'r', '7' };
	//Print(v32, "...");
	//
	//std::list<std::string> v33 = { "Hello", "world", "!" };
	//Print(v33, "~~~~");
	//
	//std::set<int> v34 = { 10, 20, 30, 40, 50 };
	//Print(v34, " | ");

	return 0;
}