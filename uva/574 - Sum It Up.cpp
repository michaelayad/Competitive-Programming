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
int m, n,frs=0;
vector<int>v;
int vis[25],cur[200][25],chk[200][105], chk_num[105];

//////////////////////////////////////////////////////////////
void check()
{
	int cur2 = 0;
	memset(chk_num, 0, sizeof(chk_num));
	for (int i = 0;i < n;i++)
	{
		if (vis[i])
		{
			cur2 += v[i];
			chk_num[v[i]]++;
		}
	}
	if (cur2 == m)
	{
		bool b = true;
		for (int i = 0;i < frs;i++)
		{
			bool bb = true;
			for (int j = 0;j < n;j++)
			{
				if (chk[i][v[j]] != chk_num[v[j]])
				{
					bb = false;
					break;
				}
			}
			if (bb)
			{
				b = false;
				break;
			}

		}

		for (int i = 0;i < n&&b;i++)
		{
			if (vis[i]) {
				cur[frs][i] = vis[i];
				chk[frs][v[i]]++;
			}
		}
		if (b)
			frs++;
	}

}
//////////////////////////////////////////////////////////////
void solve(int i)
{
	if (i == n)
	{
		check();
		return;
	}
	vis[i] = 1;
	solve(i + 1);
	vis[i] = 0;
	solve(i + 1);

}

//////////////////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	while (cin >> m >> n&&n&&m)
	{
		v = vector<int>(n);
		memset(cur, 0, sizeof(cur));
		memset(vis, 0, sizeof(vis));
		memset(chk, 0, sizeof(chk));
		frs = 0;
		for (int i = 0;i < n;i++)
			cin >> v[i];
		solve(0);
		cout << "Sums of " << m << ":" << endl;
		if (!frs)
			cout << "NONE" << endl;
		bool p = false;
		for (int i = 0;i < frs;i++)
		{
			for (int j = 0;j < n;j++)
			{
				if (cur[i][j])
				{
					if (!p)
					{
						cout << v[j];
						p = true;
					}
					else
					{
						cout << "+" << v[j];
					}
				}
			}
			cout << endl;
			p = false;
		}
		
	}
	system("pause");
	return 0;
}