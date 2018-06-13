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
bool vis[2005];
vector<int>top_sort;
void dfs(int node,bool b)
{
	vis[node] = 1;
	for (int i = 0;i < adj[node].size();i++)
	{
		int x = adj[node][i];
		if (!vis[x])dfs(x, b);
	}
	if (b)top_sort.push_back(node);
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
		cin >> n;
		vector<int>x(n), y(n), d(n);
		top_sort.clear();
		adj = vector<vector<int>>(n, vector<int>());
		for (int i = 0;i < n;i++)
		{
			cin >> x[i] >> y[i] >> d[i];
			d[i] /= 2;
		}
		for (int i = 0;i < n;i++)
		{
			for (int j = 0;j < n;j++)
			{
				if (j == i)continue;
				if ((x[j] >= (x[i] - d[i]) && x[j] <= (x[i] + d[i])) && (y[j] >= (y[i] - d[i]) && y[j] <= (y[i] + d[i])))
				{
					adj[i].push_back(j);
				}
			}
		}
		memset(vis, 0, sizeof(vis));
		for (int i = 0;i < n;i++)
		{
			if (!vis[i])dfs(i, 1);
		}
		memset(vis, 0, sizeof(vis));
		int cnt = 0;
		for (int i = top_sort.size() - 1;i >= 0;i--)
		{
			if (!vis[top_sort[i]]) {
				cnt++;
				dfs(top_sort[i], 0);
			}
		}
		cout << cnt << endl;
	}
	system("pause");
	return 0;
}