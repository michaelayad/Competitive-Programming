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

int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int n;
	while (cin >> n&&n)
	{
		map<vector<int>, int>mp;
		map<vector<int>, int>::iterator it;
		vector<int>v(5);
		for (int i = 0;i < n;i++) {
			for (int i = 0;i < 5;i++)
			{
				cin >> v[i];
			}
			sort(v.begin(), v.end());
			mp[v]++;
		}
		int mx = 0,co=0;
		for (it = mp.begin();it != mp.end();it++)
			if (it->second > mx)mx = it->second;
		for (it = mp.begin();it != mp.end();it++)
			if (it->second == mx)co++;
		cout << co*mx << "\n";
	}


	system("pause");
	return 0;
}