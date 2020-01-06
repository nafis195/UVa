// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// UVa - 11777 - Automate the Grades
// Problem Statement - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2877
// Main.cpp


#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
	int t, ct1, ct2, ct3, term1, term2, annual, attn, avg, temp, sum = 0;
	cin >> t;

	for (int i = 1; i <= t; i++)
	{
		cin >> term1 >> term2 >> annual >> attn >> ct1 >> ct2 >> ct3;

		if (ct1 >= ct3 && ct2 >= ct3)
			avg = (ct1 + ct2) / 2;
		else if (ct1 >= ct2 && ct3 >= ct2)
			avg = (ct1 + ct3) / 2;
		else if (ct2 >= ct1 && ct3 >= ct1)
			avg = (ct2 + ct3) / 2;
		else if (ct1 == ct2 == ct3)
			avg = (ct1 + ct2) / 2;
		sum = term1 + term2 + annual + attn + avg;

		if (sum >= 90)
			cout << "Case " << i << ": " << 'A' << endl;
		else if(sum >= 80 && sum < 90)
			cout << "Case " << i << ": " << 'B' << endl;
		else if(sum >= 70 && sum < 80)
			cout << "Case " << i << ": " << 'C' << endl;
		else if(sum >= 60 && sum < 70)
			cout << "Case " << i << ": " << 'D' << endl;
		else
			cout << "Case " << i << ": " << 'F' << endl;
	}

	return 0;
}