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
map<pair<int, int>, long long>mp;
struct edge {
	int from, to;
	long long w;
	edge(int from, int to, long long w) : from(from), to(to), w(w) {}
	bool operator < (const edge & e) const {
		return w > e.w;
	}
};
long long  Dijkstra2(vector< vector< edge > > adjList, int src, int dest ,long long x)	// O(E logV)
{
	int n = adjList.size();
	vector<long long> dist(n, LLONG_MAX), prev(n, -1);
	dist[src] = 0;
	priority_queue<edge> q;
	q.push(edge(-1, src, 0));
	while (!q.empty()) {
		edge e = q.top();	q.pop();
		if (e.w > dist[e.to])	continue;	// some other state reached better
		prev[e.to] = e.from;
		for (int j = 0; j < adjList[e.to].size(); j++){
			edge ne = adjList[e.to][j];
			if (dist[ne.to] > dist[ne.from] + ne.w&&mp[make_pair(ne.from,ne.to)]<=x) {
				ne.w = dist[ne.to] = dist[ne.from] + ne.w;
				q.push(ne);
			}
		}
	}
	long long w = -1;
	return dist[dest];
}

/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	//fun();
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		long long k;
		cin >> n >> m >> k;
		mp.clear();
		vector<vector<edge>>adj(n+1);
		for (int i = 0; i < m; i++)
		{
			int u, v;
			long long c, mn;
			cin >> u >> v >> c >> mn;
			adj[u].push_back(edge(u, v, c));adj[v].push_back(edge(v, u, c));
			mp[make_pair(u, v)] = mn;mp[make_pair(v, u)] = mn;
		}
		long long l = 0, r = 1e9,ans=-1;
		while (l <= r)
		{
			long long md = l + (r - l) / 2;
			long long b = Dijkstra2(adj, 1, n, md);
			if (b<k)
			{
				ans = md, r = md - 1;
			}
			else
			{
				l = md + 1;
			}
		}
		cout << ans << endl;
	}
	system("pause");
	return 0;
}
