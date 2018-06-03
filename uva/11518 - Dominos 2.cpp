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
int n, m, l, t;
vector<vector<int>>v;
bool vis[10005];
void dfs(int x)
{
	if (x <= 0 || x > n || vis[x])
		return;
	vis[x] = true;
	for (int i = 0;i < v[x].size();i++)
	{
		dfs(v[x][i]);
	}
}
/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	cin >> t;
	while (t--)
	{
		cin >> n >> m >> l;
		v = vector<vector<int>>(n + 1, vector<int>());
		memset(vis, 0, sizeof(vis));
		for (int i = 0;i < m;i++)
		{
			int x, y;
			cin >> x >> y;
			v[x].push_back(y);
		}
		for (int i = 0;i < l;i++)
		{
			int x;
			cin >> x;
			if (!vis[x])
				dfs(x);
		}
		int co = 0;
		for (int i = 1;i <= n;i++)
			if (vis[i])co++;
		cout << co << endl;
	}
	system("pause");
	return 0;
}
