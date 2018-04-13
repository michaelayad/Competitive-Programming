#define _CRT_SECURE_NO_WARNINGS
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
bool sortby(const pair<char, int>&a, const pair<char, int>&b)
{
	if (a.second == b.second)
		return a.first < b.first;
	 return a.second > b.second;
}
///////////////////////////////////////////////////////////////
int m, n,cnt;
vector<int>v;

//////////////////////////////////////////////////////////////
int solve(int i, int j)
{
	if (i == j)
		return 0;
	if (v[i] <= v[j])
		return cnt + 1 + solve(i + 1, j);
	return cnt + solve(i + 1, j);
}
//////////////////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		v = vector<int>(n);
		for (int i = 0;i < n;i++)
			cin >> v[i];
		int sum = 0;
		for (int i = 1;i < n;i++)
		{
			cnt = 0;
			sum += solve(0, i);

		}
		cout << sum << endl;
	}
	system("pause");
	return 0;
}