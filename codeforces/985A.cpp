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
///////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////
int w[101], b[101];
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int n;
	cin >> n;
	vector<int>v(n / 2);
	for (int i = 0;i < n/2;i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	int ws = 0, bs = 0;
	int i = 1;
	while (i <= n)
	{
		for (int j = 0;j < n / 2;j++)
		{
			if (!w[v[j]])
			{
				ws += abs(v[j] - i);
				w[v[j]] = 1;
				break;
			}
		}
		i += 2;
	}
	i = 2;
	while (i <= n)
	{
		for (int j = 0;j < n / 2;j++)
		{
			if (!b[v[j]])
			{
				bs += abs(v[j] - i);
				b[v[j]] = 1;
				break;
			}
		}
		i += 2;
	}
	if (bs <= ws)
		cout << bs << endl;
	else
		cout << ws << endl;
	
//	system("pause");
	return 0;
}