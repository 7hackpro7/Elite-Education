// задача № 6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include "string"
using namespace std;


void main()
{
	string dano;
	getline(cin, dano);
	if (dano.length() == 5)
	{
		if (dano[1] > '8' || dano[1]<'1' || dano[4]>'8' || dano[4]<'1' || dano[0]>'H' || dano[3] > 'H' || dano[2] != '-' || dano[0]<'A' || dano[3] < 'A')
		{
			cout << "ERROR";
		}
		else
		{
			if (((dano[0] == dano[3] + 1 || dano[0] == dano[3] - 1) && (dano[1] == dano[4] + 2 || dano[1] == dano[4] - 2)) || (dano[0] == dano[3] + 2 || dano[0] == dano[3] - 2) && (dano[1] == dano[4] + 1 || dano[1] == dano[4] - 1))
			{
				cout << "YES";
			}
			else
			{
				cout << "NO";
			}
		}
	}
	else
	{
		cout << "ERROR";
	}
	_getch();
}