#include <iostream>
#include <tuple>
#include <vector>

#pragma once

template<class Tuple, std::size_t N>
struct TuplePrinter {
	static void print(const Tuple& T) {
		TuplePrinter<Tuple, N - 1>::print(T);
		std::cout << ", " << std::get<N - 1>(T);
	}
};

template<class Tuple>
struct TuplePrinter<Tuple, 1> {
	static void print(const Tuple& t)
	{
		std::cout << std::get<0>(t);
	}
};

template<class... Args>
void printTuple(const std::tuple<Args...>& t)
{
	std::cout << sizeof...(Args) << "(";
	std::cout << "(";
	TuplePrinter<decltype(t), sizeof...(Args)>::print(t);
	std::cout << ")" << std::endl;
}