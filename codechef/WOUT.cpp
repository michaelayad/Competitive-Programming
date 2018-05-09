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
long long arr[1000005];
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int t;
	cin >> t;
	while (t--)
	{
		
		arr[0] = 0;
		long long n, h;
		cin >> n >> h;
		for (int i = 1;i <= n;i++)
		{
			long long x, y;
			cin >> x >> y;
			arr[x+1]++;
			arr[y + 2]--;
		}
		for (int i = 1;i <= n;i++)
		{
			arr[i] += arr[i - 1];
		}
		for (int i = 1;i <= n;i++)
		{
			arr[i] += arr[i - 1];
		}
		long long mn = 10000000000000,to=n*h;
		for (int i = 0;i <= n - h ;i++)
		{
			long long mn2 = to-( arr[i + h] - arr[i]);
			mn = min(mn, mn2);
		}
		cout << mn << endl;
		for (int i = 0;i <= n;i++)
			arr[i] = 0;
	}
	system("pause");
	return 0;
}