//#define _CRT_SECURE_NO_WARNINGS
//             »”„ «·À«·ÊÀ «·«ﬁœ”

#include<iostream>	
#include<algorithm>
#include<cstdio>
#include<sstream>
#include<cmath>
#include<climits>
#include<string>
#include<iomanip>
#include<vector>
#include<stack>
#include<map>
#include<queue>
#include<deque>
#include<set>
#include<fstream>
#include<bitset>
#include <cstring>
using namespace std;
const double EPS = 1e-8;
//jesus help me.......
void fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
}
///////////////////////////////////////////////////////////////		
///////////////////////////////////////////////////////////
bool sortby(const pair<int, int>&a, const pair<int, int>&b)
{
	if (a.first >= b.first&&a.second >= b.second)
		return true;
	return false;
}
///////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////
int w[20002];
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int n, m;
	cin >> n >> m;
	vector<string>v(n);
	for (int i = 0;i < n;i++)
	{
		cin >> v[i];
	}
	for (int i = 0;i < n-1;i++)
	{
		for (int j = 0;j < m;j++)
		{
			if (v[i][j] == '1')
			{
				w[j]++;
			}
		}
	}
	bool b = true;
	for (int i = 0;i < m;i++)
	{
		if (!w[i])
		{
			b = false;
			break;
		}
	}
	if (b)
	{
		cout << "YES" << endl;
		return 0;
	}
	else
	{
		int end = n - 1;
		int f = 0;
		while (f < n - 1)
		{
			for (int i = 0;i < m;i++)
			{
				if (v[end][i] == '1')
					w[i]++;
			}
			for (int i = 0;i < m;i++)
			{
				if (v[f][i] == '1')
					w[i]--;
			}
			end = f;f++;
			b = true;
			for (int i = 0;i < m;i++)
			{
				if (!w[i])
				{
					b = false;
					break;
				}
			}
			if (b)
			{
				cout << "YES" << endl;
				return 0;
			}
		}
	}
	cout << "NO" << endl;
	//system("pause");
	return 0;
}