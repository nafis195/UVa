// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Codeforces - 10055 - Hashmat the Brave Warrior
// Problem Statement - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=996
// Main.cpp


#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	unsigned long long int a, b, answer;

	while (cin >> a >> b)
	{
		cout << max(a, b) - min(a, b) << endl;
	}

	return 0;
}