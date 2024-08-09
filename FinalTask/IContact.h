#include <string>
#include <iostream>
#pragma once
class IContact
{
public:
	virtual void getInfo() =0;
	virtual std::string toSaveInfo() = 0;

protected:
	std::string name;
	std::string contact;
	std::string sidenote;
	virtual void setName() = 0;
	virtual void setContact();
	virtual void setSidenote();
};

class Organization: public IContact
{
public:
	Organization();
	
	void getInfo() override {
		std::cout << "Организация: " << this->name << std::endl;
		std::cout << "\tПредставитель организации: " << this->contact_lastname << " " << this->contact_name << std::endl;
		std::cout << "\tТелефон : " << this->contact << std::endl;
		std::cout << "\tЗаметка: " << this->sidenote << std::endl;
	}

	std::string toSaveInfo() override {
		std::string result = "Организация: " + this->name + "\n\tПредставитель организации: " +
			this->contact_lastname + " " + this->contact_name + "\n\tТелефон : " + 
			this->contact + "\n\tЗаметка: " + this->sidenote + "\n\n";
		return result;
	}

private:
	std::string contact_name;
	std::string contact_lastname;

	void setName() override {
		std::cout << "Введите название организации: " << std::endl;
		getline(std::cin, this->name);
	}

	void setContact_name();
	void setContact_lastname();

};


class Person : public IContact
{
public:
	Person();
	
	void getInfo() override
	{
		std::cout << "Контакт: " << this->last_name << " " << this->name << std::endl;
		std::cout << "\tТелефон : " << this->contact << std::endl;
		std::cout << "\tЗаметка: " << this->sidenote << std::endl;
	}

	std::string toSaveInfo() override {
		std::string result = "Контакт: " + this->last_name + " " + this->name + 
			"\n\tТелефон : " + this->contact + "\n\tЗаметка: " + this->sidenote + "\n\n";
		return result;
	}

private:
	std::string last_name;
	
	void setLastname();
	void setName() override {
		std::cout << "Введите имя контакта: " << std::endl;
		getline(std::cin, this->name);
	}

};