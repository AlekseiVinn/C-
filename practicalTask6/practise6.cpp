#include <cmath>
#include <fstream>
#include <iostream>
#include <string>

#include "practise6.h"


int createVerse(std::string name) {
	std::fstream note(name, std::ios::out);
	if (!note) {
		std::cout << "Файл открыть невозможно" << std::endl;
		return 1;
	}
	std::cout << "Файл " << name << "открыт для записи текста (255 символов):" << std::endl;
	char text[255];
	std::cin.getline(text, 255, '\\n');
	note << text;
	note.close();
	std::cout << "Достигнуть максимум символов. Текст записан в файл " << name << "." << std::endl;
	return 0;
}

void fillArray(int* parr, const int n) {
	srand(time(0));
	int len = sizeof(parr);
	int el = sizeof(parr[0]);

	for (int i = 0; i < n; i++) {
		parr[i] = rand() % 100 - rand() % 100;
	}
}

void printArray(const int* parr, const int n) {
	std::cout << "[ ";
	for (int i = 0; i < n; i++) {
		if (i == n - 1)
			std::cout << parr[i] << " ]" << std::endl;
		else
			std::cout << parr[i] << ", ";
	}
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

int saveArrToFile(const int N, const int *parr, std::string name) {
	std::fstream fArr(name, std::ios::out | std::ios::app);
	if (!fArr) {
		std::cout << "Файл " << name << " открыть невозможно" << std::endl;
		return 1;
	}
	
	fArr << "[ ";
	for (int i = 0; i < N; i++) {
		if (i == N - 1)
			fArr << parr[i] << " ]" << std::endl;
		else
			fArr << parr[i] << ", ";
	}
	fArr.close();
	std::cout << "Массив записан в файл " << name << "." << std::endl;
	return 0;
}

