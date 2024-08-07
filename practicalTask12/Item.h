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
		std::cout << "\nВведите заголовок : ";
		std::cin >> title;
		std::cout << "Введите цену : ";
		std::cin >> price;
	}
	virtual void putdata()
	{
		std::cout << "\nЗаголовок: " << title;
		std::cout << "\nЦена: " << price;
	}

};


class Paperbook : public Item
{
public:
	void getdata() {
		Item::getdata();
		std::cout << "Введите число страниц: ";
		std::cin >> pages;
	}

	void putdata()
	{
		Item::putdata();
		std::cout << "\nСтраниц: " << pages;
	}

private:
	int pages;
};


class AudioBook : public Item
{
public:
	void getdata() {
		Item::getdata();
		std::cout << "Введите время звучания: ";
		std::cin >> time;
	}

	void putdata()
	{
		Item::putdata();
		std::cout << "\nВремя звучания: " << time;
	}

private:
	double time;
};


