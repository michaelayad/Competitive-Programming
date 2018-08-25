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
	// Euclidean distance
	// hypot(dx, dy) returns sqrt(dx * dx + dy * dy)
	return hypot(p1.x - p2.x, p1.y - p2.y);
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
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<point>v(n);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i].x >> v[i].y;
		}
		double ans = 0.0;
		sort(v.begin(), v.end());
		double mx = 0.0;
		for (int i = n - 2; i >= 0; i--)
		{
			if (v[i].y > mx)
			{
				double z1 = v[i].y - mx,z2=v[i].y-v[i+1].y;
				double z = z1 / z2;
				double d = dist(v[i], v[i + 1]);
				ans += (d*z);
				mx = v[i].y;
			}
		}
		cout << setprecision(2) << fixed << ans << endl;
	}
	system("pause");
	return 0;
	//don't open standing

}