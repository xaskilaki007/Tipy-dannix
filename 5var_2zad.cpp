#include <iostream>
#include <string>
#include <cmath>


void calculation()
{
	float x = 0, k = 0, z=0, d=0;
	std::cin >> x;
	std::cin >> k;
	z = exp(-k)*(1/tan(k*x));
	d = log((pow(z,2)+pow(10,-3))/(pow(z,2)+(1,6*pow(10,-2))));
	std::cout << d <<"\n";
	std::cout << z;
}
int main()
{

	calculation();
}