// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Codeforces - 11854 - Egypt
// Problem Statement - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2954
// Main.cpp


#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	long int a, b, c;
	
	while (cin >> a >> b >> c)
	{
		if (a == 0 && b == 0 && c == 0)
			break;
		else
		{
			a = a * a;
			b = b * b;
			c = c * c;
			if (a + b == c || b + c == a || a + c == b)
				cout << "right" << endl;
			else
				cout << "wrong" << endl;
		}
	}

	return 0;
}