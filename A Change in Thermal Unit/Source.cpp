// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Codeforces - 11984 - A Change in Thermal Unit
// Problem Statement - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3135
// Main.cpp


#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
	float t, c, f, d;
	cin >> t;

	for (int i = 1; i <= t; i++)
	{
		cin >> c >> d;
		f = ((d * 5) / 9) + c;

		cout << "Case " << i << ": ";
		std::cout << std::fixed;
		std::cout << std::setprecision(2);
		std::cout << f << endl;
	}
}