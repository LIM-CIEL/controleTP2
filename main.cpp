//Nom : Tom limouzin
//Date : 19/12/2024
//Controle de TP numero 2

#include <iostream>
#include "Point.h"

using namespace std;

int main() {
	//creation de point a et b
	Point a, b;
	Point C, D(-1, 3);
	a.setX(2);
	a.setY(3);
	b.setX(4);
	b.setY(-2);

//affichage des points
	cout << "voici les coordonée du point A" << endl;
	cout << a.getX() << ";" << a.getY() << endl;
	cout << "voici les coordonée du point B" << endl;
	cout << b.getY() << ";" << b.getY() << endl;
	cout << "voici les coordonée du point C" << endl;
	cout << C.getY() << ";" << C.getY() << endl;
	cout << "voici les coordonée du point D" << endl;
	cout << D.getY() << ";" << D.getY() << endl;

	// creation du point E
	Point E;
	E.saisir();
	cout << "voici les coordonée du point E" << endl;
	cout << E.getY() << ";" << E.getY() << endl;
}