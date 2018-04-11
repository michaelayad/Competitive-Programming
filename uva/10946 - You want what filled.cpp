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
vector<string>v;
int vis[55][55];
int cnt;
void flood_fill(int i,int j,int n,int m,char c)
{
	if (i >= n || i < 0 || j >= m || j < 0 || v[i][j] != c || vis[i][j] == 1)
		return;
	vis[i][j] = 1;
	cnt++;
	flood_fill(i + 1, j, n, m, c);
	flood_fill(i , j+1, n, m, c);
	flood_fill(i - 1, j, n, m, c);
	flood_fill(i , j-1, n, m, c);

}

		
bool sortby(const pair<char, int>&a, const pair<char, int>&b)
{
	if (a.second == b.second)
		return a.first < b.first;
	 return a.second > b.second;
}


int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int n, m;
	int t = 1;
	while (cin >> n >> m&&n&&m)
	{
		v = vector<string>(n);
		for (int i = 0;i < n;i++)
		{
			cin >> v[i];
		}
		vector<pair<char, int>>v2;
		for (int i = 0;i < n;i++)
		{
			for (int j = 0;j < m;j++)
			{
				cnt = 0;
				if(v[i][j]!='.')
					flood_fill(i, j, n, m, v[i][j]);
				if (cnt)
				{
					v2.push_back(make_pair(v[i][j], cnt));
				}
			}
		}
		sort(v2.begin(), v2.end(), sortby);
		cout << "Problem " << t++ << ":" << endl;
		for (int i = 0;i < v2.size();i++)
		{
			cout << v2[i].first << " " << v2[i].second << endl;
		}
		memset(vis, 0, sizeof(vis));
	}

	system("pause");
	return 0;
}