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
	int n, k;
	while (cin >> n >> k)
	{
		vector<long long>v(n);
		for (int i = 0;i < n;i++)
			cin >> v[i];
		long long l = 0, r = LLONG_MAX;
		while (l < r)
		{
			long long md = l + (r - l) / 2;
			long long ans = 0;
			long long cap = 0;
			bool b = true;
			for (int i = 0;i < n;i++)
			{
				if (v[i] > md) { b = false; break; }
				cap += v[i];
				if (cap > md)
				{
					ans++;
					cap = v[i];
				}
			}
			if (b&&(ans+1) <= k)
			{
				r = md;
			}
			else
			{
				l = md + 1;
			}

		}
		cout << r << endl;
	}
	//system("pause");
	return 0;
}