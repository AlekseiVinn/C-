#include <iostream>
#include <Windows.h>
//#include <typeinfo>
#include <cstring>
#include "practise5.h"


int main(int argc, char **argv) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	////Практическое занятие 5, контрольное задание 1
	//const int n = 10;
	//int mas[n];
	//fillArray(mas, n);
	//std::cout << "Массив:" << std::endl;
	//printArray(mas, n);
	//std::cout << "Сумма массива = " << sumArray(mas,n) <<std::endl;
	//std::cout << "Среднее массива = " << averageArray(mas, n) << std::endl;
	//std::cout << "Сумма отрицательных элементов массива = " << sumNegArray(mas, n) << std::endl;
	//std::cout << "Сумма положительных элементов массива = " << sumPosArray(mas, n) << std::endl;
	//std::cout << "Сумма элементов с нечетными индексами = " << sumOddIndArray(mas, n) << std::endl;
	//std::cout << "Сумма элементов с четными индексами = " << sumEvenIndArray(mas, n) << std::endl;
	//std::cout << "Индекс максимального элемента массива = " << maxIndArray(mas, n) << std::endl;
	//std::cout << "Индекс минимального элемента массива = " << minIndArray(mas, n) << std::endl;
	//std::cout << "Произведение элементов массива между максимальным и минимальным элементами = " << multMinMaxArray(mas, n) << std::endl;

	//int sortOptionKey = 0;
	//bool (*from_f[2])(int, int) = { from_min,from_max };
	//std::cout << "Выберите:\n1 -  Сортировать по возрастанию\n2 - Сортировать по убыванию" << std::endl;
	//std::cin >> sortOptionKey;
	//std::cout << "Отсортированный массив:" << std::endl;
	//bubble_sort(mas, n, from_f[sortOptionKey - 1]);
	//printArray(mas, n);


	////Практическое занятие 5, контрольное задание 2
	//int a[] = { 1,2,3,4,5,6,7,2 };
	//int b[] = { 7,6,5,4,3,2,1,3 };
	//int kc = sizeof(a) / sizeof(a[0]); //Количество элементов массива

	//int* c; //Указатель на результирующий массив
	//c = max_vector(kc, a, b); //вызов функции для создания массива
	//printArray(c, kc);

	//delete[]c; //Возврат памяти.


	////Практическое занятие 5, контрольное задание 3
	//const int n = 10;
	//int masInt[n];
	//fillArray(masInt, n);
	//std::cout << "Массив чисел:" << std::endl;
	//printArray(masInt, n);
	//int searchNum = masInt[rand() % 10];
	//std::cout << "Индекс искомого числа " << searchNum << " с учетом перестановки после поиска = " 
	//	<< searchTranspose(n, masInt, searchNum) << std::endl;
	//printArray(masInt, n);


	////Практическое занятие 5, контрольное задание 4
	///*
	//аргументы для main задал через свойства проекта
	//argc = 6 аргументов всего
	//
	//0 - E:\C++\practicalTask5\x64\Debug\practicalTask5.exe - путь вызова
	//1 - 4  - количество аргументов для фунции main
	//2 - v_func - аргументы функции main
	//3 - -a 
	//4 - 15 
	//5 - 16 
	//*/

	//mainProcessing(argc, argv);

	return 0;
}