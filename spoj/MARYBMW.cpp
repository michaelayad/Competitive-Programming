#define _CRT_SECURE_NO_WARNINGS
             »”„ «·À«·ÊÀ «·«ﬁœ”

#includeiostream	
#includealgorithm
#includecstdio
#includesstream
#includecmath
#includeclimits
#includestring
#includeiomanip
#includevector
#includestack
#includemap
#includequeue
#includedeque
#includeset
#includefstream
#includebitset
#include cstring
using namespace std;
const double EPS = 1e-8;
jesus help me.......
void fast()
{
	stdios_basesync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
}
		

bool sortby(const pairint, int&a, const pairint, int&b)
{
	if (a.first = b.first&&a.second = b.second)
		return true;
	return false;
}

vectorint parent, ran;

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
		if (ran[a]  ran[b])
			swap(a, b);
		parent[b] = a;
		if (ran[a] == ran[b])
			ran[a]++;
	}
}

struct Edge {
	int u, v;long long weight;
	Edge(int u, int v, long long weight) u(u), v(v), weight(weight) {};
	bool operator(Edge const& other) {
		return weight  other.weight;
	}
};
int n,m,k;
vectorEdge edges;
void kruskal()
{
	long long cost = 0;
	parent.resize(n+1);
	ran.resize(n+1);
	for (int i = 1; i =n; i++)
		make_set(i);

	sort(edges.begin(), edges.end());

	for (Edge e  edges) {
		if (find_set(e.u) != find_set(e.v)) {
			union_sets(e.u, e.v);
		}
		if (find_set(1) == find_set(n))
		{
			cout  e.weight  endl;
			return;
		}
	}
	cout  -1  endl;
}
double dist(pairdouble, doublenode1, pairdouble, doublenode2)
{
	return sqrt((node2.second - node1.second)(node2.second - node1.second) + (node2.first - node1.first)(node2.first - node1.first));
}

int main()
{
	fast();
	freopen(keys.in, r, stdin);
	don't open standing
	int t;
	cin  t;
	while (t--)
	{
		cin  n  m;
		edges.clear();
		for (int i = 0; i  m; i++)
		{
			int u, v;
			long long c;
			cin  u  v  c;
			edges.push_back(Edge(u, v, c));
		}
		kruskal();
	}
	system(pause);
	return 0;
	don't open standing
	
}