#include <iostream>

#include "Tableau.h"

#include <assert.h>

using namespace std;

tableau::tableau(int ta)
{
	this->taille = ta;
	this->tab = new float [ta];

}

tableau::tableau(const tableau& T)
{

	this->taille = T.taille;
	this->tab = new float[this->taille];
	for (int i = 0; i < this->taille ; i++)
	{

		this->tab[i] = T.tab[i];

	}
}

tableau::~tableau()
{

	delete[] this->tab;
	this->tab = nullptr;

}

tableau tableau::operator=(const tableau& T)
{
	

	if (this != &T)
	{
		delete[] this->tab;
		this->tab = nullptr;

		this->taille = T.taille;
		this->tab = new float[this->taille];
		for (int i = 0; i < this->taille; i++)
		{

			this->tab[i] = T.tab[i];

		}

	}

	return *this;
}

void tableau::affichage()
{
	cout << "la taille du tableau est :" << this->taille << endl;

	for (int i = 0; i < this->taille; i++)
	{
		cout << "tab [" << i + 1 << "] -> " << this->tab[i] << endl;

	}

}

void tableau::remplissage(int t)
{
	float val;
	

	for (int i = 0; i < t; i++)
	{

		cout << "entree la valeur du tab[" << i + 1 << "] : ";
		cin >> val;

		this->tab[i] = val;

		cout << endl;
	}

	
}

void tableau::operator[](const int ind)
{
	assert((ind >= 0 && ind < this->taille));
	
	cout << "entree la novelle val de tab[" << ind << "] :";
	cin >> this->tab[ind];

	

}
