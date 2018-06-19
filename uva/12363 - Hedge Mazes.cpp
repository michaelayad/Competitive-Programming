//#define _CRT_SECURE_NO_WARNINGS
//             »”„ «·À«·ÊÀ «·«ﬁœ”
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
int n,m,q; // number of nodes
vector<vector<int>> adj; // adjacency list of graph
vector<bool> visited;
vector<int> tin, fup,numbridges;
vector<vector<int>>bridges;
int timer,numbr;
// vector<int>tin   ->   such as  int dfsnum[]
// vector<int>fup  ->   such as int lowlink[]
void dfs(int v, int p = -1) {
	visited[v] = true;
	tin[v] = fup[v] = timer++;
	for (int to : adj[v]) {
		if (to == p) continue;
		if (visited[to]) {
			fup[v] = min(fup[v], tin[to]);
		}
		else {
			dfs(to, v);
			fup[v] = min(fup[v], fup[to]);
			if (fup[to] > tin[v])
			{
				bridges[v].push_back(to);
				bridges[to].push_back(v);
			}
		}
	}
}
void dfs2(int node)
{
	numbridges[node] = numbr;
	for (int i = 0;i < bridges[node].size();i++)
	{
		if (numbridges[bridges[node][i]] == -1)
		{
			dfs2(bridges[node][i]);
		}
	}
}
void find_bridges() {
	timer = 0;
	visited.assign(n+1, false);
	tin.assign(n+1, -1);
	fup.assign(n+1, -1);
	numbridges.assign(n+1, -1);
	for (int i = 1; i <= n; ++i) {
		if (!visited[i])
			dfs(i);
	}
	numbr = 1;
	for (int i = 1; i <= n; ++i) {
		if (numbridges[i] == -1 && bridges[i].size())
		{
			dfs2(i);
			numbr++;
		}
	}
}


/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	while (cin >> n >> m >> q&&n&&m&&q) {
		adj = vector<vector<int>>(n + 1);
		bridges = vector<vector<int>>(n + 1);
		for (int i = 0;i < m;i++)
		{
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		find_bridges();
		for (int i = 0;i < q;i++)
		{
			int f, t;
			cin >> f >> t;
			if (numbridges[f] == numbridges[t] && numbridges[f] != -1)
			{
				cout << "Y" << endl;
			}
			else
				cout << "N" << endl;
		}
		cout << "-" << endl;
	}
	system("pause");
	return 0;
}