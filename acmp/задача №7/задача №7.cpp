// задача №7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string" 
#include "iostream" 
#include "conio.h"
#include "stdio.h"
using namespace std;


int main()
{
	string num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	if (num1[0] == '-')
	{
		if (num2[0] == '-'&&num3[0] != '-')
		{
			cout << num3; _getch(); return 0;
		}
		else if (num3[0] == '-'&&num2[0] != '-')
		{
			cout << num2; _getch(); return 0;
		}
		if (num2[0] != '-'&&num3[0] != '-')
		{
			num1 = "";
		}
	}
	if (num2[0] == '-')
	{
		if (num1[0] == '-'&&num3[0] != '-')
		{
			cout << num3; _getch();  return 0;
		}
		else if (num3[0] == '-'&&num1[0] != '-')
		{
			cout << num1; _getch(); return 0;
		}
		if (num1[0] != '-'&&num3[0] != '-')
		{
			num2 = "";
		}
	}
	if (num3[0] == '-')
	{
		if (num2[0] == '-'&&num1[0] != '-')
		{
			cout << num1; _getch(); return 0;
		}
		else if (num1[0] == '-'&&num2[0] != '-')
		{
			cout << num2; _getch(); return 0;
		}
		if (num1[0] != '-'&&num2[0] != '-')
		{
			num3 = "";
		}
	}
	if (num3[0] == '-'&&num2[0] == '-'&&num1[0] == '-')
	{

		if (num1.length() < num2.length())
		{
			if (num1.length() < num3.length())
			{
				cout << num1; _getch(); return 0;
			}
			else if (num1.length() > num3.length())
			{
				cout << num3; _getch(); return 0;
			}
			else if (num1.length() == num3.length())
			{
				for (int i = 0; i < num1.length(); i++)
				{
					if (num1[i] < num3[i])
					{
						cout << num1;
						_getch(); return 0;
					}
					else if (num1[i]>num3[i])
					{
						cout << num3;
						_getch(); return 0;
					}
				}
			}
		}
		else if (num1.length() >num2.length())
		{
			if (num2.length() < num3.length())
			{
				cout << num2; _getch(); return 0;
			}
			else if (num2.length() > num3.length())
			{
				cout << num3; _getch(); return 0;
			}
			else if (num2.length() == num3.length())
			{
				for (int i = 0; i < num2.length(); i++)
				{
					if (num2[i] < num3[i])
					{
						cout << num2;
						_getch(); return 0;
					}
					else if (num2[i]> num3[i])
					{
						cout << num3;
						_getch(); return 0;
					}
				}
			}
		}
		else if (num1.length() == num2.length())
		{
			if (num1.length() < num3.length())
			{
				for (int i = 0; i < num2.length(); i++)
				{
					if (num2[i] < num1[i])
					{
						cout << num2;
						_getch(); return 0;
					}
					else if (num2[i]> num1[i])
					{
						cout << num1;
						_getch(); return 0;
					}
				}
			}
			else if (num1.length() > num3.length())
			{
				cout << num3; _getch(); return 0;
			}
			else if (num1.length() == num3.length())
			{
				for (int i = 0; i < num2.length(); i++)
				{
					if (num2[i] < num1[i] && num2[i] < num3[i])
					{
						cout << num2;
						_getch(); return 0;
					}
					else if (num1[i] < num2[i] && num1[i] < num3[i])
					{
						cout << num1;
						_getch(); return 0;
					}
					else if (num3[i] < num2[i] && num3[i] < num1[i])
					{
						cout << num3;
						_getch(); return 0;
					}
				}
			}
		}
	}
	if (num1.length() > num2.length())
	{
		if (num1.length() > num3.length())
		{
			cout << num1; _getch(); return 0;
		}
		else if (num1.length() < num3.length())
		{
			cout << num3; _getch();  return 0;
		}
		else if (num1.length() == num3.length())
		{
			for (int i = 0; i < num1.length(); i++)
			{
				if (num1[i] > num3[i])
				{
					cout << num1;
					_getch(); return 0;
				}
				else if (num1[i]< num3[i])
				{
					cout << num3;
					_getch(); return 0;
				}
			}
			cout << num3;
			_getch(); return 0;
		}
	}
	else if (num1.length() < num2.length())
	{
		if (num2.length() > num3.length())
		{
			cout << num2; _getch();  return 0;
		}
		else if (num2.length() < num3.length())
		{
			cout << num3; _getch();  return 0;
		}
		else if (num2.length() == num3.length())
		{
			for (int i = 0; i < num2.length(); i++)
			{
				if (num2[i] > num3[i])
				{
					cout << num2;
					_getch(); return 0;
				}
				else if (num2[i]< num3[i])
				{
					cout << num3;
					_getch(); return 0;
				}
			}
			cout << num3;
			_getch(); return 0;
		}
	}
	else if (num1.length() == num2.length())
	{
		if (num1.length() > num3.length())
		{
			for (int i = 0; i < num2.length(); i++)
			{
				if (num2[i] > num1[i])
				{
					cout << num2;
					_getch(); return 0;
				}
				else if (num2[i]< num1[i])
				{
					cout << num1;
					_getch(); return 0;
				}
			}
		}
		else if (num1.length() < num3.length())
		{
			cout << num3; _getch();  return 0;
		}
		else if (num1.length() == num3.length())
		{
			for (int i = 0; i < num2.length(); i++)
			{
				if (num2[i] > num1[i] && num2[i] > num3[i])
				{
					cout << num2;
					_getch(); return 0;
				}
				else if (num1[i] > num2[i] && num1[i] > num3[i])
				{
					cout << num1;
					_getch(); return 0;
				}
				else if (num3[i] > num2[i] && num3[i] > num1[i])
				{
					cout << num3;
					_getch(); return 0;
				}
			}
			cout << num3;
			_getch(); return 0;
		}
	}
	_getch(); return 0;
}