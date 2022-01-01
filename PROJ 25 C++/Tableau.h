
#pragma once


class tableau
{


protected:

	float * tab;
	int taille;


public:
	tableau(int ta);
	tableau(const tableau &T);
	~tableau();

	tableau operator=(const tableau& T);

	void affichage();
	void remplissage(int t);

private : void operator[](const int ind) ;

};