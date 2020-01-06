// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Codeforces - 11461 - Square Numbers
// Problem Statement - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2456
// Main.cpp


#include<iostream>
using namespace std;

int main()
{
	int a, b, count;
	cin >> a >> b;

	while (a != 0 && b!= 0)
	{
		count = 0;

		for (int i = 1; i <= b; i++)
		{
			if (i * i >= a && i * i <= b)
				count = count + 1;
			else if (i * i < a)
				continue;
			else if (i * i > b)
				break;
		}

		cout << count << endl;

		cin >> a >> b;
	}

	return 0;
}