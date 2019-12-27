// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// UVa - 11479 - Is this the easiest problem?
// Problem Statement - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2474
// Main.cpp


#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int t;
	signed long long int a, b, c;

	cin >> t;

	for (int i = 1; i <= t; i++)
	{
		cin >> a >> b >> c;
		if (a == b == c)
			cout << "Case " << i << ": " << "Equilateral" << endl;
		else if(a == b || b == c || a == c)
			cout << "Case " << i << ": " << "Isosceles" << endl;
		else if (a != b && b != c && a != c)
		{
			if((a * a) + (b * b) == c * c || (b * b) + (c * c) == a * a || (a * a) + (c * c) == b * b)
				cout << "Case " << i << ": " << "Scalene" << endl;
			else
				cout << "Case " << i << ": " << "Invalid" << endl;
		}
	}

	return 0;
}