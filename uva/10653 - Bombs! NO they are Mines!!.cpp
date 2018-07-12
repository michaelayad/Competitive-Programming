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

vector<vector<int>>v;
int n, m;
vector<vector<bool>>used;
int dx[] = { -1, 0, 1, 0 }, dy[] = { 0, -1, 0, 1 };
void bfs(pair<int, int>s, pair<int, int>e)
{
	
	vector<vector<int>>d(n, vector<int>(m));
	queue<pair<int, int>>q;
	q.push(s);
	used[s.first][s.second] = 1;
	d[s.first][s.second] = 0;
	while (!q.empty()&&!used[e.first][e.second])
	{
		pair<int, int>v = q.front();
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int x = v.first, y = v.second;
			x += dx[i], y += dy[i];
			if (x >= 0 && x < n&&y >= 0 && y < m)
			{
				if (!used[x][y])
				{
					used[x][y] = 1;
					q.push(make_pair(x, y)); d[x][y] = d[v.first][v.second] + 1;
				}
			}
		}
	}
	cout << d[e.first][e.second] << endl;
}
/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	//fun();
	int t;
	int x = 1;
	while (cin>>n>>m&&n&&m)
	{
		v=vector<vector<int>>(n, vector<int>(m));
		used=vector<vector<bool>>(n, vector<bool>(m));
		int r;
		cin >> r;
		while (r--)
		{
			int a, b;
			cin >> a >> b;
			while (b--)
			{
				int c;
				cin >> c;
				used[a][c] = 1;
			}
		}
		pair<int, int>s, e;
		cin >> s.first >> s.second >> e.first >> e.second;
		bfs(s, e);
	}
	system("pause");
	return 0;
}
