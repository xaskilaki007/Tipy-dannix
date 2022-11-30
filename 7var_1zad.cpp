#include <iostream>
#include <string>
#include <cmath>

void personal_data(std::string fam, std::string nazv, std::string god, std::string janr, std::string price)
{
	std::cout << "enter fam:"; std::cin >> fam; std::cout << "\n";
	std::cout << "enter nazv:"; std::cin >> nazv; std::cout << "\n";
	std::cout << "enter god:"; std::cin >> god; std::cout << "\n";
	std::cout << "enter janr:"; std::cin >> janr; std::cout << "\n";
	std::cout << "enter price:"; std::cin >> price; std::cout << "\n";
	std::cout << fam << "\n";
	std::cout << nazv << "\n";
	std::cout << god << "\n";
	std::cout << janr << "\n";
	std::cout << price << "\n";

}
int main()
{

#if 1
	std::string fam = "";
	std::string nazv = "";
	std::string god = "";
	std::string janr = "";
	std::string price = "";

	personal_data(fam, nazv, god, janr, price);
#endif
}
