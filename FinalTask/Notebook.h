#include <list>
#include <fstream>
#include "IContactFactory.h"
#include "IContact.h"
#pragma once

static void clearScreen() {
	char c;
	std::cout << "������� ����� ������, ����� ����������..." << std::endl;
	std::cin >> c;
	system("cls");
}

static void menu() {
	std::cout << "1 - ������� �������� ����� (����������� ��������� ������ � Notebook.txt): " << std::endl;
	std::cout << "2 - �������� ������ � �������� �����: " << std::endl;
	std::cout << "3 - ��������� ��������� ������ � �������� ����� (��������� ��������� ����, �������� �������� � ������): " << std::endl;
	std::cout << "4 - ������� ���������" << std::endl;
	std::cout << "----------------------------------------------------------" << std::endl;
	std::cout << "\n������� ����� �������: ";
}

class Notebook
{
public:
	void addContact();

	void saveToFile(); 

	void readFromFile();
	
private:
	std::list<IContact*> contacts;
	IContactFactory *contactCreator;
};

