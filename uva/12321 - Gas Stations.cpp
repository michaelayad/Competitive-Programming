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

/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int l, n;
	while (cin >> l >> n&&n&&l)
	{
		vector<pair<int, int>>v(n);
		for (int i = 0;i < n;i++)
		{
			int x1, l1;
			cin >> x1 >> l1;
			v[i] = make_pair(x1 - l1, x1 + l1);
		}
		sort(v.begin(), v.end());
		int r = 0, i = 0,l1=0,nn=n;
		while (r < l)
		{
			int r1 = r;
			while (r1 < l&&i < n&&v[i].first <= r)
			{
				if (v[i].second>r1)
					r1 = v[i].second;
				i++;
			}
			if (r1 == r)break;
			r = r1;
			nn--;
		}
		if (r < l)
			cout << -1 << endl;
		else
			cout << nn << endl;
	}
	system("pause");
	return 0;
}