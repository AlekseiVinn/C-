#include <list>
#include <fstream>
#include "IContactFactory.h"
#include "IContact.h"
#pragma once

static void clearScreen() {
	char c;
	std::cout << "Введите любой символ, чтобы продолжить..." << std::endl;
	std::cin >> c;
	system("cls");
}

static void menu() {
	std::cout << "1 - Открыть адресную книгу (просмотреть имеющиеся записи в Notebook.txt): " << std::endl;
	std::cout << "2 - Добавить запись в адресную книгу: " << std::endl;
	std::cout << "3 - Сохранить сделанные записи в адресной книге (очищается временный файл, хранящий контакты в памяти): " << std::endl;
	std::cout << "4 - закрыть программу" << std::endl;
	std::cout << "----------------------------------------------------------" << std::endl;
	std::cout << "\nВведите номер команды: ";
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

