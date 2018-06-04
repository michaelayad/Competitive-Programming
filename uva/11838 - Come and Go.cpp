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
int vis[2005], lowlink[2005];
bool onstack[2005];
stack<int>st;
int numcomp, ind;
void tarjan_scc(int node)
{
	vis[node] = lowlink[node] = ++ind;
	st.push(node);
	onstack[node] = 1;
	for (int i = 0;i < adj[node].size();i++)
	{
		int ch = adj[node][i];
		if (vis[ch] == 0)
		{
			tarjan_scc(ch);
			lowlink[node] = min(lowlink[node], lowlink[ch]);
		}
		else if (onstack[ch])
		{
			lowlink[node] = min(lowlink[node], vis[ch]);
		}
	}
	if (vis[node] == lowlink[node])
	{
		int check = 0;
		do
		{
			check = st.top();
			st.pop();onstack[check] = 0;
		} while (check!=node&&!st.empty());
		numcomp++;
	}
}
void component()
{
	ind = 0;
	numcomp = 0;
	memset(vis, 0, sizeof(vis));
	memset(onstack, false, sizeof(onstack));
	memset(lowlink, 0, sizeof(lowlink));
	while (!st.empty())st.pop();
	for (int i = 1;i <= n;i++)
		if (!vis[i]) tarjan_scc(i);
}
/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	while (cin >> n >> m&&n&&m)
	{
		adj = vector<vector<int>>(n + 1, vector<int>());
		for (int i = 0;i < m;i++)
		{
			int u, v, p;
			cin >> u >> v >> p;
			adj[u].push_back(v);
			if (p == 2)adj[v].push_back(u);
		}
		component();
		if (numcomp == 1)
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}
	system("pause");
	return 0;
}
