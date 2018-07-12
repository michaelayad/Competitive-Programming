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

struct edge {
	int from, to, w;

	edge(int from, int to, int w) : from(from), to(to), w(w) {}

	bool operator < (const edge & e) const {
		return w > e.w;
	}
};

int Dijkstra2(vector< vector< edge > > adjList, int src,int t)	// O(E logV)
{
	int n = adjList.size();
	vector<int> dist(n, INT_MAX), prev(n, -1);
	dist[src] = 0;
	priority_queue<edge> q;
	q.push(edge(-1, src, 0));

	while (!q.empty()) {
		edge e = q.top();	q.pop();

		if (e.w > dist[e.to])	continue;	// some other state reached better

		prev[e.to] = e.from;

		for (int j = 0; j < adjList[e.to].size(); j++){
			edge ne = adjList[e.to][j];
			if (dist[ne.to] > dist[ne.from] + ne.w) {
				ne.w = dist[ne.to] = dist[ne.from] + ne.w;
				q.push(ne);
			}
		}
	}
	int a = 0;
	for (int i = 1; i < n; i++)
	{
		if (dist[i] <= t)a++;
	}
	return a;
}

/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	//fun();
	int t;
	cin >> t;
	int b = 0;
	while (t--)
	{
		int n, e, t, m;
		cin >> n >> e >> t >> m;
		vector< vector< edge > >adj(n + 1);
		for (int i = 0; i < m; i++)
		{
			int u, v, c;
			cin >> u >> v >> c;
			adj[v].push_back(edge(v, u, c));
		}
		int a=Dijkstra2(adj, e, t);
		if (b)
			cout << endl;
		cout << a << endl;
		b++;
	}
	system("pause");
	return 0;
}
