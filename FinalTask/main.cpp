#include <iostream>
#include <exception>
#include <iostream>
#include <windows.h>
#include "Notebook.h"


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	Notebook *notes = new Notebook();

	int flag;

	while (true) {
		menu();
		
		std::cin >> flag;
	
		switch (flag)
		{
		case 1:
			std::cout << "\n���������� �������� ����� ....\n";
			notes->readFromFile();
			break;
		case 2:
			notes->addContact();
			break;
		case 3:
			std::cout << "���������� ���������� � ���� ....";
			notes->saveToFile();
			break;
		case 4:
			std::cout << "���������� �������� ���������....";
			delete notes;
			clearScreen();
			return 0;
		default:
			std::cout << "������� �� ����������";
			clearScreen();
			break;
		}
	}
}
