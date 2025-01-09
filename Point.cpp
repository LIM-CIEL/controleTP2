//Nom : Tom limouzin
//Date : 19/12/2024
//Controle de TP numero 2

#include "Point.h"
#include <iostream>
#include <cmath>

using namespace std;

Point::Point()
{
	this->x = 0;
	this->y = 0;
}

Point::Point(double x, double y, string str)
{
	this->x = x;
	this->y = y;
	this->nom = str;
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
	cout << "saisir le nom du point : " << endl;
	cin >> nom;
	cout << "saisir la valeur de X" << endl;
	cin >> x;
	cout << "saisir la valeur de y" << endl;
	cin >> y;
}

void Point::affiche()
{
	cout << "Le Point " << nom << " a pour coordonner : (" << x << " , " << y << ")" << endl;
}

double Point::distance(Point p)
{
	return sqrt(pow(p.x - x, 2) + pow(p.y - y, 2));
}

Point Point::additionner(Point *pt, string nom)
{
	
	return Point(x + pt->x, y + pt->y, nom);
}
