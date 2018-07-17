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
/*vector<int>parent, ran;

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
	int u, v; long long weight;
	bool operator<(Edge const& other) {
		return weight < other.weight;
	}
};
int vis[10005];
void fun(){
	int n, r, m = 1,a,t,z=1;
	cin >> t;
	while (t--){
		cin >> n >> m >> a;
		vector<Edge> edges,used,notused;
		long long cost = 0;
		vector<Edge> result;
		parent = vector<int>(n + 1);
		memset(vis, 0, sizeof(vis));
		ran = vector<int>(n + 1);
		for (int i = 1; i <= n; i++)
			make_set(i);
		for (int i = 1; i <= m; i++)
		{
			int x, y;long long c;
			cin >> x >> y >> c;
			Edge e1;
			e1.u = x, e1.v = y, e1.weight = c;
			edges.push_back(e1);
			
		}
		sort(edges.begin(), edges.end());
		int ans = INT_MAX;

		for (Edge e : edges) {
			if (find_set(e.u) != find_set(e.v)) {
				cost += e.weight;
				union_sets(e.u, e.v);
			
			}
			
		}
		long long b = 0;
		for (int i = 1; i <= n; i++)
		{
			if (parent[i] == i)b++;
		}
		cout << "Case #"<<z++<<": "<<b*a+cost<<" "<<b << endl;
	}
}*/
bool vis[100005];
/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	//fun();
	int n, m, v;
	cin >> n >> m >> v;
	vector<int>ed1,ed2;
	if (v == 1)
	{

		if (m){
			ed1.push_back(v);
			ed2.push_back(2);
			m--;
			vis[v] = 1, vis[2] = 1;
		}
		for (int i = 3; i <= n&&m; i++)
		{
			ed1.push_back(v);
			ed2.push_back(i);
				
				m--;
				vis[v] = 1, vis[i] = 1;
		}
		for (int i = 3; i <= n; i++)
		{
			for (int j = i + 1; j <= n&&m; j++){
				ed1.push_back(j);
				ed2.push_back(i);
				
					m--;
					vis[j] = 1, vis[i] = 1;
				
			}
		}
	}
	else
	{
		
		if (m){
			ed1.push_back(v);
			ed2.push_back(1);
			m--;
			vis[v] = 1, vis[1] = 1;
		}
		for (int i = 2; i <= n&&m; i++)
		{
			if (i != v)
			{
				ed1.push_back(v);
				ed2.push_back(i);
				m--;
				vis[v] = 1, vis[i] = 1;
			}
		}
		for (int i = 2; i <= n; i++)
		{
			for (int j = i + 1; j <= n&&m; j++){
				if (i != v && j!=v)
				{
					ed1.push_back(j);
					ed2.push_back(i);
					m--;
					vis[j] = 1, vis[i] = 1;
				}
			}
		}
	}
	if (!m)
	{
		bool b = true;
		for (int i = 1; i <= n; i++)if (!vis[i])b = false;
		if (b)
		{
			for (int i = 0; i < ed1.size(); i++)
			{
				cout << ed1[i]<< " " << ed2[i]<< endl;
			}
		}
		else
			cout << -1 << endl;
	}
	else
	{
		cout << -1 << endl;
	}
//	system("pause");
	return 0;
}