// задача № 10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string" 
#include "iostream" 
#include "conio.h"
#include "stdio.h"
#include "math.h"
using namespace std;


void main()
{
	long long a, b, c, d, len = 0;
	long long mas[32000];
	cin >> a >> b >> c >> d;
	for (int i = -100; i <= 100; i++)
	{
		if (a*i*i*i + b*i*i + c*i + d == 0)
		{
			mas[len] = i;
			len++;
		}
	}
	for (int i = 0; i < len; i++)
	{
		cout << mas[i] << " ";
	}
	_getch();
}