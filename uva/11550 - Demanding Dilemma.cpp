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

/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		vector<vector<int>>v(n, vector<int>(m));
		vector<vector<int>>v2(n, vector<int>(n,0));
		int x, y;
		for (int i = 0;i < n;i++)
		{
			for (int j = 0;j < m;j++)
			{
				cin >> v[i][j];
			}
		}
		int err = 0;
		for (int i = 0;i < m&&!err;i++)
		{
			int cnt = 0;
			for (int j = 0;j < n;j++)
			{
				if (v[j][i])
				{
					if (cnt == 0)x = j;
					else y = j;
					cnt++;
				}
			}
			if (cnt != 2)err = 1;
			else
			{
				if (v2[x][y])err = 1;
				v2[x][y] = v2[y][x] = 1;
			}
		}
		if (err)cout << "No" << endl;
		else cout << "Yes" << endl;
	}
	system("pause");
	return 0;
}
