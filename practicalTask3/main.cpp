#include <iostream>
#include <string>
#include <cmath>
using std::string;
#include <Windows.h>
#include <iomanip>

#include "practice3.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	////�������� 3. ���.1
	//string name;
	//std::cout << "What is your name?" << std::endl;
	//std::cin >> name;
	//privet(name);

	////�������� 3. ���.2
	//string name;
	//std::cout << "What is your name?" << std::endl;
	//std::cin >> name;
	//
	//int k;
	//std::cout << "Input number: ";
	//std::cin >> k;
	//privet(name, k);

	////�������� 3. ���.3
	//double a;
	//int n;
	//std::cout << "������� ����� �� 1 �� 1000" << std::endl;
	//std::cin >> a;
	//std::cout << "������� ����� �� 1 �� 10" << std::endl;
	//std::cin >> n;

	//std::cout << firBinSearch(a, n);

	////�������� 3. ���.4 ������� 1
	//int num;
	//std::cout << "������� �����: ";
	//std::cin >> num;
	//std::cout << addNumders(num);

	////�������� 3. ���.4 ������� 2
	//int num1, num2;
	//std::cout << "������� 2 ����� ��� ���������� ���: ";
	//std::cin >> num1 >> num2;
	//if (num1 > num2)
	//	std::cout << gcd(num1, num2);
	//else
	//	std::cout << gcd(num2, num1);

	////�������� 3. ����������� ������� 1
	//string snils;
	//std::cout << "������� �����: ";
	//std::getline(std::cin,snils);
	//std::cout << std::boolalpha << snilsCheck(snils);

	////�������� 3. ����������� ������� 2
	//int cubeNum;
	//std::cout << "������� ����� ��� ���������� ����� �����������: ";
	//std::cin >> cubeNum;
	//std::cout << std::fixed << std::setprecision(6);
	//std::cout << pow(cubeNum, 1.0/3) << std::endl;
	//std::cout <<  cubert(cubeNum) << std::endl;

	////�������� 3. ����������� ������� 3
	//int i;
	//std::cout << "�������� ��� ������������: 1 - ��������������, 2 - ��������������: ";
	//std::cin >> i;
	//switch (i){
	//	case 1:{
	//		int side;
	//		std::cout << "������� ������� ��������������� ������������: ";
	//		std::cin >> side;
	//		std::cout << "������� ��������������� ������������ �� �������� " << side << " = " << triArea(side);
	//		break;
	//	}
	//	case 2: {
	//		int side1, side2, side3;
	//		std::cout << "������� ������� ��������������� ������������: ";
	//		std::cin >> side1 >> side2 >> side3;
	//		std::cout << "������� ��������������� ������������ �� ��������� " << side1 << "," << side2 << "," << side3 <<
	//			" = " << triArea(side1,side2,side3);
	//		break;
	//	}
	//}

	////�������� 3. ����������� ������� 4
	//int i;
	//std::cout << "������� N ��� ��������� ����� ���� 'S = 5 + 10 + 15 + � + 5�n' : ";
	//std::cin >> i;
	//std::cout << "����� ���� = " << sumSeq(i);


	//�������� 3. ����������� ������� 5
	int i;
	std::cout << "������� ����� ��� �������� � �������� ������� ���������: ";
	std::cin >> i;
	std::cout << "Binary = " << toBinary(i);

	return 0;
}
