// TestKlasy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Punkt.h"

using namespace std;

int main()
{
	//Inicjalizowanie nowego punktu o x = 5 y = 6
	Punkt punkt = Punkt(5, 6);
	//Wydruk
	punkt.drukuj();

	//kopiowanie punktu do 2 punktu wartosci w obu punktach powinny byc te same
	Punkt punkt2 = Punkt(punkt);
	punkt2.drukuj();

	//Dodawanie wartosci z punktu 2 do 1 czyli powinno x = 10 y = 12 po tym
	punkt.dodaj(punkt2);
	punkt.drukuj();

	//Dodawanie wartosci z punktu 2 przez wskaznik powinno byc x = 15 y = 18 po tym
	punkt.dodaj(&punkt2);
	punkt.drukuj();
	system("pause");

    return 0;
}

