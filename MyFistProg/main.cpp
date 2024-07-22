#include <string>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <windows.h>
#include <windef.h>


void task1() {
	std::string name;
	std::cout << "��� ��� �����?\t-";
	//std::cin >> name;
	getline(std::cin, name);
	std::cout << "������������, " << name << std::endl;
}

void task2() {
	double a, b;
	std::string textsample;
	std::cout << "������� �, textsample(text) � b: " << std::endl;
	std::cin >> a >> textsample >> b;
	
	double x = a / b;
	std::cout.precision(20);
	std::cout << "a / b => \tx = " << x << std::endl;
	std::cout << "Size of (a / b): " << sizeof(a/b) << std::ends << " Size of x: " << sizeof(x) << std::endl;
	std::cout << "textsample --- " << textsample << std::endl;
}

void task3() {
	std::cout << "������� �������� ��������������� ������������: ";
	double perimetr;
	std::cin >> perimetr;
	
	
	double side = perimetr / 3;
	double halfP = perimetr / 2;
	double area = sqrt(halfP * pow((halfP - side), 3));
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "������� \t�������" << std::endl;
	std::cout << side << "\t\t" << area << std::endl;
}


void control_task1() {
	std::cout << "������� 5 ����� �������������: \n";
	
	POINT points[5];
	for (int i = 0; i < 5; i++)	{
		int a, b;
		std::cout << "������� " << i + 1 << " �����: ";
		std::cin >> a >> b;
		points[i] = POINT{ a,b };
	/*	std::cout << points[i].x << points[i].y;*/
	}

	std::cout << "������������ ������" << std::endl;
	double area = 0;
	for (int i = 0; i < 5; i++)	{
		std::cout << i+1 << " �����: (" << points[i].x << ", " << points[i].y << ");\n";
		
		if (i == 4) {
			area = area + (points[i].x * points[0].y - points[0].x * points[i].y);
		}
		else {
			area = area + (points[i].x * points[i + 1].y - points[i+1].x * points[i].y);
		}
	}
	area = 0.5 * abs(area);
	std::cout << area << std::endl;
}

int main(){
	//system("chcp 1251"); //����������� ����������� �������, ����� 1 
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	////�������� 1 ���������� 1
	//task1();

	////�������� 1 ���������� 2
	//task2();

	////�������� 1 ���������� 3
	//task3();

	//�������� 1 ����������� ���������� 1
	control_task1();
	return 0;
}