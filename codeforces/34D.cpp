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
vector<vector<int>>v;
bool vis[50005];
int out[50005];
void dfs(int node)
{
	vis[node] = 1;
	for (int i = 0;i < v[node].size();i++)
	{
		if (!vis[v[node][i]])
		{
			out[v[node][i]] = node;
			dfs(v[node][i]);
		}
	}
}
/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int o_cap, n_cap;
	cin >> n >> o_cap >> n_cap;
	v = vector<vector<int>>(n + 1, vector<int>());
	for (int i = 1;i <= n;i++)
	{
		if (i == o_cap)
			continue;
		int node;
		cin >> node;
		v[i].push_back(node);
		v[node].push_back(i);
	}
	dfs(n_cap);
	for (int i = 1;i <= n;i++)
	{
		if (i == n_cap)
			continue;
		cout << out[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}
