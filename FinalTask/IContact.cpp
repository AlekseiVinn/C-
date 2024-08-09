#include "IContact.h"



void IContact::setContact() {
	std::cout << "������� ������� ��������: " << std::endl;
	getline(std::cin, this->contact);
}

void IContact::setSidenote() {
	std::cout << "������� ������� �� ��������: " << std::endl;
	/*getline(std::cin, this->sidenote);*/
	std::cin >> this->sidenote;
}



Organization::Organization() {
	//setName(); // ����������� ��������
	/*setContact_name();
	setContact_lastname();
	setContact();*/

	std::cout << "������� �������� �����������: ";
	std::cin >> this->name;
	std::cout << "������� ��� ���������� ����������� : ";
	std::cin >> this->contact_name;
	std::cout << "������� ������� ���������� ����������� : ";
	std::cin >> this->contact_lastname;
	std::cout << "������� ������� ��������: ";
	std::cin >> this->contact;

	char flag;
	std::cout << "�������� �������? Y/N: ";
	std::cin >> flag;
	if (std::tolower(flag) == 'y')
		setSidenote();
	else
		this->sidenote = std::string();
}


void Organization::setContact_name()
{
	std::cout << "������� ��� ���������� ����������� : " << std::endl;
	std::cin >> this->contact_name;
}

void Organization::setContact_lastname()
{
	std::cout << "������� ������� ���������� ����������� : " << std::endl;
	getline(std::cin, this->contact_lastname);
}



Person::Person() {
	//setName();
	//setLastname();
	//setContact();
	std::cout << "������� ��� ��������: ";
	std::cin >> this->name;
	std::cout << "������� ������� ��������: ";
	std::cin >> this->last_name;
	std::cout << "������� ������� ��������: ";
	std::cin >> this->contact;


	char flag;
	std::cout << "�������� �������? Y/N: ";
	std::cin >> flag;
	if (std::tolower(flag) == 'y')
		setSidenote();
	else
		this->sidenote = std::string();
}

void Person::setLastname()
{
	std::cout << "������� ������� ��������: " << std::endl;
	getline(std::cin, this->last_name);
}
