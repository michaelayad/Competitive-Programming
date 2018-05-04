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
vector<vector<int>>v2;
int mx = INT_MIN;
//////////////////////////////////////////////////////////////////
void dfs(int a, int l)
{
	
	mx = max(mx, l);
	for (int i = 0; i < v2[a].size(); i++)
	{
		dfs(v2[a][i], l + 1);
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
void flood_fill(long long n, long long m, long long a, vector<long long>&v)
{
	if (v[n] == 1||n<=0)
		return;
	if (n == m)
	{
		if (a < s)
			s = a;
		return;
	}
	v[n] = 1;
	if (n > m)
	{
		flood_fill(n - 1, m, a + 1,v);

	}
	if (n < m)
	{	 
		flood_fill(n - 1, m, a + 1, v);
		flood_fill(n * 2, m, a + 1, v);
		
	}
	v[n] = 0;
	
		return;


}
/////////////////////////////////////////////////////////////////
int main()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);


	//freopen("keys.in", "r", stdin);
	int n;
	cin >> n;
	vector<int>v(n+1);
	v2 = vector<vector<int>>(n+1);
	for (int i = 1; i <= n; i++)
	{
		cin >> v[i];
		if (v[i] != -1)
			v2[v[i]].push_back(i);

	}
	for (int i = 1; i <= n; i++)
	{
		if (v[i] == -1)
			dfs(i, 1);
	}
	cout << mx << endl;

////	system("pause");

	return 0;
}