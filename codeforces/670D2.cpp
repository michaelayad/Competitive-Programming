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
///////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////

int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	long long n, k;
	cin >> n >> k;
	vector<int>v(n),v2(n);
	for (int i = 0;i < n;i++)
		cin >> v[i];
	for (int i = 0;i < n;i++)
		cin >> v2[i];
	long long l = 0, r = 2000000005;
	long long md;
	while (l < r)
	{
		md = l + (r - l+1) / 2;
		bool b = true;long long m = k;
		for (int i = 0;i < n;i++)
		{
			if (v2[i] >= (md*v[i]))
				continue;
			else
			{
				if (m >= ((v[i] * md) - v2[i]))
				{
					m -= ((v[i] * md) - v2[i]);
				}
				else
				{
					b = false;
					break;
				}
				if (!b)
					break;
			}
		}
		if (b)
			l = md;
		else
			r = md - 1;
	}
	cout << l<< endl;
	system("pause");
	return 0;
}