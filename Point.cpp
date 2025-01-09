//Nom : Tom limouzin
//Date : 19/12/2024
//Controle de TP numero 2

#include "Point.h"
#include <iostream>

using namespace std;

Point::Point()
{
	
}

Point::Point(double x, double y, string str)
{
	this->x = 0;
	this->y = 0;
}

const double Point::getX()
{
	
	return x;
}

const double Point::getY()
{
	return y;
}

const string Point::getNom()
{
	return nom;
}

void Point::setX(double x)
{
	this->x = x;
}

void Point::setY(double y)
{
	this->y = y;
}

void Point::setNom(string nom)
{
	this->nom = nom;
}

void Point::saisir()
{
	cout << "veuiller saisir le nom de point" << endl;
	cin >> nom;
	cout << "saisir la valeur de X" << endl;
	cin >> x;
	cout << "saisir la valeur de y" << endl;
	cin >> y;
}

void Point::affiche()
{
	cout << "Le Point " << nom << "a pour coordonner : (" << x << " , " << y << ")" << endl;
}

double Point::distance(Point p1)
{

	return 0.0;
}

Point Point::additionner(Point pt, string nom)
{
	return Point();
}
