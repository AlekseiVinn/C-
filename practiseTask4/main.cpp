#include<iostream>
#include<ctime>
#include<Windows.h>
#include "practise4.h"

int main() {
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	////�������� 4 ���. 1
	//double k = 2.5;
	//double xv = 10;
	//double yv = 10;
	//print(xv, yv);
	//fum_value(k, xv, yv); // �������� � ������� �������� ���������
	//print(xv, yv);
	//fum_ptr(k, &xv, &yv); // �������� � ������� ��������� ���������
	//print(xv, yv);
	//fum_ref(k, xv, yv); // �������� � ������� ��������� ������
	//print(xv, yv);

	////�������� 4 ���. 2
	//int x = 5, y = 10;
	//print(x, y);
	//swap(&x, &y);
	//print(x, y);
	//swap(x, y);
	//print(x, y);

	//������������ 4. ����������� ������� 1
	srand(time(0));
	double a = rand() % 20 - rand() % 20;
	double b = rand() % 100 - rand() % 100;
	double c = rand() % 100 - rand() % 100;
	double x1 = NULL;
	double x2 = NULL;
	std::cout << "������� ���������� ���������: " << a << "x^2 + " << b << "x + " << c << " = 0" << std::endl;
	int result = Myroot(a, b, c, x1, x2);
	switch (result) {
		case 1: {
			std::cout << "������� 2 ����� ���������: �1 = " << x1 << ", �2 = " << x2 << std::endl;
			break;
		}
		case 0: {
			std::cout << "������ 1 ������� ���������: �1 = �2 = " << x1 << ", (" << x2 << ")" << std::endl;
			break;
		}
		case -1: {
			std::cout << "����� ��������� �� �������."<< std::endl;
			//std::cout << "" << x1 << "" << x2 << std::endl;
			break;
		}
	}

	//������������ 4. ����������� ������� 2
	int a3, b3;
	if (!Input(a3, b3)) 
	{
		std::cerr << "error";
		return 1;
	}
	int s = a3 + b3;
	std::cout << "s = " << s << std::endl;

	return 0;
}