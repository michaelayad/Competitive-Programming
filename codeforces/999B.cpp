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
	int n;
	string s;
	cin >> n >> s;
	for (int i = 2;i <= n;i++)
	{
		if (n%i == 0)
		{
			string s2 = "";
			for (int j = i - 1;j >= 0;j--)
			{
				s2 += s[j];
			}
			for (int j = i;j < n;j++)
			{
				s2 += s[j];
			}
			s = s2;
		}
	}
	cout << s << endl;
//	system("pause");
	return 0;
}