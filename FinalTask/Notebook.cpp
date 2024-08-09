#include "Notebook.h"

void Notebook::addContact()
{
	std::cout << "�������� ��� ��������, ������� ������ ��������:" << std::endl;
	std::cout << "1 - �������� ����������" << std::endl;
	std::cout << "2 - �������� ��������" << std::endl;
	int flag;
	std::cin >> flag;
	if (flag == 1) {
		contactCreator = new OrganizationFactory;
		IContact *contact = contactCreator->CreateContact();
		contacts.push_back(contact);

		std::cout << "������� ��������:" << std::endl;
		contact->getInfo();
		//delete contact;

		clearScreen();
	}
	else if (flag == 2)
	{
		contactCreator = new PersonFactory;
		IContact* contact = contactCreator->CreateContact();
		contacts.push_back(contact);

		std::cout << "������� ��������:" << std::endl;
		contact->getInfo();
		//delete contact;
		
		clearScreen();
	}
	else
	{
		std::cout << "������� �� ��������. ";
		clearScreen();

	}


	delete contactCreator;

}

void Notebook::saveToFile() {
	if (contacts.size() == 0)
		std::cout << "������ �������� � �������� �����." << std::endl;
	else {
		std::fstream file;
		file.open("Notebook.txt", std::fstream::out | std::fstream::app);
		if (file.is_open()) {
			for (IContact* item : contacts) {
				file << item->toSaveInfo() << std::endl;
			}
			file.close();
			std::cout << "�������� ����� ���������." << std::endl;
		}
		else {
			std::cerr << "Unable to open file" << std::endl;
		}
	}
	contacts.clear();
	clearScreen();
};

void Notebook::readFromFile() {
	std::string line;
	std::ifstream file("Notebook.txt");
	if (file.is_open()) {
		while (getline(file, line))
		{
			std::cout << line << std::endl;
		}
		file.close();

		std::cout << " ---- �������� ����� ��������� ---- " << std::endl;
	}
	else {
		std::cerr << "Unable to open file" << std::endl;
	}
	clearScreen();
}