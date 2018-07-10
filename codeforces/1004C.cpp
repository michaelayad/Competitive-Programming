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
int arr[100005];
bool vis[100005];
/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int n;
	cin >> n;
	vector<long long>v(n);
	set<long long>st;
	map<long long,int>mp;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i]; arr[v[i]]++;
		st.insert(v[i]);
		mp[v[i]] = i;
	}
	long long m = n - 1,ans=0;
	for (int i = 0; i < n-1; i++)
	{
		if (!vis[v[i]])
		{
			if (mp[v[i]] != i)
			{
				ans += st.size();
			}
			else
			{
				ans += (st.size() - 1);
				st.erase(v[i]);
			}
			vis[v[i]] = 1;
		}
		else
		{
			if (mp[v[i]] == i)
			{
				st.erase(v[i]);
			}
		}
	}
	cout << ans << endl;
//	system("pause");
	return 0;
}