// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// UVa - 10783 - Odd Sum
// Problem Statement - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1724
// Main.cpp


#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	int testCases, a, b, sum = 0;

	cin >> testCases;

	for (int i = 1; i <= testCases; i++)
	{
		cin >> a >> b;
		for (int i = a; i <= b; i++)
		{
			if (i % 2 != 0)
				sum = sum + i;
		}
		cout << "Case " << i << ": " << sum << endl;
		sum = 0;
	}

	return 0;
}