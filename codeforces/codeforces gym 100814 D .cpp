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
vector<long long>sh_path;
vector<vector<pair<int,long long>>>adj;
vector<long long>time_node;
void dfs(int node, long long tm)
{
	long long mn = sh_path[node];
	if (adj[node].size() == 0)
	{
		time_node.push_back(tm);
	}
	for (int i = 0;i < adj[node].size();i++)
	{
		long long time = tm + mn + (adj[node][i].second - mn) * 2;
		dfs(adj[node][i].first, time);
	}
}
/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		sh_path = vector<long long>(n);
		time_node.clear();
		adj = vector<vector<pair<int, long long>>>(n);
		for (int i = 1;i < n;i++)
		{
			long long u, v;
			cin >> u >> v;
			adj[u - 1].push_back(make_pair(i, v));
		}
		for (int i = 0;i < n;i++)
		{
			long long mn = INT_MAX;
			for (int j = 0;j < adj[i].size();j++)
			{
				mn = min(mn, adj[i][j].second);
			}
			sh_path[i] = mn;
		}
		dfs(0, 0);
		sort(time_node.begin(), time_node.end());
		int q;
		cin >> q;
		while (q--)
		{
			long long tm1;
			cin >> tm1;
			int l = 0, r = time_node.size()-1,ans=0;
			while (l <= r)
			{
				int md = l + (r - l) / 2;
				if (time_node[md] <= tm1)
				{
					ans = md+1;
					l = md + 1;
				}
				else
				{
					r = md - 1;
				}
			}
			cout << ans << endl;
		}
	}
	system("pause");
	return 0;
}