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
struct point
{
	double x, y;

	bool operator < (point other) const { // override less than operator
		if (fabs(x - other.x) > EPS) // useful for sorting
			return x < other.x; // first criteria , by x-coordinate
		return y < other.y;
	}
}; // second criteria, by y-coordinat

int dx[] = { 1, 0, -1, 0, -1, -1, 1, 1 };
int dy[] = { 0, 1, 0, -1, -1, 1, -1, 1 };
double dist(point p1, point p2) 
{ 
	return hypot(p1.x - p2.x, p1.y - p2.y);
}
bool onSegment(point p, point q, point r)
{
	if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) &&
		q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y))
		return true;

	return false;
}

int orientation(point p, point q, point r)
{
	
	int val = (q.y - p.y) * (r.x - q.x) -	(q.x - p.x) * (r.y - q.y);

	if (val == 0) return 0;  

	return (val > 0) ? 1 : 2; 
}

bool doIntersect(point p1, point q1, point p2, point q2)
{
	
	int o1 = orientation(p1, q1, p2);
	int o2 = orientation(p1, q1, q2);
	int o3 = orientation(p2, q2, p1);
	int o4 = orientation(p2, q2, q1);

	if (o1 != o2 && o3 != o4)
		return true;

	if (o1 == 0 && onSegment(p1, p2, q1)) return true;

	if (o2 == 0 && onSegment(p1, q2, q1)) return true;

	if (o3 == 0 && onSegment(p2, p1, q2)) return true;

	if (o4 == 0 && onSegment(p2, q1, q2)) return true;

	return false; 
}
/////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	//don't open standing
	//don't open standing
	//don't open standing
	//don't open standing
	//don't open standing
	//don't open standing
	//	freopen("doroob.in", "r", stdin);
	int n;
	while (cin >> n&&n)
	{
		map<int,pair<point, point>>mp;
		set<int>st;
		set<int>::iterator it,it2;
		for (int i = 0; i < n; i++)
		{
			point p1, p2;
			cin >> p1.x >> p1.y >> p2.x >> p2.y;
			mp[i + 1] = make_pair(p1, p2);
			vector<int>v;
			for (it = st.begin(); it != st.end(); it++)
			{
				int z = *it;
				if (doIntersect(mp[z].first, mp[z].second, p1, p2))
					v.push_back(z);
			}
			for (int j = 0; j < v.size(); j++)st.erase(v[j]);
			st.insert(i+1);
		}
		it2 = st.end();
		it2--;
		cout << "Top sticks: ";
		for (it = st.begin(); it != it2; it++)
		{
			cout << *it << ", ";
		}
		cout << *it << "." << endl;
	}
	system("pause");
	return 0;
	//don't open standing

}