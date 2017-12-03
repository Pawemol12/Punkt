#include "stdafx.h"
#include "Punkt.h"



Punkt::Punkt(Punkt& p)
{
	this->x = p.x;
	this->y = p.y;
}

Punkt::Punkt(float x_, float y_)
{
	this->x = x_;
	this->y = y_;
}

void Punkt::dodaj(Punkt &p)
{
	this->x += p.x;
	this->y += p.y;
}

void Punkt::dodaj(Punkt *p)
{
	this->x += p->x;
	this->y += p->y;
}

void Punkt::drukuj() {
	using namespace std;
	cout << "X: " << this->x << " ";
	cout << "Y: " << this->y;
	cout << endl;
}

Punkt::~Punkt()
{
}
