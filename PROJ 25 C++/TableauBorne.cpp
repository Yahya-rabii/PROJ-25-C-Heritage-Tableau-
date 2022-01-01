#include "TableauBorne.h"
#include <iostream>
#include <assert.h>

using namespace std;

TableauBorne::TableauBorne(int ta, float a, float b):tableau(ta)
{

	this->A = a;
	this->B = b;


}

const float TableauBorne::operator[](const int ind) const
{
	assert((ind >= 0 && ind < this->taille));
	return this->tab[ind];

}

void TableauBorne::operator()(int ind, float val)
{
	assert((ind >= 0 && ind < this->taille && val >=this->A && val <= this->B ));

	this->tab[ind] = val;

}

void TableauBorne::affichage()
{
	this->tableau::affichage();

	cout << "la borne inferieur du tableau est : " << this->A <<endl;
	cout << "la borne superieur du tableau est : " << this->B <<endl;

}

void TableauBorne::remplissage(int t, float binf, float bsup)
{
	float val;

	
	for (int i = 0; i < t; i++)
	{

		cout << "entree la valeur du tab[" << i + 1 << "] : ";
		cin >> val;

		assert(val >= binf && val <= bsup);

			this->tab[i] = val;

			cout << endl;
		

		

	}


	    this->A = binf;

		this->B = bsup;
	


}

TableauBorne::~TableauBorne()
{

	delete[] this->tab;
	this->tab = nullptr;

}
