#include <cmath>
#include <fstream>
#include <iostream>
#include <Windows.h>
#include "practise6.h"


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	////������������ ������� 6 ���������� 1.
	//double sum = 0;
	//int const n = 100;
	//double nums[n];
	//for (int i = 0; i < n; i++)
	//{
	//	nums[i] = rand() % 100;
	//}
	//
	//std::ofstream out("text", std::ios::out | std::ios::binary);
	//if (!out) {
	//	std::cout << "���� ������� ����������" << std::endl;
	//	return 1;
	//}
	//	
	//out.write((char*)nums,sizeof(nums));
	//out.close();
	//std::ifstream in("text", std::ios::in | std::ios::binary);
	//if (!in) {
	//	std::cout << "���� ������� ����������";
	//	return 1;
	//}
	//
	//in.read((char*)nums, sizeof(nums));
	//int k = sizeof(nums) / sizeof(double);
	//for (int i = 0; i < k; i++)
	//{
	//	sum = sum + nums[i];
	//	std::cout << nums[i] << ' ';
	//}
	//std::cout << "\nsum = " << sum << std::endl;
	//in.close();


	////������������ ������� 6, ����������� ������� 1.
	//std::cout << "������� �������� �����: ";
	//std::string name;
	//std::cin >> name;
	//name.append(".txt");
	//createVerse(name);

	//������������ ������� 6, ����������� ������� 2.
	const int n = 10;
	int *masInt = new int[n];
	fillArray(masInt, n);
	std::cout << "������ �����:" << std::endl;
	printArray(masInt, n);
	saveArrToFile(n, masInt);

	std::cout << "��������������� ������: " << std::endl;
	sortArray(masInt, n);
	printArray(masInt, n);
	saveArrToFile(n, masInt);


	//std::fstream fArr ("massive.txt", std::ios::out);
	//if (!fArr) {
	//	std::cout << "�� ���������� ������� ���� ��� ������!" << std::endl;
	//}

	//fArr << "[ ";
	//for (int i = 0; i < n; i++) {
	//	if (i == n - 1)
	//		fArr << masInt[i] << " ]" << std::endl;
	//	else
	//		fArr << masInt[i] << ", ";
	//}
	//fArr.close();
	//delete masInt;

	
	return 0;
}