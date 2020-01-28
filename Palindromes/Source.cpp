// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// UVa - 401 - Palindromes
// Problem Statement - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=342
// Main.cpp


#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
#include<unordered_set>
using namespace std;

// function prototype
bool isPalindrome (string s1);
bool isMirrored (string s2);
unordered_set <char> symmetric = { 'A', 'E', 'H', 'I', 'J', 'L', 'M', 'O', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '1', '2', '3', '5', '8' };

// main function
int main()
{
	string input;
	bool reversedStringAnswer, mirroredStringAnswer;

	while (cin >> input)
	{
		reversedStringAnswer = isPalindrome(input);
		mirroredStringAnswer = isMirrored(input);

		if (reversedStringAnswer == true && mirroredStringAnswer == true)
		{
			cout << input << " -- is a mirrored palindrome." << endl;
			cout << endl;
		}
		else if (reversedStringAnswer == false && mirroredStringAnswer == true)
		{
			cout << input << " -- is a mirrored string." << endl;
			cout << endl;
		}
		else if (reversedStringAnswer == true && mirroredStringAnswer == false)
		{
			cout << input << " -- is a regular palindrome." << endl;
			cout << endl;
		}
		else if (reversedStringAnswer == false && mirroredStringAnswer == false)
		{
			cout << input << " -- is not a palindrome." << endl;
			cout << endl;
		}
	}

	return 0;
}

// isPalindrome function
bool isPalindrome(string s1)
{
	string temp = s1;
	reverse(temp.begin(), temp.end());

	if (temp == s1)
		return true;
	else
		return false;
}

// isMirrored function
bool isMirrored(string s2)
{
	for (int i = 0; i < s2.length(); i++)
	{
		if (symmetric.find(s2[i]) == symmetric.end())
			return false;
	}
	return true;
}
