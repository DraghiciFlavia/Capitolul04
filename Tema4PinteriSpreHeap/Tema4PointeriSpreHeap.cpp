// Tema4PointeriSpreHeap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
double* pdouble = new double(1.3);
int main()
{
	double* pDouble = new double(2.3);
	double* pDouble1 = new double(5.4);
	double* pntMedie = new double;
	*pntMedie = (*pdouble + *pDouble + *pDouble1) / 3;
	std::cout << *pntMedie << std::endl;
	delete pDouble;
	delete pDouble1;
	delete pntMedie;
	pDouble = nullptr;
	pDouble1 = nullptr;
	pntMedie = nullptr;
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
