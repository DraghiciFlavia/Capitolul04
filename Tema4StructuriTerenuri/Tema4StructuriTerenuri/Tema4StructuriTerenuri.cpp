// Tema4StructuriTerenuri.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
enum TipTeren {agricol=1, pasune,livada,viran};
struct Suprafata
{
	float _lung;
	float _lat;
};
struct Teren
{
	long long _cnpProprietar;
	TipTeren _tipTeren;
	Suprafata _suprafata;
	float _arie;
};
int main()
{
	Teren unTeren;
	unTeren._suprafata._lung = 35.3;
	unTeren._suprafata._lat = 20.5;
	unTeren._cnpProprietar = 2890106115689;
	unTeren._tipTeren = agricol;
	unTeren._arie = unTeren._suprafata._lung * unTeren._suprafata._lat;
	//std::cout << unTeren._arie;
	Teren* oMovila = new Teren;
	oMovila->_arie = unTeren._arie;
	std::cout <<"Aria Trenului este "<< oMovila->_arie<< "mp."<< std::endl;
	oMovila->_suprafata._lung = unTeren._suprafata._lung;
	std::cout << "Lungimea terenului "<< oMovila->_suprafata._lung << "m." << std::endl;
	oMovila->_suprafata._lat = unTeren._suprafata._lat;
	std::cout << "Latimea terenului"<<oMovila->_suprafata._lat << "m." << std::endl;
	oMovila->_cnpProprietar = unTeren._cnpProprietar;
	std::cout << "CNPul proprietarului este " << oMovila->_cnpProprietar << ". "<<std::endl;
	oMovila->_tipTeren = unTeren._tipTeren;
	switch (unTeren._tipTeren)
	{
	case agricol: std::cout << "Tipul terenului este agricol."; break;
	case pasune: std::cout << "Tipul terenului este pasune."; break;
	case livada: std::cout << "Tipul terenului este livada."; break;
	case viran: std::cout << "Tipul terenului este viran."; break;
	default: std::cout << "Tip teren invalid"; break;
	}
	//std::cout << "\nTipul terenului este \n" << oMovila->_tipTeren;
	delete oMovila;
	oMovila = nullptr;
}

