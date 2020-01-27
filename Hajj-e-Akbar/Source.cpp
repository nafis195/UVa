// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// UVa - 12577 - Hajj-e-Akbar
// Problem Statement - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=4022
// Main.cpp


#include<iostream>
#include<string>
using namespace std;

int main()
{
	string input;
	int count = 0;

	while (cin >> input)
	{
		count++;

		if (input == "Hajj")
			cout << "Case " << count << ": Hajj-e-Akbar" << endl;
		else if (input == "Umrah")
			cout << "Case " << count << ": Hajj-e-Asghar" << endl;
		else
			break;
	}

	return 0;
}