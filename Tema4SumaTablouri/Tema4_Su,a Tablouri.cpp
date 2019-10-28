// Tema4_Su,a Tablouri.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
short* arraySuma = new short[41];
int main()
{
	short arrayStack[41];
	short* arrayHeap = new short[41];
	for (short i = 0; i < 41; ++i)
	{
		arrayStack[i] = 7 * i;
		arrayHeap[i] = 8 * i;
		arraySuma[i] = arrayStack[i] + arrayHeap[i];
		cout << "Elem[" << i << "]: " << arraySuma[i] << endl;
	}
	delete[] arrayHeap;
	delete[] arraySuma;
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
