#include <iostream>
#include <vector>
double algebraic_sum()
{
	double z, b, a, betta, summa;
	std::cout << "Enter value(z,b,a): \n" << "Z = ";
	std::cin >> z;
	std::cout << "B = ";
	std::cin >> b;
	std::cout << "A = ";
	std::cin >> a;
	std::cout << "Betta = ";
	std::cin >> betta;
	summa = (z * z * z) - b + (a * a) / (tan(betta) * tan(betta));

	
	return summa;
}


int main()
{
	std::cout << "find by the formula - " << "Y = X1 + X2 + … + Xn \t" << "X = Z^3 - B + A^2 / tg^2\n";
	std::vector<double> ixi;
	int x;
	double y = 0;
	std::cout << "Enter x - ";
	std::cin >> x;
	for (x != 0; x--;)
	{
		ixi.push_back(algebraic_sum());
	}
	for (int i = 0; i < ixi.size(); i++)
	{
		y += ixi[i];
	}
	std::cout <<"Y = " << y;
}