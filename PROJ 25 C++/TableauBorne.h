#pragma once
#include "Tableau.h"



class TableauBorne: public tableau
{

private:
	
	
	float A;
	float B;

public:
	TableauBorne(int ta , float a , float b);
	const float operator[]( const int ind)const;
	void operator()(int ind , float val);
	void affichage();
	void remplissage(int t, float binf, float bsup);

	~TableauBorne();


};
