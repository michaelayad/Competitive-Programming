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
string st[50];
bool vis[55][55];
int dx[] = { 1,0,-1,0 }, dy[] = { 0,1,0,-1 };
bool valid(int x,int y)
{
	if (x < 0 || y < 0 || x >= n || y >= m)
		return 0;
	return 1;
}
void dfs(int x, int y)
{
	if (!valid(x, y) || st[x][y] == '.')
		return;
	vis[x][y] = 1;
	for (int i = 0;i < 4;i++)
	{
		if (!vis[x + dx[i]][y + dy[i]])
		{
			dfs(x + dx[i], y + dy[i]);
		}
	}
}
/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	cin >> n >> m;
	for (int i = 0;i < n;i++)
		cin >> st[i];
	int co = 0;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			if (st[i][j] == '#')
				co++;
		}
	}
	if (co < 3)
	{
		cout << -1 << endl;
		return 0;
	}
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			if (st[i][j] == '#')
			{
				st[i][j] = '.';
				int count = 0;
				memset(vis, 0, sizeof(vis));
				for (int h = 0;h < n;h++)
				{
					for (int g = 0;g < m;g++)
					{
						if (st[h][g] == '#'&&!vis[h][g])
						{
							count++;
							dfs(h, g);
							if (count >= 2)
							{
								cout << 1 << endl;return 0;
							}
						}
					}
				}
				st[i][j] = '#';
			}
		}
	}
	cout << 2 << endl;
	system("pause");
	return 0;
}
