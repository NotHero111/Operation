#include <iostream>

int main()
{
	std::cout << "task1" << std::endl;

	int a{ 14 };
	int b{ a - 10 };
	int c { b * 4 };
	int d  { c - b + 2 };
	float x;
	x = static_cast <float>  (a) * (b + (c / d));

	std::cout << a << std::endl << b << std::endl;

	std::cout << c << std::endl << d << std::endl;

	std::cout << x << std::endl;



	int k, temp;

	std::string myText;

	const short int NUM21 = 21;

	std::cout << "task2" << std::endl;

	std::cout << "Enter your number = : ";
	std::cin >> k;

	myText = "check number = ";

	k >= 21 ? temp = (k - NUM21) * 2 : temp = (k - NUM21);

	std::cout << myText << temp << std::endl;

	return 0;
}