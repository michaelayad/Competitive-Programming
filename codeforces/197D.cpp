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
char ch[1505][1505];
int vis[1505][1505], used[1505][1505][2];
int dx[] = { 0,0,-1,1 }, dy[] = { -1,1,0,0 };
bool dfs(int x, int y)
{
	int xx = (x%n + n) % n;
	int yy = (y%m + m) % m;
	if (ch[xx][yy] == '#')return 0;
	if (vis[xx][yy])
	{
		if (used[xx][yy][0] != x || used[xx][yy][1] != y)return 1;
		return 0;
	}
	vis[xx][yy] = 1;
	used[xx][yy][0] = x;
	used[xx][yy][1] = y;
	for (int i = 0;i < 4;i++)
	{
		if (dfs(x+ dx[i], y + dy[i]))return 1;
	}
	return 0;
}

/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	cin >> n >> m;
	int s1, s2;
	for (int i = 0;i < n;i++)
	{

		for (int j = 0;j < m;j++)
		{
			cin >> ch[i][j];
			if (ch[i][j] == 'S')
			{
				s1 = i, s2 = j;
			}
		}
	}
	memset(used, -1, sizeof(used));

	if (dfs(s1, s2))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

		system("pause");
	return 0;
}