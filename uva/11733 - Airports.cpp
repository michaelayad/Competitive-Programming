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
vector<int> parent, ran;

void make_set(int v) {
	parent[v] = v;
	ran[v] = 0;
}

int find_set(int v) {
	if (v == parent[v])
		return v;
	return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
	a = find_set(a);
	b = find_set(b);
	if (a != b) {
		if (ran[a] < ran[b])
			swap(a, b);
		parent[b] = a;
		if (ran[a] == ran[b])
			ran[a]++;
	}
}

struct Edge {
	int u, v, weight;
	Edge(int u, int v, int weight) :u(u), v(v), weight(weight) {};
	bool operator<(Edge const& other) {
		return weight < other.weight;
	}
};
int n,m,k;
vector<Edge> edges;
pair<int,int> kruskal(int co)
{
	int cost = 0;
	parent.resize(n + 1);
	ran.resize(n + 1);
	for (int i = 1; i <= n; i++)
		make_set(i);

	sort(edges.begin(), edges.end());

	for (Edge e : edges) {
		if (find_set(e.u) != find_set(e.v)) {
			if (e.weight<k)
				cost += e.weight,co--;
			union_sets(e.u, e.v);
		}
	}
	return make_pair(cost, co);

}
/////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	//don't open standing
	int t;
	cin >> t;
	int a = 1;
	while (t--)
	{
		cin >> n >> m >> k;
		edges .clear();
		for (int i = 0; i < m; i++)
		{
			int u, v, c;
			cin >> u >> v >> c;
			edges.push_back(Edge(u, v, c));
		}
		pair<int,int>p=kruskal(n);
		cout << "Case #"<<a++<<": "<<p.first+(p.second*k)<<" "<<p.second << endl;
	}
	system("pause");
	return 0;
	//don't open standing
	
}