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
	int u, v;double weight;
	Edge(int u, int v, double weight) :u(u), v(v), weight(weight) {};
	bool operator<(Edge const& other) {
		return weight < other.weight;
	}
};
int n,m,k;
vector<Edge> edges;
void kruskal()
{
	double cost = 0;
	parent.resize(m);
	ran.resize(m);
	for (int i = 0; i < m; i++)
		make_set(i);

	sort(edges.begin(), edges.end());

	for (Edge e : edges) {
		if (find_set(e.u) != find_set(e.v)) {
			union_sets(e.u, e.v);
			m--;
		}
		if (m <= n)
		{
			cout << ceil(e.weight) << endl;
			break;
		}
	}
	

}
double dist(pair<double, double>node1, pair<double, double>node2)
{
	return sqrt((node2.second - node1.second)*(node2.second - node1.second) + (node2.first - node1.first)*(node2.first - node1.first));
}
/////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	//don't open standing
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n;
		m = 0;double x,y,d;
		edges.clear();
		vector<pair<double, double>>dxy;
		while (cin>>x&&x!=-1)
		{
			cin >> y;
			dxy.push_back(make_pair(x, y));
			m++;
		}
		for (int i = 0; i < m; i++)
			for (int j = i + 1; j < m; j++)
				edges.push_back(Edge(i, j, d = dist(dxy[i], dxy[j])));
		kruskal();
	}
	system("pause");
	return 0;
	//don't open standing
	
}