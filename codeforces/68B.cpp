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
int arr[1000005];
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int n;
	double k;
	cin >> n >> k;
	vector<double>v(n);
	for (int i = 0;i < n;i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	double l =v[0], r = v[n-1],ans=v[0];
	while (r - l > EPS)
	{
		double md = (r + l) / 2;
		double sum = 0.00;
		for (int i = 0;i < n;i++)
		{
			if (v[i] > md)sum += ((v[i] - md)-((v[i]-md) * k / 100));
			else sum -= (md - v[i]);
		}
		if (sum >= 0.00)
		{
			ans = md;
			l = md;
		}
		else
			r = md;
	}
	cout << setprecision(9) << fixed << ans << endl;
	system("pause");
	return 0;
}