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
int n, r;
vector<vector<int>>adj;
int lowlink[105], dfn[105];
set<int>st;
int dfsnum;
bool root;
void init()
{
	for (int i = 1;i <= n;i++)
		lowlink[i] = dfn[i] = -1;
	root = false;
	dfsnum = 0;
	adj = vector<vector<int>>(n + 1, vector<int>());
	st.clear();
}
void dfs(int node, int p = -1)
{
	dfn[node] = lowlink[node] = dfsnum++;
	int chnum = 0;
	for (int i = 0;i < adj[node].size();i++)
	{
		int ch = adj[node][i];
		if (ch == p)
			continue;
		if (dfn[ch] == -1)
		{
			dfs(ch, node);
			lowlink[node] = min(lowlink[node], lowlink[ch]);
			if (lowlink[ch] >= dfn[node] && p != -1)
			{
				st.insert(node);
			}
			chnum++;
		}
		else
			lowlink[node] = min(lowlink[node], dfn[ch]);
	}
	if (p == -1 && chnum > 1)
		st.insert(node);
}
/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	while (cin >> n&&n)
	{
		init();
		int m;
		while (cin >> m&&m)
		{
			cin.ignore();
			string s;
			getline(cin, s);
			istringstream ss(s);
			int r;
			while (ss >> r)
			{
				adj[m].push_back(r);
				adj[r].push_back(m);
			}
		}
		for (int i = 1;i <= n;i++)
			if (dfn[i] == -1)dfs(i);
		cout << st.size() << endl;
	}
	system("pause");
	return 0;
}
