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
vector<vector<int>>adj;
vector<pair<int, int>>bridges;
int ind[1055],lowlink[1005];
bool vis[1055],tway[1005][1005],adj2[1005][1005];
int numcomp,indic;
void dfs(int node)
{
	vis[node] = true;
	for (int i = 0;i < adj[node].size();i++)
	{
		int ch = adj[node][i];
		if (tway[ch][node] || tway[node][ch])
			continue;
		else
		{
			tway[node][ch] = true;
			adj2[node][ch] = false;
			dfs(ch);
		}
	}
}
void tarjan_bridge(int node,int p=-1)
{
	vis[node] = true;
	ind[node] = lowlink[node] = indic++;
	for (int i = 0;i < adj[node].size();i++)
	{
		int ch = adj[node][i];
		if (ch == p)continue;
		if (!vis[ch])
		{
			tarjan_bridge(ch, node);
			lowlink[node] = min(lowlink[node], lowlink[ch]);
		}
		else
			lowlink[node] = min(lowlink[node], ind[ch]);
	}
	if (lowlink[node] == ind[node] && p != -1)
	{
		bridges.push_back(make_pair(min(node,p), max(node,p)));
		tway[node][p] = true;
		tway[p][node] = true;
	}
}
void tarjan()
{
	memset(ind, 0, sizeof(ind));
	memset(lowlink, 0, sizeof(lowlink));
	memset(vis, 0, sizeof(vis));
	memset(tway, 0, sizeof(tway));
	numcomp = 0;indic = 1;
	bridges.clear();
	for (int i = 1;i <= n;i++)
	{
		if (ind[i] == 0)tarjan_bridge(i);
	}
	memset(vis, 0, sizeof(vis));
	for (int i = 1;i <= n;i++)
	{
		if (vis[i] == 0)dfs(i);
	}
	for (int i = 1;i <= n;i++)
	{
		for (int j = 0;j < adj[i].size();j++)
		{
			int u = i,v=adj[i][j];
			if (adj2[u][v])
				cout << u << " " << v << endl;
		}
	}
}
/////////////////////////////////////////////////
int main()
{
	fast();
	int b = 1;
	//freopen("keys.in", "r", stdin);
	while (cin >> n>>m&&n&&m)
	{
		memset(adj2, 0, sizeof(adj2));
		adj = vector<vector<int>>(n + 1, vector<int>());
		for (int i = 0;i < m;i++)
		{
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
			adj2[u][v] = 1;
			adj2[v][u] = 1;
		}
		cout << b++ << endl;
		cout << endl;
		tarjan();
		cout << "#" << endl;
	}
	system("pause");
	return 0;
}
