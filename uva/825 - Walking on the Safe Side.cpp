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
int n,m;
int unsv[1001][1001];
int mem[1001][1001];
int dp(int i,int j)
{
	if (i > n || j > m)
		return 0;
	if (i == n&&j == m&&!unsv[i][j])
		return 1;
	if (unsv[i][j])
		return 0;
	int &ret = mem[i][j];
	if (ret != -1)
		return ret;
	return ret=dp(i, j + 1) + dp(i + 1, j);
}
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int t;
	cin >> t;
	int c = 0;
	while (t--)
	{
		memset(unsv, 0, sizeof(unsv));
		memset(mem, -1, sizeof(mem));
		cin >> n >> m;
		for (int i = 0;i < n;i++) {
			int a, b;
			cin >> a;
			string str;
			getline(cin, str);
			istringstream ss(str);
			while (ss >> b)
			{
				unsv[a][b] = 1;
			}
		}

		if (c)
			cout << endl;
		cout << dp(1, 1) << endl;
		c++;

	}
	system("pause");
	return 0;
}
