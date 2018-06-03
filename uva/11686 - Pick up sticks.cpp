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
vector<vector<int>>adj;
vector<int>start, finish,topsort;
int timer;
int cycle;
bool vis[10000005];
void dfs(int x)
{
	start[x] = timer++;
	for (int i = 0;i < adj[x].size();i++)
	{
		if (start[adj[x][i]] == -1)
			dfs(adj[x][i]);
		else
		{
			if (finish[adj[x][i]] == -1)
				cycle = 1;
		}
	}
	finish[x] = timer++;
	topsort.push_back(x);
}
/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	while (cin >> n >> m&&n&&m)
	{
		timer = 0;cycle = 0;
		adj = vector<vector<int>>(n + 1, vector<int>());
		start = vector<int>(n + 1, -1);
		finish = vector<int>(n + 1, -1);
		topsort = vector<int>();

		memset(vis, 0, sizeof(vis));
		for (int i = 0;i < m;i++)
		{
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
		}
		for (int i = 1;i <= n;i++)
		{
			if (start[i] == -1)
				dfs(i);
		}
		if (cycle)
			cout << "IMPOSSIBLE" << endl;
		else
		{
			for (int i = n - 1;i >= 0;i--)
				cout << topsort[i] << endl;
		}
	}
	system("pause");
	return 0;
}
