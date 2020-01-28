// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// UVa - 100 - The 3n + 1 problem
// Problem Statement - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=36
// Main.cpp


#include<iostream>
#include<string>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;

int main()
{
	int a, b, temp;
	priority_queue <int> pq;
	vector <int> vc;

	while (cin >> a >> b)
	{
		for (int i = a; i <= b; i++)
		{
			temp = i;
			while (temp >= 1)
			{
				vc.push_back(temp);
				if (temp == 1)
					break;
				if (temp % 2 != 0)
					temp = (3 * temp) + 1;
				else if (temp % 2 == 0)
					temp = temp / 2;
			}
			pq.push(vc.size());
			vc.clear();
		}

		cout << a << ' ' << b << ' ' << pq.top() << endl;
		
		while (!pq.empty())
			pq.pop();
	}

	return 0;
}