// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Codeforces - 11332 - Summing Digits
// Problem Statement - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2307
// Main.cpp


#include<iostream>
#include<math.h>
#include<algorithm>
#include<iomanip>
using namespace std;

int main()
{
	long int input;
	int answer, temp, sum = 0;
	string a;

	while (true)
	{
		cin >> input;

		if (input == 0)
			break;
		else if (input < 10)
			cout << input << endl;
		else
		{ 
			while (input != 0)
			{
				sum = sum + (input % 10);
				input = input / 10;
			}
			while (sum > 9)
			{
				input = sum;
				sum = 0;
				while (input != 0)
				{
					sum = sum + (input % 10);
					input = input / 10;
				}
			}
			cout << sum << endl;
			sum = 0;
		}
	}

	return 0;
}