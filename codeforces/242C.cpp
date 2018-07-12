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
double area(int x1, int y1, int x2, int y2, int x3, int y3)
{
	return abs((x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) / 2.0);
}
//////////////////////////////////////////////////

map<pair<int, int>,bool>mp;
int dx[] = { -1, 0, 1, 0, -1, -1, 1, 1 }, dy[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
void bfs(pair<int, int>s, pair<int, int>e)
{
	queue<pair<int, int>>q;
	map<pair<int, int>, bool>used;
	map<pair<int, int>, int>d;
	q.push(s); used[s] = 1;
	d[s] = 0;
	while (!q.empty() && !used[e])
	{
		pair<int, int>v = q.front(); q.pop();
		for (int i = 0; i < 8; i++)
		{
			int x = v.first, y = v.second;
			x += dx[i], y += dy[i];
			if (mp[make_pair(x, y)] && !used[make_pair(x, y)])
			{
				used[make_pair(x, y)] = 1; d[make_pair(x, y)] = d[v] + 1;
				q.push(make_pair(x, y));
			}
		}
	}
	if (used[e])
		cout << d[e] << endl;
	else
		cout << -1 << endl;
}
/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	//fun();
	int n;
	pair<int, int>s, e;
	cin >> s.first >> s.second >> e.first >> e.second;
	cin >> n;
	while (n--)
	{
		int r, cl, cr;
		cin >> r >> cl >> cr;
		for (int i = cl; i <= cr; i++)
		{
			mp[make_pair(r, i)] = 1;
		}
	}
	bfs(s, e);
	system("pause");
	return 0;
}
