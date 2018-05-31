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
bool vis[50005];
int dp[50005];
int dfs(int v)
{
	vis[v] = true;
	int ret = 0;
	for (int i = 0;i < adj[v].size();i++)
	{
		if (!vis[adj[v][i]]) {
			vis[adj[v][i]] = true;
			ret += (1 + dfs(adj[v][i]));
			vis[adj[v][i]]=false;
		}
	}
	vis[v] = false;
	return dp[v] = ret;
}
/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int t;
	cin >> t;
	int c = 1;
	while (t--)
	{
		cin >> n;
		adj = vector<vector<int>>(n + 1, vector<int>());
		memset(dp, -1, sizeof(dp));
		for (int i = 0;i < n;i++)
		{
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
		}
		int m = -1,res=-1;
		for (int i = 1;i <= n;i++)
		{
			if (dp[i] == -1)dfs(i);
			if (dp[i] > m)
			{
				m = dp[i];
				res = i;
			}
		}
		cout << "Case " << c++ << ": " << res << endl;
	}
	system("pause");
	return 0;
}
