#include "Tableau.h"
#include"TableauBorne.h"
#include <iostream>

using namespace std;


int main()
{
	int a1;


	cout << "donne une taille du tableau 1" << endl;
    cin >> a1;
	
	tableau tab1(a1);

	
	tab1.remplissage(a1);
	tab1.affichage();

	int ind;

	//cout << "donne une indice" << endl;
	//cin >> ind;

	//tab1[ind]; //Je ne peux pas accéder à cette fonction car elle est privée


	//////////////////////////////////////////////////////////////////

	float borne_sup;
	float borne_inf;
	int a2;

	cout << "donne une taille du tableau 2" << endl;
	cin >> a2;
	
	cout << "donne la borne sup :";
	cin >> borne_sup;
	cout << endl;


	cout << "donne la borne inf :";
	cin >> borne_inf;
	cout << endl;




	TableauBorne tab2(a2,borne_inf ,borne_sup);
	tab2.remplissage(a2, borne_inf, borne_sup);
	tab2.affichage();


	cout << "donne une indice" << endl;
	cin >> ind;
	float x;
	
	x=tab2[ind];
	cout << "la valeur recherchere via [] -> " << x << endl;


	cout << "donne une indice POUR LA MODIFICATION " << endl;
	cin >> ind;
	
	cout << "donne une valeur POUR LA MODIFICATION" << endl;
	cin >> x;
	
	tab2(ind, x);

	cout << "le tab 2 apres LA MODIFICATION" << endl;

	tab2.affichage();

}
