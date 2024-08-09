#include <string>
#include <sstream>
#pragma once
class Human {
public:

	virtual void setInfo()
	{
		std::cout << "������� �������: ";
		std::cin >> last_name;
		std::cout << "������� ���: ";
		std::cin >> name;
		std::cout << "������� ��������: ";
		std::cin >> second_name;
	}

	virtual void getInfo()
	{
		std::ostringstream full_name;
		full_name << this->last_name << " "
			<< this->name << " "
			<< this->second_name;
		std::cout << full_name.str() << std::endl;
	}
private:
	std::string name; // ���
	std::string last_name; // �������
	std::string second_name; // ��������
};
