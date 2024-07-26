#include<iostream>
#include<ctime>
#include<Windows.h>
#include "practise4.h"

int main() {
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	////Практика 4 упр. 1
	//double k = 2.5;
	//double xv = 10;
	//double yv = 10;
	//print(xv, yv);
	//fum_value(k, xv, yv); // Передача в функцию обычного параметра
	//print(xv, yv);
	//fum_ptr(k, &xv, &yv); // Передача в функцию параметра указателя
	//print(xv, yv);
	//fum_ref(k, xv, yv); // Передача в функцию параметра ссылки
	//print(xv, yv);

	////Практика 4 упр. 2
	//int x = 5, y = 10;
	//print(x, y);
	//swap(&x, &y);
	//print(x, y);
	//swap(x, y);
	//print(x, y);

	//Практическая 4. контрольное задание 1
	srand(time(0));
	double a = rand() % 20 - rand() % 20;
	double b = rand() % 100 - rand() % 100;
	double c = rand() % 100 - rand() % 100;
	double x1 = NULL;
	double x2 = NULL;
	std::cout << "Имеется квадратное уравнение: " << a << "x^2 + " << b << "x + " << c << " = 0" << std::endl;
	int result = Myroot(a, b, c, x1, x2);
	switch (result) {
		case 1: {
			std::cout << "Найдены 2 корня уравнения: х1 = " << x1 << ", х2 = " << x2 << std::endl;
			break;
		}
		case 0: {
			std::cout << "Найден 1 корнень уравнения: х1 = х2 = " << x1 << ", (" << x2 << ")" << std::endl;
			break;
		}
		case -1: {
			std::cout << "Корни уравнения не найдены."<< std::endl;
			//std::cout << "" << x1 << "" << x2 << std::endl;
			break;
		}
	}

	//Практическая 4. контрольное задание 2
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