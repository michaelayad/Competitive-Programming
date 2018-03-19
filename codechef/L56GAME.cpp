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
 
 
 
 
 
bool sortbysec(const pair<int, char> &a, const pair<int , char> &b)
{
	return (a.first > b.first);
}	
////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////
long long sum1(int n,long long a)
{
	if (n == 0)
		return 1;
	return 	a*sum1(n - 1, a + 1);
	
 
}
////////////////////////////////////////////////////////////////////
void fun(int a, int b,int m,int n, vector<vector<char>>v,int i,string s)
{
	if (i == 6)
	{
		if (a - 1 >= 0)
		{
			if (v[a - 1][b] == '#')
			{
				cout << "forth";
				return;
 
			}
		}
		if (b - 1 >= 0)
		{
 
			if (v[a][b - 1] == '#')
			{
				cout << "left";
				return;
 
			}
		}
		if (b + 1 < n)
		{
			if (v[a][b + 1] == '#')
			{
				cout << "right";
				return;
			}
		}
	}
	if (a - 1 >= 0)
	{
		if (v[a - 1][b] == s[i])
		{
			cout << "forth" << " ";
			fun(a - 1, b, n, m, v, i + 1, s);
		}
	}
	if (b - 1 >= 0)
	{
		if (v[a][b - 1] == s[i])
		{
			cout << "left" << " ";
			fun(a , b-1, n, m, v, i + 1, s);
		}
	}
	if (b + 1 < n)
	{
		if (v[a][b + 1] == s[i])
		{
			cout << "right" << " ";
			fun(a, b + 1, n, m, v, i + 1, s);
		}
 
	}	
 
 
 
}
////////////////////////////////////////////////////////////////////
 
int main()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
 
 
	//freopen("keys.in", "r", stdin);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int>v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if ((v[i] + v[j]) % 2 == 0)
				{
					v[i] += v[j];
					v.erase(v.begin() + j);
					i = -1;
					n--;
					break;
				}
			}
		}
 
		cout << v.size() << endl;
 
	}
		
	
 
	/////system("pause");
 
 
	return 0;
}