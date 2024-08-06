#include <iostream>

#pragma once
class DivideByZeroError
{
public: 
	DivideByZeroError() : message("Деление на нуль") { };
	void printMessage() const { 
		std::cout << message << std::endl; 
	} 

private: 
	std::string message;
};

float quotient(int, int);
