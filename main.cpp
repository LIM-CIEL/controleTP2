//Nom : Tom limouzin
//Date : 19/12/2024
//Controle de TP numero 2

#include <iostream>
#include "Point.h"

using namespace std;

int main() {
	//creation de point a et b
	Point a, b;
	Point C;
	Point D(-1,3,"D");
	a.setNom("A");
	a.setX(2);
	a.setY(3);
	b.setNom("B");
	b.setX(4);
	b.setY(-2);
	C.setNom("C");

//affichage des points
	a.affiche();
	cout << ' ' << endl;
	b.affiche();
	cout << ' ' << endl;
	C.affiche();
	cout << ' ' << endl;
	D.affiche();

	//espace
	cout << ' ' << endl;

	// creation du point E
	Point E;
	E.saisir();
	cout << "voici les coordonée du point E" << endl;
	cout << E.getX() << ";" << E.getY() << endl;
}