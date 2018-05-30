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
int ra, ca, rb, cb;
long long mt1[101][101], mt2[101][101];
///////////////////////////////////////////////////
void fun(int i,int j)
{
	if (i == ra&&j == cb)
		return;
	if (j == cb)
	{
		cout << endl;
		fun(i + 1, 0);
	}
	long long sum = 0;
	for (int ii = 0, jj = 0;ii < ca, jj < rb;ii++, jj++)
	{
		
			sum += (mt1[i][ii] * mt2[jj][j]);
	}
	cout << sum << " ";

}
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int n;
	cin >> n;
	vector<string>s(n);
	string ss[] = { "Power", "Time", "Space", "Soul", "Reality", "Mind" };
	string ss2[] = { "purple", "green", "blue", "orange", "red", "yellow" };
	for (int i = 0;i < n;i++)
	{
		cin >> s[i];
	}
	cout << 6 - n << endl;
	for (int i = 0;i < 6;i++)
	{
		bool b = true;
		for (int j = 0;j < n;j++)
		{
			if (ss2[i] == s[j])
			{
				b = false;
				break;
			}
		}
		if (b)
			cout << ss[i] << endl;
	}
//	system("pause");
	return 0;
}