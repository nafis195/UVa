// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Codeforces - 10055 - Hashmat the Brave Warrior
// Problem Statement - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=996
// Main.cpp


#include<iostream>
using namespace std;

int main()
{
	long long int a, b, answer;

	while (getchar() != EOF)
	{
		cin >> a >> b;
		if (a > b)
			answer = a - b;
		else
			answer = b - a;
		cout << answer << endl;
	}

	return 0;
}