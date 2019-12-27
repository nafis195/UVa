// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// UVa - 11172 - Relational Operator
// Problem Statement - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2113
// Main.cpp


#include<iostream>
#define lli long long int
using namespace std;

int main()
{
	int t;
	lli a, b;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		if (a > b)
			cout << ">" << endl;
		else if (a < b)
			cout << "<" << endl;
		else
			cout << "=" << endl;
	}

	return 0;
}