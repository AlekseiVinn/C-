#include <iostream>
#include <string>
#pragma once

class Item
{
private:
	std::string title;
	double price;

public:
	virtual void getdata()
	{
		std::cout << "\n������� ��������� : ";
		std::cin >> title;
		std::cout << "������� ���� : ";
		std::cin >> price;
	}
	virtual void putdata()
	{
		std::cout << "\n���������: " << title;
		std::cout << "\n����: " << price;
	}

};


class Paperbook : public Item
{
public:
	void getdata() {
		Item::getdata();
		std::cout << "������� ����� �������: ";
		std::cin >> pages;
	}

	void putdata()
	{
		Item::putdata();
		std::cout << "\n�������: " << pages;
	}

private:
	int pages;
};


class AudioBook : public Item
{
public:
	void getdata() {
		Item::getdata();
		std::cout << "������� ����� ��������: ";
		std::cin >> time;
	}

	void putdata()
	{
		Item::putdata();
		std::cout << "\n����� ��������: " << time;
	}

private:
	double time;
};


