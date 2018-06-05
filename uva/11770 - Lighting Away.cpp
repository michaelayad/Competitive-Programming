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
int vis[10005];
stack<int>st;
void dfs(int node,bool b)
{
	vis[node] = 1;
	for (int i = 0;i < adj[node].size();i++)
		if (!vis[adj[node][i]])dfs(adj[node][i],b);
	if(b)
		st.push(node);
}
int Kosaraju()
{
	memset(vis, 0, sizeof(vis));
	while (!st.empty())st.pop();
	for (int i = 1;i <= n;i++)
	{
		if (!vis[i])
		{
			dfs(i,true);
		}
	}
	int co = 0;
	memset(vis, 0, sizeof(vis));
	while (!st.empty())
	{
		if (!vis[st.top()])
		{
			dfs(st.top(), false); co++;
		}
		st.pop();
	}
	return co;
}
/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int t;
	cin >> t;
	int k = 1;
	while (t--)
	{
		cin >> n >> m;
		adj = vector<vector<int>>(n + 1, vector<int>());
		for (int i = 0;i < m;i++)
		{
			int x, y;
			cin >> x >> y;
			adj[x].push_back(y);
		}
		cout << "Case "<<k++<<": "<<Kosaraju() << endl;
		
	}
	system("pause");
	return 0;
}
