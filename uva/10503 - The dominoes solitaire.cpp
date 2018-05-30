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
int n, m;
int sa, sb, ea, eb;
int in_a[15], in_b[15];
bool vis[15];
bool backtrack(int co,int prev)
{
	if (co == n && (prev != ea))
		return 0;
	if (co == n)
		return 1;
	for (int i = 0;i < m;i++)
	{
		bool a=false, b=false;
		if (!vis[i] && (in_a[i] == prev))
		{
			vis[i] = true;
			a = backtrack(co + 1, in_b[i]);
			vis[i] = false;
		}
		if (!vis[i] && (in_b[i] == prev))
		{
			vis[i] = true;
			b = backtrack(co + 1, in_a[i]);
			vis[i] = false;
		}
		if (a || b)
			return 1;
	}
	return 0;
}
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	while (cin >> n&&n)
	{
		cin >> m;
		cin >> sa >> sb >> ea >> eb;
		for (int i = 0; i < m;i++)
			cin >> in_a[i] >> in_b[i];
		if ( backtrack(0, sb))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	system("pause");
	return 0;
}
