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
	
	////������������ ������� 12
	//std::vector<int> grades;
	//
	//for (int i = 0; i < 9; i++)
	//{
	//	grades.push_back(rand() % 6);
	//}
	//
	//Student *stud = new Student("������", "����", "���������", grades);
	//std::cout << stud->get_full_name() << std::endl;
	//std::cout << "������� ���� : " << stud->get_average_score() << std::endl;
	//
	//unsigned int teach_time = 40;
	//Teacher *teach1 = new Teacher("�������", "�������", "��������", teach_time);
	//
	//std::cout << teach1->get_full_name() << std::endl;
	//std::cout << "���������� �����: " << teach1->get_work_time() << std::endl;


	////������������ ������� 13
	//Item* pubarr[100];
	//int n = 0;
	//char choice;
	//do
	//{
	//	std::cout << "\n������� ������ ��� ����� ��� ��������� ����� (b / a) ? ";
	//	std::cin >> choice;
	//	if (choice == 'b')
	//		pubarr[n] = new Paperbook;
	//	else
	//		pubarr[n] = new AudioBook;
	//
	//	pubarr[n++]->getdata();
	//
	//	std::cout << "���������� (� / n) ? ";
	//	std::cin >> choice;
	//} while (choice == 'y');
	//
	//for (int i = 0; i < n; i++)
	//{
	//	pubarr[i]->putdata();
	//	std::cout << std::endl;
	//}


	return 0;
}