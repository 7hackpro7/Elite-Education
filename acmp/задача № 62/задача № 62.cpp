// задача № 62.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string" 
#include "iostream" 
#include "conio.h"
#include "stdio.h"
#include "math.h"
#include "cmath"
using namespace std;

void main()
{
	string text;
	cin >> text;
	if (text[0] == 'A' || text[0] == 'C' || text[0] == 'E' || text[0] == 'G')
	{
		if (text[1] == '1' || text[1] == '3' || text[1] == '5' || text[1] == '7')
			cout << "BLACK";
		else
			cout << "WHITE";
	}
	else
		if (text[1] == '1' || text[1] == '3' || text[1] == '5' || text[1] == '7')
			cout << "WHITE";
		else
			cout << "BLACK";
	_getch();
}

