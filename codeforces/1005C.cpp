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
//////////////////////////////////////////////////
double area(int x1, int y1, int x2, int y2, int x3, int y3)
{
	return abs((x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) / 2.0);
}
//////////////////////////////////////////////////

/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int n;
	cin >> n;
	vector<long long>v(n),p(36);
	map<long long, int>mp;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		mp[v[i]]++;
	}
	for (int i = 0; i < 35; i++)
	{
		p[i] = pow(2, i);
	}
	int m = 0;
	for (int i = 0; i < n; i++)
	{
		bool b = false;
		for (int j = 0; j < 36; j++)
		{
			long long x = p[j] - v[i];
			if (x == v[i])
			{
				if (mp[x]>1)
					b = true;
			}
			else
			{
				if (mp[x]>=1)b = true;
			}
		}
		if (!b)
			m++;
	}
	cout << m << endl;
//	system("pause");
	return 0;
}