#include <iostream>

int main()
{
	int sum = 0;

	for (int num = 1; num <= 100; num++)
	{
		sum += num;
	}

	std::cout << "The sum of 100 first numbers is " << sum << "\n";
	
	system("PAUSE");
}