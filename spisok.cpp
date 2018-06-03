// ConsoleApplication11.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct str     
{
	char *capital;       //имя cтолицы
	char *counter;        //название страны
	int squad;           //площадь
	int population;       //население
};

int main()
{
	setlocale(LC_ALL, "rus");

	str country1;   // страна 1

	country1.counter = "Россия"; //заполняем данные о стране и т.д.
	country1.capital = "Москва";
	country1.squad = 17;
	country1.population = 147;

	cout << "Страна: " << country1.counter << endl;
	cout << "Столица: " << country1.capital << endl;
	cout << "Площадь: " << country1.squad << " млн кв. км" << endl;
	cout << "Население: " << country1.population << " млн человек" << endl;
	
	str country2;   // страна 2

	country2.counter = "Англия"; //заполняем данные о стране и т.д.
	country2.capital = "Лондон";
	country2.squad = 133;
	country2.population = 53;

	cout << "Страна: " << country2.counter << endl;
	cout << "Столица: " << country2.capital << endl;
	cout << "Площадь: " << country2.squad << " тыс кв. км" << endl;
	cout << "Население: " << country2.population << " млн человек" << endl;

	str country3;   // страна 3

	country3.counter = "Финляндия"; //заполняем данные о стране и т.д.
	country3.capital = "Хельсинки";
	country3.squad = 338;
	country3.population = 5500;

	cout << "Страна: " << country3.counter << endl;
	cout << "Столица: " << country3.capital << endl;
	cout << "Площадь: " << country3.squad << " тыс кв. км" << endl;
	cout << "Население: " << country3.population << " тыс человек" << endl;

	return 0;
}

