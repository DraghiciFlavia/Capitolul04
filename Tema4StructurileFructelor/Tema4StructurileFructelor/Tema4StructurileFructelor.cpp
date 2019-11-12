// Tema4StructurileFructelor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
enum Tip{mere=1, pere, kivi,mure};
struct Produs {
	Tip tipProdus;
	float cantitate;
	float pret;
};

int main()
{
	int n;
	Produs produs[3];
	int stocFructe = 458;

	for (int p = 0; p < 3; ++p)
	{

		std::cout << "Introduceti tipul fructului(1-mere,2-pere,3-kivi,4-mure)\n ";
		std::cin >> n;
		produs[p].tipProdus = static_cast<Tip>(n);
		std::cout << "Introduceti cantitatea " << std::endl;
		std::cin >> produs[p].cantitate;
		std::cout << "Introduceti pretul " << std::endl;
		std::cin >> produs[p].pret;

	}
	std::cout << "Produs" << "\tCant" << "\tPret" << std::endl;

	for (int p = 0; p < 3; ++p)
	{
		switch (produs[p].tipProdus)
		{
		case mere: std::cout << "Mere" << '\t' << produs[p].cantitate << '\t' << produs[p].pret << std::endl; break;
		case pere: std::cout << "Pere" << '\t' << produs[p].cantitate << '\t' << produs[p].pret << std::endl; break;
		case kivi: std::cout << "Kivi" << '\t' << produs[p].cantitate << '\t' << produs[p].pret << std::endl; break;
		case mure:std::cout << "Mure" << '\t' << produs[p].cantitate << '\t' << produs[p].pret << std::endl; break;
		default: std::cout << "Introduceti un produs valid";
		}
	}
	int stoc;
	for (int p = 0; p < 3; ++p)
	{
		stocFructe = stocFructe - produs[p].cantitate;
	}
	std::cout << "Valoare stoc " << stocFructe;

}


