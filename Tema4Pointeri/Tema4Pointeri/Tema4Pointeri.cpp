// Tema4Pointeri.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	short ident1, ident2, identSuma, identProdus;
	short* pntident1, * pntident2, * pntidentSuma, * pntidentProdus;
	pntident1 = &ident1;
	pntident2 = &ident2;
	pntidentSuma = &identSuma;
	pntidentProdus = &identProdus;
	*pntident1 = 10;
	*pntident2 = 30;
	*pntidentSuma = *pntident1 + *pntident2;
	*pntidentProdus = *pntident1 * *pntident2;
	cout << "Suma variabilelor este  " << *pntidentSuma <<endl;
	cout << "Produsul variabilelor este  " << *pntidentProdus << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
