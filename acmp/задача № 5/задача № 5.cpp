// задача № 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conio.h" 
#include "math.h" 
#include "stdio.h"
#include <iostream>
using namespace std;


void main()
{
	int chet[32000], nechet[32000], ichet = 0, inechet = 0, n, num;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (num % 2 == 1)
		{
			nechet[inechet] = num;
			inechet++;
		}
		else
		{
			chet[ichet] = num;
			ichet++;
		}
	}
	for (int i = 0; i < inechet; i++)
	{
		cout << nechet[i] << " ";
	}
	cout << "\n";
	for (int i = 0; i < ichet; i++)
	{
		cout << chet[i] << " ";
	}
	if (ichet >= inechet)
	{
		cout << "\nYES";
	}
	else
	{
		cout << "\nNO";
	}
	_getch();
}

