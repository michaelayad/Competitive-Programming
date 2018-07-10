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
int arr[28];
/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	for (int i = 0;i < n;i++)
	{
		arr[s[i] - 'a' + 1]++;
	}
	for (int i = 1;i <=26;i++)
	{
		for (int j = 0;j < n&&arr[i]>0 && k>0;j++)
		{
			if (s[j] == (i + 'a' - 1))
			{
				s[j] = '.';
				k--;
				arr[i]--;
			}
		}
	}
	for (int i = 0;i < n;i++)
		if (s[i] != '.')
			cout << s[i];
	cout << endl;
	//system("pause");
	return 0;
}