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
		std::cout << "�����������: " << this->name << std::endl;
		std::cout << "\t������������� �����������: " << this->contact_lastname << " " << this->contact_name << std::endl;
		std::cout << "\t������� : " << this->contact << std::endl;
		std::cout << "\t�������: " << this->sidenote << std::endl;
	}

	std::string toSaveInfo() override {
		std::string result = "�����������: " + this->name + "\n\t������������� �����������: " +
			this->contact_lastname + " " + this->contact_name + "\n\t������� : " + 
			this->contact + "\n\t�������: " + this->sidenote + "\n\n";
		return result;
	}

private:
	std::string contact_name;
	std::string contact_lastname;

	void setName() override {
		std::cout << "������� �������� �����������: " << std::endl;
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
		std::cout << "�������: " << this->last_name << " " << this->name << std::endl;
		std::cout << "\t������� : " << this->contact << std::endl;
		std::cout << "\t�������: " << this->sidenote << std::endl;
	}

	std::string toSaveInfo() override {
		std::string result = "�������: " + this->last_name + " " + this->name + 
			"\n\t������� : " + this->contact + "\n\t�������: " + this->sidenote + "\n\n";
		return result;
	}

private:
	std::string last_name;
	
	void setLastname();
	void setName() override {
		std::cout << "������� ��� ��������: " << std::endl;
		getline(std::cin, this->name);
	}

};