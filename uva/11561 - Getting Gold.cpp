//  #define _CRT_SECURE_NO_WARNINGS
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
#include<set>
#include<fstream>
using namespace std;
//********************************************************************************************
//******************************************************************************************** 
/*
jesus help me.......
*/
typedef long long lld;
typedef char c;



/*
jesus help me.......
jesus help me.......
jesus help me.......
*/



int binarySearch(int arr[], int l, int r, int x)
{
	while (l <= r)
	{
		int m = l + (r - l) / 2;

		if (arr[m] == x)
			return m;

		if (arr[m] < x)
			l = m + 1;

		else
			r = m - 1;
	}

	return -1;

}





bool sortbysec(const pair<char, int> &a, const pair<char, int> &b)
{
	return (a.second > b.second);
}
////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////
long long sum1(int n, long long a)
{
	if (n == 0)
		return 1;
	return 	a*sum1(n - 1, a + 1);


}
////////////////////////////////////////////////////////////////////
int n, m;
vector<vector<char>>	v;
int ans = 0;
int d[4][2] = { { 1, 0 }, { 0, 1 }, { -1, 0 }, { 0, -1 } };
//////////////////////////////////////////////////////////////////
void dfs(int a,int b)
{
	if (a<0||b<0||a>=n||b>=m||v[a][b] == '#')
		return;
	if (v[a][b] == 'G')
		ans++;

	v[a][b] = '#';
	int x, y;
	for (int i = 0; i < 4; i++)
	{
		x = a + d[i][0];
		y = b + d[i][1];
		if (v[x][y] == 'T')
			return;
	}
	for (int i = 0; i < 4; i++)
	{
		x = a + d[i][0];
		y = b + d[i][1];
		dfs(x, y);
	}
	
}
////////////////////////////////////////////////////////////////////
/*int connected_component(int n,vector<vector<int>>v,vector<bool>&vis)
{
int count = 0;
for (int i = 'A'; i <= n; i++)
{
if (!vis[i])
{
	count++;
	dfs(i,v,vis);
	}
}
return count;

}*/	
//////////////////////////////////////////////////////////////////
long long s = LLONG_MAX;

void flood_fill(int x,int y)
{
	

}
void fun()
{
	
}
/////////////////////////////////////////////////////////////////
int main()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);


	//freopen("keys.in", "r", stdin);
	
	while (cin >> m >> n)
	{
		
		v = vector<vector<char>>(n, vector<char>(m));
		int a,b;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> v[i][j];
				if (v[i][j] == 'P')
				{
					a = i;
					b = j;
				}
			}
		}

		dfs(a, b);
		cout << ans << endl;
		ans = 0;
	}
	
	////system("pause");

	return 0;
}