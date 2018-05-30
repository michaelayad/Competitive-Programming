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
int arr[1000000];

/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int n, q;
	while (cin >> n >> q)
	{
		map<pair<int, int>, int>mp;
		memset(arr, 0, sizeof(arr));
		for (int i = 0;i < n;i++)
		{
			int a;
			cin >> a;
			arr[a]++;
			mp[make_pair(arr[a], a)] = i + 1;
		}
		for (int i = 0;i < q;i++)
		{
			int a, b;
			cin >> a >> b;
			if (a > arr[b])
				cout << 0 << endl;
			else
				cout << mp[make_pair(a, b)] << endl;
		}
	}
	system("pause");
	return 0;
}
