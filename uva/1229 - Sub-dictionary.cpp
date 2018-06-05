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
vector<vector<int>>adj,comps;
map<string, int>mp;
map<int, string>mp2;
vector<string>words;
int ind[105],lowlink[105];
bool onstack[105],vis[105];
int numcomp,indic;
stack<int>st;
void tarjan_scc(int node)
{
	ind[node] = lowlink[node] = indic++;
	st.push(node);
	onstack[node] = 1;
	for (int i = 0;i < adj[node].size();i++)
	{
		int x = adj[node][i];
		if (ind[x] == 0)
		{
			tarjan_scc(x);
			lowlink[node] = min(lowlink[node], lowlink[x]);
		}
		else if(onstack[x])
		{
			lowlink[node] = min(lowlink[node], ind[x]);
		}
	}
	if (lowlink[node] == ind[node])
	{
		int i = 0;
		do
		{
			i = st.top();
			st.pop();
			comps[numcomp].push_back(i);
			onstack[i] = false;
		} while (i != node&&!st.empty());
		numcomp++;
	}
}
void tarjan()
{
	memset(ind, 0, sizeof(ind));
	memset(vis, 0, sizeof(vis));
	memset(lowlink, 0, sizeof(lowlink));
	memset(onstack, 0, sizeof(onstack));
	words.clear();
	comps=vector<vector<int>>(n+1,vector<int>());
	numcomp = 0;indic = 1;
	while (!st.empty())st.pop();
	for (int i = 1;i <= n;i++)
	{
		if (ind[i] == 0)tarjan_scc(i);
	}
}
void dfs(int node)
{
	words.push_back(mp2[node]);
	vis[node] = 1;
	for (int i = 0;i < adj[node].size();i++)
		if (!vis[adj[node][i]])dfs(adj[node][i]);
}
/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	while (cin >> n&&n)
	{
		int k = 1;
		adj = vector<vector<int>>(n + 1, vector<int>());
		mp.clear();mp2.clear();
		cin.ignore();
		for (int i = 0;i < n;i++)
		{
			string s,s1,s2;
			getline(cin, s);
			istringstream ss(s);
			ss >> s1;
			if (mp[s1] == 0)
			{
				mp2[k] = s1;
				mp[s1] = k++;
			}
			while (ss >> s2)
			{
				if (mp[s2] == 0)
				{
					mp2[k] = s2;
					mp[s2] = k++;
				}
				adj[mp[s1]].push_back(mp[s2]);
			}
		}
		tarjan();
		int num = 0,pl=-1;
		for (int i = 0;i < numcomp;i++)
		{
			if (comps[i].size()>1)
			{
				dfs(comps[i][0]);
			}
		}
		sort(words.begin(), words.end());
		cout << words.size() << endl;
		cout << words[0];
		for (int i = 1;i < words.size();i++)
			cout << " " << words[i];
		cout << endl;

	}
	system("pause");
	return 0;
}
