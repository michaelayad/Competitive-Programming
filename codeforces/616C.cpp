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
vector<string>v;
bool vis[1000][1000];
int dp[1001][1001],comp[1000001];
int co;
int dx[] = { 1,0,-1,0 }, dy[] = { 0,1,0,-1 };
bool valid(int i, int j)
{
	if (i < 0 || j < 0 || i >= n || j >= m)
		return 0;
	return 1;
}
void dfs(int i, int j)
{
	if (!valid(i, j) || v[i][j] == '*' || vis[i][j])
		return;
	vis[i][j] = 1;
	comp[co]++;
	dp[i][j] = co;
	for (int h = 0;h < 4;h++)
	{
		if (!vis[i + dx[h]][j + dy[h]])
		{
			 dfs(i + dx[h], j + dy[h]);
		}
	}
	
}

/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	cin >> n >> m;
	v = vector<string>(n);
	for (int i = 0;i < n;i++)
		cin >> v[i];
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			dp[i][j] = -1;
		}
	}
	co = 0;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			if (!vis[i][j] && v[i][j] == '.')
			{
				dfs(i, j);
				co++;
			}
		}
	}
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			if (v[i][j] == '*')
			{
				set<int>st;
				set<int>::iterator it;
				for (int x = 0;x < 4;x++)
				{
					int xx = i + dx[x], yy = j + dy[x];
					if (valid(xx, yy) && v[xx][yy] == '.')
					{
						st.insert(dp[xx][yy]);
					}
				}
				int count = 1;
				for (it = st.begin();it != st.end();it++)
				{
					count+=comp[*it];
				}
				cout << count % 10;
			}
			else
				cout << v[i][j];
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
