#define _CRT_SECURE_NO_WARNINGS
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

//jesus help me.......
void fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
}
///////////////////////////////////////////////////////////////		
bool sortby(const pair<char, int>&a, const pair<char, int>&b)
{
	if (a.second == b.second)
		return a.first < b.first;
	 return a.second > b.second;
}
///////////////////////////////////////////////////////////////
int m, n, max_cur = 0, num0 = 0;
vector<int>v;
int vis[25],cur[25];
//////////////////////////////////////////////////////////////
void check()
{
	int cur2=0,num=0;
	for (int i = 0;i < n;i++)
	{
		if (vis[i])
		{
			cur2 += v[i];num++;
		}
	}
	if (cur2 > max_cur&&cur2 <= m)
	{
		num0 = num;
		max_cur = cur2;
		for (int i = 0;i < n;i++)
		{
			cur[i] = vis[i];
		}
	}
	else if (cur2 == max_cur&&num > num0)
	{
		num0 = num;
		max_cur = cur2;
		for (int i = 0;i < n;i++)
		{
			cur[i] = vis[i];
		}
	}
}
//////////////////////////////////////////////////////////////
void solve(int i)
{
	if (i == n)
	{
		check();
		return;
	}
	vis[i] = 1;
	solve(i + 1);
	vis[i] = 0;
	solve(i + 1);

}

//////////////////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	while (cin >> m >> n)
	{
		v = vector<int>(n);
		memset(cur, 0, sizeof(cur));
		memset(vis, 0, sizeof(vis));
		max_cur = 0, num0 = 0;
		for (int i = 0;i < n;i++)
			cin >> v[i];
		solve(0);
		for (int i = 0;i < n;i++)
		{
			if (v[i] * cur[i])
				cout << v[i]<<" ";
		}
		cout << "sum:" << max_cur << endl;
	}
	system("pause");
	return 0;
}