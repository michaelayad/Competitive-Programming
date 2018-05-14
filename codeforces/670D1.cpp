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

int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int n, k;
	cin >> n >> k;
	vector<int>v(n),v2(n);
	for (int i = 0;i < n;i++)
		cin >> v[i];
	for (int i = 0;i < n;i++)
		cin >> v2[i];
	int mx = INT_MAX;
	for (int i = 0;i < n;i++)
	{
		mx = min(mx, v2[i] / v[i]);
	}
	for (int i = 0;i < n;i++)
	{
		v2[i] -= (v[i] * mx);
	}
	bool b = true;
	while (b) {
		for (int i = 0;i < n;i++)
		{
			if (v2[i] >= v[i])
				v2[i] -= v[i];
			else
			{
				if (k >= (v[i] - v2[i]))
				{
					k -= (v[i] - v2[i]);
					v2[i] = 0;
				}
				else
				{
					b = false;
				}
			}
		}
		if (b)
			mx++;
	}
	cout << mx << endl;
	system("pause");
	return 0;
}