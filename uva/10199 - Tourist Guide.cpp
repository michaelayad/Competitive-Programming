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
set<string>st;
map<int, string>mp;
map<string, int>mp2;
int dfsnum;
bool root;
void init()
{
	for (int i = 1;i <= n;i++)
		lowlink[i] = dfn[i] = -1;
	root = false;
	dfsnum = 0;
	mp.clear();
	mp2.clear();
	adj = vector<vector<int>>(n + 1, vector<int>());
	st.clear();
}
void dfs(int node, int p = -1)
{
	lowlink[node] = dfn[node] = dfsnum++;
	int chnum = 0;
	for (int i = 0;i < adj[node].size();i++)
	{
		int ch = adj[node][i];
		if (ch == p)continue;
		if (dfn[ch] == -1)
		{
			dfs(ch, node);
			lowlink[node] = min(lowlink[node], lowlink[ch]);
			if (lowlink[ch] >= dfn[node] && p != -1)
				st.insert(mp[node]);
			chnum++;
		}
		else
		{
			lowlink[node] = min(lowlink[node], dfn[ch]);
		}
	}
	if(p==-1&&chnum>1)
		st.insert(mp[node]);
}
/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int m = 1;
	while (cin >> n&&n)
	{
		init();
		for (int i = 1;i <= n;i++)
		{
			string s;
			cin >> s;
			mp2[s] = i;
			mp[i] = s;
		}
		cin >> r;
		for (int i = 0;i < r;i++)
		{
			string u, v;
			cin >> u >> v;
			adj[mp2[u]].push_back(mp2[v]);
			adj[mp2[v]].push_back(mp2[u]);
		}
		for (int i = 1;i <= n;i++)
		{
			if (dfn[i] == -1)
				dfs(i);
		}
		set<string>::iterator it;
		if (m > 1)
			cout << endl;
		cout << "City map #" << m++ << ": " << st.size() << " camera(s) found" << endl;
		for (it = st.begin();it != st.end();it++)
		{
			cout << *it << endl;
		}
	}
	system("pause");
	return 0;
}
