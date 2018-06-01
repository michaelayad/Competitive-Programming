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
int n, m;
long long mncost;
long long cost[100005];
vector<vector<int>>adj;
bool vis[100005];
void dfs(int u)
{
	if (vis[u])
		return;
	vis[u] = true;
	mncost = min(mncost, cost[u]);
	for (int i = 0;i < adj[u].size();i++)
		if (!vis[adj[u][i]])
			dfs(adj[u][i]);
}
/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	cin >> n >> m;
	adj = vector<vector<int>>(n + 1, vector<int>());
	for (int i = 1;i <= n;i++)
		cin >> cost[i];
	for (int i = 0;i < m;i++)
	{
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	long long res = 0;
	for (int i = 1;i <= n;i++)
	{
		if (!vis[i])
		{
			mncost = LLONG_MAX;
			dfs(i);
			res += mncost;
		}
	}
	cout << res << endl;
	system("pause");
	return 0;
}
