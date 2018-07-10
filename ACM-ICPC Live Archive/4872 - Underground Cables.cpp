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
vector<int>parent, ran;

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
	bool operator<(Edge const& other) {
		return weight < other.weight;
	}
};

void fun(){
	int n, r,m=1;
	while (cin >> n &&n){
		vector<Edge> edges;
		vector<double>dx(n + 1), dy(n + 1);
		double cost = 0;
		vector<Edge> result;
		parent = vector<int>(n + 1);
		ran = vector<int>(n + 1);
		for (int i = 1; i <= n; i++)
			make_set(i);
		for (int i = 1; i <= n; i++)
		{
			cin >> dx[i] >> dy[i];
		}
		for (int i = 1; i <= n; i++)
		{
			for (int j = i + 1;j <= n; j++)
			{
				Edge e1;
				e1.u = i; e1.v = j;
				e1.weight = sqrt(pow(dx[i] - dx[j], 2) + pow(dy[i] - dy[j], 2));
				edges.push_back(e1);
			}
		}
		sort(edges.begin(), edges.end());
		int ans=INT_MAX;
		
		for (Edge e : edges) {
			if (find_set(e.u) != find_set(e.v)) {
				cost += e.weight;
				union_sets(e.u, e.v);
			}
		}
		cout << setprecision(2) << fixed << cost << endl;
	}
}
/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	fun();
	
	//system("pause");
	return 0;
}