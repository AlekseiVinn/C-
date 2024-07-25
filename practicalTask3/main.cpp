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

	////практика 3. упр.1
	//string name;
	//std::cout << "What is your name?" << std::endl;
	//std::cin >> name;
	//privet(name);

	////практика 3. упр.2
	//string name;
	//std::cout << "What is your name?" << std::endl;
	//std::cin >> name;
	//
	//int k;
	//std::cout << "Input number: ";
	//std::cin >> k;
	//privet(name, k);

	////практика 3. упр.3
	//double a;
	//int n;
	//std::cout << "введите число от 1 до 1000" << std::endl;
	//std::cin >> a;
	//std::cout << "введите число от 1 до 10" << std::endl;
	//std::cin >> n;

	//std::cout << firBinSearch(a, n);

	////практика 3. упр.4 задание 1
	//int num;
	//std::cout << "введите число: ";
	//std::cin >> num;
	//std::cout << addNumders(num);

	////практика 3. упр.4 задание 2
	//int num1, num2;
	//std::cout << "введите 2 числа для нахождения НОД: ";
	//std::cin >> num1 >> num2;
	//if (num1 > num2)
	//	std::cout << gcd(num1, num2);
	//else
	//	std::cout << gcd(num2, num1);

	////практика 3. контрольное задание 1
	//string snils;
	//std::cout << "введите снилс: ";
	//std::getline(std::cin,snils);
	//std::cout << std::boolalpha << snilsCheck(snils);

	////практика 3. контрольное задание 2
	//int cubeNum;
	//std::cout << "введите число для нахождения корня кубического: ";
	//std::cin >> cubeNum;
	//std::cout << std::fixed << std::setprecision(6);
	//std::cout << pow(cubeNum, 1.0/3) << std::endl;
	//std::cout <<  cubert(cubeNum) << std::endl;

	////практика 3. контрольное задание 3
	//int i;
	//std::cout << "Выберите тип треугольника: 1 - равносторонний, 2 - разносторонний: ";
	//std::cin >> i;
	//switch (i){
	//	case 1:{
	//		int side;
	//		std::cout << "Введите сторону равностороннего треугольника: ";
	//		std::cin >> side;
	//		std::cout << "Площадь равностороннего треугольника со стороной " << side << " = " << triArea(side);
	//		break;
	//	}
	//	case 2: {
	//		int side1, side2, side3;
	//		std::cout << "Введите сторону равностороннего треугольника: ";
	//		std::cin >> side1 >> side2 >> side3;
	//		std::cout << "Площадь равностороннего треугольника со сторонами " << side1 << "," << side2 << "," << side3 <<
	//			" = " << triArea(side1,side2,side3);
	//		break;
	//	}
	//}

	////практика 3. контрольное задание 4
	//int i;
	//std::cout << "Введите N для получения суммы ряда 'S = 5 + 10 + 15 + … + 5·n' : ";
	//std::cin >> i;
	//std::cout << "Сумма ряда = " << sumSeq(i);


	//практика 3. контрольное задание 5
	int i;
	std::cout << "Введите число для перевода в двоичную систему счисления: ";
	std::cin >> i;
	std::cout << "Binary = " << toBinary(i);

	return 0;
}
