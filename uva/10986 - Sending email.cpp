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

int Dijkstra2(vector< vector< edge > > adjList, int src, int dest = -1)	// O(E logV)
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

	return dest == -1 ? -1 : dist[dest];
}


/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	//fun();
	int t;
	cin >> t;
	int x = 1;
	while (t--)
	{
		int n, m, s, e;
		cin >> n >> m >> s >> e;
		vector< vector< edge > >adj(n);
		for (int i = 0; i < m; i++)
		{
			int u, v, c;
			cin >> u >> v >> c;
			adj[u].push_back(edge(u, v, c));
			adj[v].push_back(edge(v, u, c));
		}
		int d=Dijkstra2(adj, s, e);
		if (d == INT_MAX)
			cout << "Case #" << x++ << ": unreachable" << endl;
		else
			cout << "Case #" << x++ << ": " << d << endl;
	}
	//system("pause");
	return 0;
}