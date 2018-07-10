//#define _CRT_SECURE_NO_WARNINGS
//             ??? ??????? ??????
// link : http://codeforces.com/problemset/gymProblem/100814/D
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
int n, m, k;
vector<vector<int>>adj;
bool vis[5005];
stack<int>st;
bool b;
void dfs(int node)
{
	vis[node] = 1;
	for (int i = 0;i < adj[node].size();i++)
	{
		if (!vis[adj[node][i]])
			dfs(adj[node][i]);
	}
	if (b)
		st.push(node);
}
/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	cin >> n >> m >> k;
	adj = vector<vector<int>>(n+1);
	for (int i = 0;i < m;i++)
	{
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
	}
	b = true;
	for (int i = 1;i <= n;i++)
	{
		if(!vis[i])
			dfs(i);
	}
	b = false;
	memset(vis, 0, sizeof(vis));
	dfs(k);
	int c = 0;
	while (!st.empty())
	{
		int r = st.top();
		st.pop();
		if (!vis[r])
		{
			c++;
			dfs(r);
		}
	}
	cout << c << endl;
//	system("pause");
	return 0;
}