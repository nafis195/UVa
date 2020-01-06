// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// UVa - 673 - Parentheses Balance
// Problem Statement - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=614
// Main.cpp


#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

int main()
{
	int t;
	string input;
	stack <char> s;

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> input;
		for (int i = 0; i < input.length(); i++)
		{
			if (input[i] == '(' || input[i] == '{' || input[i] == '[')
				s.push(input[i]);
			else if (input[i] == ')' && !s.empty() && s.top() == '(')
				s.pop();
			else if (input[i] == '}' && !s.empty() && s.top() == '{')
				s.pop();
			else if (input[i] == ']' && !s.empty() && s.top() == '[')
				s.pop();
			else if (input[i] == ')' || input[i] == '}' || input[i] == ']' && s.empty())
				s.push(input[i]);
		}

		if (s.empty())
			cout << "Yes" << endl;
		else
			cout << "No" << endl;

		while (!s.empty())
		{
			s.pop();
		}
	}
	
	return 0;
}