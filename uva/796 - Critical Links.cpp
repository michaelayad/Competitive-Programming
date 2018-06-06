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
int ind[105],lowlink[105];
bool vis[105];
int numcomp,indic;
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
	}

}
void tarjan()
{
	memset(ind, 0, sizeof(ind));
	memset(lowlink, 0, sizeof(lowlink));
	memset(vis, 0, sizeof(vis));
	numcomp = 0;indic = 1;
	bridges.clear();
	for (int i = 0;i < n;i++)
	{
		if (ind[i] == 0)tarjan_bridge(i);
	}
}
/////////////////////////////////////////////////
int main()
{
	fast();
	bool b = false;
	//freopen("keys.in", "r", stdin);
	while (cin >> n)
	{
		adj = vector<vector<int>>(n + 1, vector<int>());
		for (int i = 0;i < n;i++)
		{
			int v,co;
			string s;
			char c;
			cin >> v >> s;
			istringstream ss(s);
			ss >> c >> co >> c;
			for (int j = 0;j < co;j++)
			{
				int u;
				cin >> u;
				adj[v].push_back(u);
			}
		}
		tarjan();
		
		sort(bridges.begin(), bridges.end());
		cout << bridges.size() << " critical links" << endl;
		for (int i = 0;i < bridges.size();i++)
		{
			cout << bridges[i].first << " - " << bridges[i].second << endl;
		}
		b = true;
		if (b)
			cout << endl;
	}
	system("pause");
	return 0;
}
