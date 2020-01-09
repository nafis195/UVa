// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// UVa - 10071 - Back to High School Physics
// Problem Statement - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1012
// Main.cpp


#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	double v, t, a, answer;

	cin >> v >> t;

	a = v / t;
	t = t * 2;
	answer = 0.5 * a * t * t;

	if (t == 0 || v == 0)
		cout << 0 << endl;
	else
		cout << round(answer) << endl;

	return 0;
}