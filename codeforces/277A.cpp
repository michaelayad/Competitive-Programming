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

///////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////
bool vis[105], arr[105][105];
int n, m;
void dfs(int node)
{
	vis[node] = 1;
	for (int i = 0;i < n;i++)
	{
		if (arr[node][i] && (!vis[i]))
			dfs(i);
	}
}
int connected()
{
	int cnt = 0;
	for (int i = 0;i < n;i++)
	{
		if (!vis[i])
		{
			cnt++;
			dfs(i);
		}
	}
	return cnt;
}
///////////////////////////////////////////////////////////
int main()
{
	//fast();
	//freopen("keys.in", "r", stdin);
	cin >> n >> m;
	bool bo = false;
	vector<vector<int>>v(n);
	for (int i = 0;i < n;i++)
	{
		int ln;
		cin >> ln;
		if (ln)
			bo = true;
		for (int j = 0;j < ln;j++)
		{
			int x;
			cin >> x;
			v[i].push_back(x);
		}
	}
	for (int i = 0;i < n;i++)
	{
		for (int j = i + 1;j < n;j++)
		{
			bool b = false;
			for (int h = 0;h < v[i].size();h++)
			{
				for (int g = 0;g < v[j].size();g++)
				{
					if (v[i][h] == v[j][g])
					{
						arr[i][j] = 1;
						arr[j][i] = 1;
						b = true;
						break;
					}

				}
				if (b)
					break;
			}

		}
	}
	if (bo)
		cout << connected() - 1 << endl;
	else
		cout << n << endl;
		system("pause");
	return 0;
}