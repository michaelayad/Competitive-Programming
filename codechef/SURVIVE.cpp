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
 
 
 
 
 
bool sortbysec(const pair<string, int> &a, const pair<string, int> &b)
{
	
	return (a.second > b.second);
}
 
 
string st;
int n;
 
int recur(int n,int c)
{
	if (n < 0)
		return c;
	if (st[n] >= 'P'&&st[n] <= 'z')
	{
		
		return recur(n-1,c+1);
	}
	else if (st[n] == 'N'&&c == 0)
	{
		return -1;
	}
	else if (st[n] == 'N'&&c > 0)
	{
		return 	recur(n - 1 ,c);
	}
	else if (st[n] == 'C' || st[n] == 'I' || st[n] == 'D' || st[n] == 'E')
	{
		if (c < 2)
		{
			
			return -1;
		}
		else
		{
			
			return recur(n - 1,c-1);
		}
	}
	else 
		return -1;
 
 
 
}
 
 
int main()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
 
 
	//freopen("keys.in", "r", stdin);
 
	int t;
	cin >> t;
	while (t--)
	{
		int n, k, s;
		cin >> n >> k >> s;
		int tot = k*s;
		int d;
		if (tot%n == 0)
			d = tot / n;
		else
			d = (tot / n) + 1;
		int ss = s / 7;
		if (s - d >= ss)
			cout << d << endl;
		else
			cout << -1 << endl;
 
 
 
	}
 
	//system("pause");
 
 
	return 0;
}
/*
jesus help me.......
jesus help me.......
jesus help me.......
*/ 