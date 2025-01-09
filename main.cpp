//Nom : Tom limouzin
//Date : 19/12/2024
//Controle de TP numero 2

#include <iostream>
#include "Point.h"

using namespace std;

int main() {
	//creation de point a et b
	Point A, B;
	Point D(-1,3,"D");
	A.setNom("A");
	A.setX(2);
	A.setY(3);
	B.setNom("B");
	B.setX(4);
	B.setY(-2);

//affichage des points
	A.affiche();
	cout << ' ' << endl;
	B.affiche();
	cout << ' ' << endl;
	D.affiche();

	//espace
	cout << ' ' << endl;

	// creation du point E
	Point E;
	E.saisir();
	cout << "voici les coordonee du point E" << endl;
	cout << E.getX() << ";" << E.getY() << endl;

	double dist = B.distance(E);
	cout << "la distance entre les point est de : " << dist << endl;

	//espace
	cout << ' ' << endl;
	cout << ' ' << endl;

	A.affiche();
	B.affiche();

	Point C = A.additionner(&B, "C");
	C.affiche();
}