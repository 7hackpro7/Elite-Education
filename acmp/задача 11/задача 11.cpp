// задача 11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string" 
#include "iostream" 
#include "conio.h"
#include "stdio.h"
#include "math.h"
#include "cmath"
using namespace std;

int m[400][100];

void main()
{
	long k, n, i, j, t, z, w;
	cin >> k >> n;
	for (i = 0; i < n; i++)
	{
		if (i < k)
			m[i][0] = 1;
		else
			m[i][0] = 0;
		for (j = (0 > i - k ? 0 : i - k); j <= i - 1; j++)
		{
			z = 0;
			for (t = 0; t < 100; t++)
			{
				w = m[i][t] = m[i][t] + m[j][t] + z;
				m[i][t] = w % 10;
				z = w / 10;
			}
		}

	}
	t = 99;
	while (m[n - 1][t] == 0)
		t--;
	for (; t >= 0; t--)
		cout << m[n - 1][t];
	_getch();

}
