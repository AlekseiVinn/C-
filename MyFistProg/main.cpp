#include <string>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <windows.h>
#include <windef.h>


void task1() {
	std::string name;
	std::cout << "Как вас зовут?\t-";
	//std::cin >> name;
	getline(std::cin, name);
	std::cout << "Здравствуйте, " << name << std::endl;
}

void task2() {
	double a, b;
	std::string textsample;
	std::cout << "Введите а, textsample(text) и b: " << std::endl;
	std::cin >> a >> textsample >> b;
	
	double x = a / b;
	std::cout.precision(20);
	std::cout << "a / b => \tx = " << x << std::endl;
	std::cout << "Size of (a / b): " << sizeof(a/b) << std::ends << " Size of x: " << sizeof(x) << std::endl;
	std::cout << "textsample --- " << textsample << std::endl;
}

void task3() {
	std::cout << "Введите периметр равностороннего треугольника: ";
	double perimetr;
	std::cin >> perimetr;
	
	
	double side = perimetr / 3;
	double halfP = perimetr / 2;
	double area = sqrt(halfP * pow((halfP - side), 3));
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Сторона \tПлощадь" << std::endl;
	std::cout << side << "\t\t" << area << std::endl;
}


void control_task1() {
	std::cout << "введите 5 точек пятиугольника: \n";
	
	POINT points[5];
	for (int i = 0; i < 5; i++)	{
		int a, b;
		std::cout << "Введите " << i + 1 << " точку: ";
		std::cin >> a >> b;
		points[i] = POINT{ a,b };
	/*	std::cout << points[i].x << points[i].y;*/
	}

	std::cout << "Пятиугольник создан" << std::endl;
	double area = 0;
	for (int i = 0; i < 5; i++)	{
		std::cout << i+1 << " точка: (" << points[i].x << ", " << points[i].y << ");\n";
		
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
	//system("chcp 1251"); //подключение русификации консоли, метод 1 
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	////Практика 1 упражнение 1
	//task1();

	////Практика 1 упражнение 2
	//task2();

	////Практика 1 упражнение 3
	//task3();

	//Практика 1 контрольное упражнение 1
	control_task1();
	return 0;
}