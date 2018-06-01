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
char out[1000005];
int out_x[1000005], out_y[1000005];
int o = 0;
bool vis[505][505];
int arx[] = { 1,0,-1,0 }, ary[] = { 0,1,0,-1 };
bool valid(int x, int y)
{
	if (x < 0 || y < 0 || x == n || y == m)
		return 0;
	return 1;
}
void flood_fill(int x,int y,int x1,int y1)
{
	if (!valid(x, y) || v[x][y] == '#'||vis[x][y] == 1)
		return;
	vis[x][y] = 1;
	out[o] = 'B',out_x[o]=x+1,out_y[o++]=y+1;
	for (int i = 0;i < 4;i++)
		flood_fill(x + arx[i], y + ary[i],x1,y1);
	if (x != x1 || y != y1)
	{
		out[o] = 'D', out_x[o] = x+1, out_y[o++] = y+1;
		out[o] = 'R', out_x[o] = x+1, out_y[o++] = y+1;
	}
}
void connected_component()
{
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			if (!vis[i][j])
			{
				
				flood_fill(i, j,i,j);
			}
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
	connected_component();
	cout << o << endl;
	for (int i = 0;i < o;i++)
	{
		cout << out[i] << " " << out_x[i] << " " << out_y[i] << "\n";
	}
	system("pause");
	return 0;
}
