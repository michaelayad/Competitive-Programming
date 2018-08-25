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

/////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	//don't open standing
	int t;
	cin >> t;
	int y = 1;
	while (t--)
	{
		double d, u, v;
		cin >> d >> v >> u;
		double tm1 = d / u,tm2=d/sqrt(u*u-v*v);
		if (v >= u || tm1 == tm2)
		{
			cout << "Case " << y++ << ": " << "can't determine" << endl;
		}
		else
		{
			cout << "Case " << y++ << ": ";
			cout << setprecision(3) << fixed << abs(tm1 - tm2) << endl;
		}
	}
	system("pause");
	return 0;
	//don't open standing
	
}