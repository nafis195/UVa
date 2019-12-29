// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// UVa - 488 - Triangle Wave
// Problem Statement - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=429
// Main.cpp


#include<iostream>
using namespace std;

int main()
{
	int testCases, amplitude, frequency, num;
	cin >> testCases;

	for (int i = 1; i <= testCases; i++)
	{
		cin >> amplitude >> frequency;
		for (int j = 1; j <= frequency; j++)
		{
			for (int k = 1; k <= amplitude; k++)
			{
				if (k == 1)
					cout << 1 << endl;
				else if (k == 2)
					cout << 22 << endl;
				else if (k == 3)
					cout << 333 << endl;
				else if (k == 4)
					cout << 4444 << endl;
				else if (k == 5)
					cout << 55555 << endl;
				else if (k == 6)
					cout << 666666 << endl;
				else if (k == 7)
					cout << 7777777 << endl;
				else if (k == 8)
					cout << 88888888 << endl;
				else if (k == 9)
					cout << 999999999 << endl;
			}
			for (int m = amplitude - 1; m >= 1; m--)
			{
				if (m == 1)
					cout << 1 << endl;
				else if (m == 2)
					cout << 22 << endl;
				else if (m == 3)
					cout << 333 << endl;
				else if (m == 4)
					cout << 4444 << endl;
				else if (m == 5)
					cout << 55555 << endl;
				else if (m == 6)
					cout << 666666 << endl;
				else if (m == 7)
					cout << 7777777 << endl;
				else if (m == 8)
					cout << 88888888 << endl;
			}
			if(j != frequency)
				cout << endl;
		}
		if(i != testCases)
			cout << endl;
	}

	return 0;
}