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
int v[101][101];
bool vis[101][101];
int dx[] = { 1,0,-1,0 }, dy[] = { 0,1,0,-1 };
bool valid(int x,int y)
{
	if (x < 0 || y < 0 || x >= n || y >= n)
		return 0;
	return 1;
}
int dfs(int x, int y)
{
	
	vis[x][y] = 1;
	int ret = 0;
	for (int i = 0;i < 4;i++)
	{
		if (valid(x+dx[i], y+dy[i])&&!vis[x + dx[i]][y + dy[i]]&&v[x + dx[i]][y+dy[i]]==m)
		{
			ret+=(1+dfs(x + dx[i], y + dy[i]));
		}
	}
	return ret;
}
/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	while (cin >> n&&n)
	{
		for (int i = 0;i < n;i++)
		{
			for (int j = 0;j < n;j++)
				v[i][j] = n;
		}
		memset(vis, 0, sizeof(vis));
		cin.ignore();
		for (int i = 1;i < n;i++)
		{
			string s;
			getline(cin, s);
			istringstream ss(s);
			int x, y;
			
			while (ss >> x >> y)
			{
				v[x - 1][y - 1] = i;
			}
		}
		bool ok = true;
		for (int i = 0;i < n;i++)
		{
			for (int j = 0;j < n;j++)
			{
				if (!vis[i][j])
				{
					m = v[i][j];
					
					if (dfs(i, j) != (n-1)) {
						ok = false;
					}
				}
			}
		}
		if (ok)
			cout << "good" << endl;
		else
			cout << "wrong" << endl;

	}
	system("pause");
	return 0;
}
