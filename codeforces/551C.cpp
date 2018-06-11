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
int n, m;
int arr[100005];
bool solve(long long md,int tm)
{
	int a[100005];
	for (int i = 1;i <= n;i++)
		a[i] = arr[i];
	int j = tm;
	for (int i = 1;i <= m;i++)
	{
		long long ans = md - j;
		while (j >= 1 && ans >= a[j])ans -= a[j--];
		if (j >= 1)
			a[j] -= ans;
		else
			return 1;
	}
	return 0;
}
/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	cin >> n >> m;
	int tm = 0;
	for (int i = 1;i <= n;i++)
	{
		cin >> arr[i];
		if (arr[i])tm = i;
	}
	long long l = 1, r = LLONG_MAX;
	long long md = l + (r - l) / 2;
	long long ans = 1;
	while (l <= r)
	{
		md = l + (r - l) / 2;
		if (solve(md,tm))
		{
			ans = md;
			r = md - 1;
		}
		else
			l = md + 1;
	}
	cout << ans << endl;
		system("pause");
	return 0;
}