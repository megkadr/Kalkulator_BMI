#include <iostream>
#include <vector>
#include <string>

int main()
{
	double w, bmi = 0;
	double m;
	unsigned short int t;
	std::string name;
	std::cin >> t;
	std::vector<std::string> s1;
	std::vector<std::string> s2;
	std::vector<std::string> s3;
	while (t--)
	{
		std::cin >> name >> m >> w;
		bmi = (m / (w * w)) * 10000;
		if (bmi < 18.5)
		{
			s1.push_back(name);
		}
		else if (bmi > 18.5 && bmi < 25)
		{
			s2.push_back(name);
		}
		else
		{
			s3.push_back(name);
		}
	}
	std::cout << "niedowaga" << std::endl;
	for (auto& i : s1)
	{
		std::cout << i << std::endl;
	}
	std::cout << std::endl << std::endl;
	std::cout << "wartosc prawidlowa" << std::endl;
	for (auto& i : s2)
	{
		std::cout << i << std::endl;
	}
	std::cout << std::endl << std::endl;
	std::cout << "nadwaga" << std::endl;
	for (auto& i : s3)
	{
		std::cout << i << std::endl;
	}
}
