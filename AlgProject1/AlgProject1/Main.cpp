//Ryan Slipher
// main.cpp
//CST_499 1/17/18

#include <iostream>
#include<string>


//forward declaration
//function prototype

int addTwo(int input);

int main(int argc, const char* argv[])
{
	std::string input = argv[1];
	std::cout << input << std::endl;

	char letter = 'A';
	int someInterger = 42;
	float somethingwithDecimals = 1.5f;
	double someReallylergeDecimal = 1e30;

	std::cout << "Hello, World!\n";
	std::cout << letter << std::endl;
	std::cout << someInterger << std:: endl;
	std::cout << somethingwithDecimals << std::endl;
	std::cout << someReallylergeDecimal << std::endl;

	std::cin.get();
	return 0;

}
int addTwo(int input)
{
	return input + 2;
}