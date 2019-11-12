// Tema4StructuriAdrese.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct Adresa
{
	/*string prenume;
	string strada;
	string oras;
	string judet;*/
	char prenume[200];
	char strada[200];
	char oras[200];
	char judet[200];
	int codPostal;
	int nr;
};

int main()
{
	Adresa adresa;
	cout << "Care este prenumele dvs?" << endl;
	//cin >> Prenume;                                      
	cin.getline(adresa.prenume, 200);
	cout << "Pe ce strada locuiti?" << endl;
	//cin >> adresa.strada;       varianta asta nu functiona in momentul in care aveam cuvinte cu spatiu,asa am ajuns la getline                             
	cin.getline(adresa.strada, 200);
	cout << "In ce oras?" << endl; //nu prea imi placea cum arata cu orasul in care m-am nascut
	//cin >> adresa.oras;                                       
	cin.getline(adresa.oras, 200);
	cout << "In ce judet?" << endl;
	//cin >> adresa.judet;                                     
	cin.getline(adresa.judet, 200);
	cout << "Care este numarul casei/apartamentului?" << endl;
	cin >> adresa.nr;
	cout << "Ma numesc " << adresa.prenume << endl;
	cout << "M-am nascut in judetul " << adresa.judet << ", orasul " << adresa.oras << ", pe strada " << adresa.strada << ", la numarul " << adresa.nr;
}

