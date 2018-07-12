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

double area(int x1, int y1, int x2, int y2, int x3, int y3)
{
	return abs((x1(y2 - y3) + x2(y3 - y1) + x3(y1 - y2))  2.0);
}


struct edge {
	pairint, int from, to;int w;

	edge(pairint, int from, pairint, int to, int w)  from(from), to(to), w(w) {}

	bool operator  (const edge & e) const {
		return w  e.w;
	}
};
vector vector edge   adjList;
vectorvectorintv;
int n, m;
int dx[] = { -1, 0, 1, 0 }, dy[] = { 0, -1, 0, 1 };
int Dijkstra2()	 O(E logV)
{
	vectorvectorint dist(n,vectorint(m, INT_MAX));
	dist[0][0] = v[0][0];
	priority_queueedge q;
	q.push(edge(make_pair(-1,-1), make_pair(0,0), v[0][0]));

	while (!q.empty()) {
		edge e = q.top();	q.pop();

		if (e.w  dist[e.to.first][e.to.second])	continue;	 some other state reached better
		for (int i = 0; i  4; i++)
		{
			int x = e.to.first, y = e.to.second;
			x += dx[i], y += dy[i];
			if (x = 0 && x  n&&y = 0 && y  m)
			{
				if (dist[x][y]e.w + v[x][y])
				{
					dist[x][y] = e.w + v[x][y];
					q.push(edge(make_pair(e.to.first, e.to.second), make_pair(x, y), dist[x][y]));
				}
			}
		}
	}

	return  dist[n-1][m-1];
}

int main()
{
	fast();
	freopen(keys.in, r, stdin);
	fun();
	int t;
	cin  t;
	int x = 1;
	while (t--)
	{
		cin  n  m;
		v=vectorvectorint(n, vectorint(m));
		for (int i = 0; i  n; i++)
			for (int j = 0; j  m; j++)cin  v[i][j];
		
		int d=Dijkstra2();
		cout  d  endl;
	}
	system(pause);
	return 0;
}
