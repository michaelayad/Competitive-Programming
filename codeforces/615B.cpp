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
int n, m;
vector<vector<int>>adj;
long long dp[100005];
long long dfs(int node)
{
	if (dp[node] != -1)return dp[node];
	dp[node] = 1;
	for (int i = 0;i < adj[node].size();i++)
	{
		int ch = adj[node][i];
		if (ch < node)dp[node] = max(dp[node], 1 + dfs(ch));
	}
	return dp[node];
}
/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	cin >> n >> m;
	adj = vector<vector<int>>(n + 1);
	for (int i = 0;i < m;i++)
	{
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	memset(dp, -1, sizeof(dp));
	long long ans = 0;
	for (int i = 1;i <= n;i++)
	{
		ans = max(ans, adj[i].size()*dfs(i));
	}
	cout << ans << endl;
	system("pause");
	return 0;
}