#include <string>
#include <sstream>
#pragma once
class Human {
public:

	virtual void setInfo()
	{
		std::cout << "¬ведите фамилию: ";
		std::cin >> last_name;
		std::cout << "¬ведите им€: ";
		std::cin >> name;
		std::cout << "¬ведите отчество: ";
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
	std::string name; // им€
	std::string last_name; // фамили€
	std::string second_name; // отчество
};
