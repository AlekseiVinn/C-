#include "DivideByZeroError.h"

float quotient(int numl, int num2) {
	if (num2 == 0) 
		throw DivideByZeroError(); 
	return (float)numl / num2; 
}