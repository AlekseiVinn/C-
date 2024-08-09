#include "IContact.h"



void IContact::setContact() {
	std::cout << "Введите телефон контакта: " << std::endl;
	getline(std::cin, this->contact);
}

void IContact::setSidenote() {
	std::cout << "Введите заметку по контакту: " << std::endl;
	/*getline(std::cin, this->sidenote);*/
	std::cin >> this->sidenote;
}



Organization::Organization() {
	//setName(); // некорректно работают
	/*setContact_name();
	setContact_lastname();
	setContact();*/

	std::cout << "Введите название организации: ";
	std::cin >> this->name;
	std::cout << "Введите имя сотрудника организации : ";
	std::cin >> this->contact_name;
	std::cout << "Введите фамилию сотрудника организации : ";
	std::cin >> this->contact_lastname;
	std::cout << "Введите телефон контакта: ";
	std::cin >> this->contact;

	char flag;
	std::cout << "Добавить заметку? Y/N: ";
	std::cin >> flag;
	if (std::tolower(flag) == 'y')
		setSidenote();
	else
		this->sidenote = std::string();
}


void Organization::setContact_name()
{
	std::cout << "Введите имя сотрудника организации : " << std::endl;
	std::cin >> this->contact_name;
}

void Organization::setContact_lastname()
{
	std::cout << "Введите фамилию сотрудника организации : " << std::endl;
	getline(std::cin, this->contact_lastname);
}



Person::Person() {
	//setName();
	//setLastname();
	//setContact();
	std::cout << "Введите имя контакта: ";
	std::cin >> this->name;
	std::cout << "Введите фамилию контакта: ";
	std::cin >> this->last_name;
	std::cout << "Введите телефон контакта: ";
	std::cin >> this->contact;


	char flag;
	std::cout << "Добавить заметку? Y/N: ";
	std::cin >> flag;
	if (std::tolower(flag) == 'y')
		setSidenote();
	else
		this->sidenote = std::string();
}

void Person::setLastname()
{
	std::cout << "Введите фамилию контакта: " << std::endl;
	getline(std::cin, this->last_name);
}
