// задача № 9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string" 
#include "iostream" 
#include "conio.h"
#include "stdio.h"
using namespace std;


void main()
{
	int n, max, min, sum = 0, imax = 0, imin = 0, competition = 1;
	int mas[32000];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> mas[i];
	}
	min = max = mas[0];
	for (int i = 0; i < n; i++)
	{
		if (mas[i]<min)
		{
			min = mas[i];
			imin = i;
		}
		if (mas[i]>max)
		{
			max = mas[i];
			imax = i;
		}
		if (mas[i] > 0)
			sum += mas[i];
	}
	if (imax > imin)
	{
		for (int i = imin + 1; i <imax; i++)
		{
			competition *= mas[i];
		}
	}
	else if (imax < imin)
	{
		for (int i = imax + 1; i <imin; i++)
		{
			competition *= mas[i];
		}
	}
	cout << sum << " " << competition;
	_getch();
}

