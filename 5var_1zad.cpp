#include <iostream>
#include <string>
#include <cmath>

void personal_data(std::string model_monitor, std::string manufacturer, std::string monitor_diagonal, std::string response, std::string price_monitor)
{
	std::cout << "enter model monitor:"; std::cin >> model_monitor; std::cout << "\n";
	std::cout << "enter manufacturer:"; std::cin >> manufacturer; std::cout << "\n";
	std::cout << "enter monitor diagonal:"; std::cin >> monitor_diagonal; std::cout << "\n";
	std::cout << "enter response:"; std::cin >> response; std::cout << "\n";
	std::cout << "enter price monitor:"; std::cin >> price_monitor; std::cout << "\n";
	std::cout << model_monitor << "\n";
	std::cout << manufacturer << "\n";
	std::cout << monitor_diagonal << "\n";
	std::cout << response << "\n";
	std::cout << price_monitor << "\n";

}
int main()
{

#if 1
	std::string model_monitor = "";
	std::string manufacturer = "";
	std::string monitor_diagonal = "";
	std::string response = "";
	std::string price_monitor = "";

	personal_data(model_monitor, manufacturer, monitor_diagonal, response, price_monitor);
#endif
}