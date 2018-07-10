//#define _CRT_SECURE_NO_WARNINGS
//             ??? ??????? ??????
// link : http://codeforces.com/problemset/gymProblem/100814/D
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
	int n, k,m=0;
	cin >> n >> k;
	vector<int>v(n);
	bool b = true;
	for (int i = 0;i < n;i++)
	{
		cin >> v[i];
	}
	int i = 0, j = n - 1;
	while (j > i&&i < n&&j >= 0)
	{
		if (v[i] <= k)
		{
			m++;
			i++;
		}
		else if (v[j] <= k)
		{
			m++;j--;
		}
		else
			break;
	}
	if (i == j&&v[i] <= k)
		m++;
	cout << m << endl;

//	system("pause");
	return 0;
}