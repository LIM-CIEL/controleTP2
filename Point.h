#pragma once
#include <string>
//Nom : Tom limouzin
//Date : 19/12/2024
//Controle de TP numero 2
using namespace std;

class Point
{
	//declaration des attributs

	double x;
	double y;
	string nom;

public:
	//déclaration des méhodes 
	Point();
	Point(double x, double y, string nom = "str");
	const double  getX();
	const double  getY();
	const string getNom();
	void setX(double x);
	void setY(double y);
	void setNom(string nom);
	void saisir();
	void affiche();
	double distance(Point p1);
	Point additionner(Point *pt, string nom);
};
