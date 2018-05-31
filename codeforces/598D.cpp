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
int n, m, k;
vector<string>v;
int vis[1000][1000];
int dp[1000][1000];
int arx[] = { -1,0,1,0 };
int ary[] = { 0,-1,0,1 };
bool valid(int x, int y)
{
	if (x < 0 || y < 0 || x == n || y == m)
		return 0;
	return 1;
}
int flood_fill(int x, int y)
{
	if (!valid(x, y) || v[x][y] == '*' || vis[x][y])
		return 0;
	vis[x][y] = 1;
	int co = 0;
	for (int i = 0;i < 4;i++)
	{
		if (valid(x + arx[i], y + ary[i]) && v[x + arx[i]][y + ary[i]] == '*')
			co++;
	}
	for (int i = 0;i < 4;i++)
	{
		co+=flood_fill(x +arx[i], y+ary[i]);
	}
	return dp[x][y]=co;
}
void flood_fill2(int x, int y,int co)
{
	if (!valid(x, y) || v[x][y] == '*' || vis[x][y]==2)
		return ;
	vis[x][y] = 2;
	
	for (int i = 0;i < 4;i++)
	{
		flood_fill2(x + arx[i], y + ary[i],co);
	}

	 dp[x][y] = co;
}
/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	cin >> n >> m >> k;
	v = vector<string>(n);
	for (int i = 0;i < n;i++)
		cin >> v[i];
	for (int i = 0;i < k;i++)
	{
		int x, y;
		cin >> x >> y;

		int res;
		if (dp[x - 1][y - 1] != 0)
			res = dp[x - 1][y - 1];
		else
		{
			res = flood_fill(x - 1, y - 1);
			flood_fill2(x - 1, y - 1, res);
		}
		cout << res << endl;
	}
	system("pause");
	return 0;
}
