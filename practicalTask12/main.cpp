#include <vector>
#include <iostream>
#include <cmath>
#include <Windows.h>
#include "Student.h"
#include "Human.h"
#include "teacher.h"
#include "Item.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	////Практическое занятие 13
	//Item* pubarr[100];
	//int n = 0;
	//char choice;
	//do
	//{
	//	std::cout << "\nВводить данные для книги или звукового файла (b / a) ? ";
	//	std::cin >> choice;
	//	if (choice == 'b')
	//		pubarr[n] = new Paperbook;
	//	else
	//		pubarr[n] = new AudioBook;
	//
	//	pubarr[n++]->getdata();
	//
	//	std::cout << "Продолжать (у / n) ? ";
	//	std::cin >> choice;
	//} while (choice == 'y');
	//
	//for (int i = 0; i < n; i++)
	//{
	//	pubarr[i]->putdata();
	//	std::cout << std::endl;
	//}

	//Практическое занятие 13 контрольное занятие 1
	Human *stud = new Student();
	stud->setInfo();
	stud->getInfo();

	Human* teach = new Teacher();
	teach->setInfo();
	teach->getInfo();



	return 0;
}