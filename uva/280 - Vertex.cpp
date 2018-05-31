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
int n;
vector<vector<int>>adj;
bool vis[105];
int cnt;
void dfs(int v)
{
	for (int i = 0;i < adj[v].size();i++)
	{
		if (!vis[adj[v][i]]) {
			vis[adj[v][i]] = true;
			cnt++;
			dfs(adj[v][i]);
		}
	}
}
/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	while (cin >> n&&n)
	{
		int u,v;
		adj = vector<vector<int>>(n+1, vector<int>());
		while (cin >> u&&u)
		{
			while (cin >> v&&v)
			{
				adj[u].push_back(v);
			}
		}
		int m;
		cin >> m;
		for (int i = 0;i < m;i++)
		{
			int vr;
			cin >> vr;
			memset(vis, 0, sizeof(vis));
			cnt = 0;
			dfs(vr);
			cout << n - cnt;
			for (int j = 1;j <= n;j++)
				if (!vis[j])
					cout << " " << j;
			cout << endl;
		}
	}
	system("pause");
	return 0;
}
