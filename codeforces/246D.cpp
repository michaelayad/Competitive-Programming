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
	
	int n, m;
	cin >> n >> m;
	vector<int>	v(n+1);
	map<int, set<int>>mp;
	map<int, set<int>>::iterator it;
	int mo = INT_MAX;
	for (int i = 1; i <= n; i++)
	{
		cin >> v[i];
		mo = min(v[i], mo);
	}
	for (int i = 1; i <= m; i++)
	{
		int a,b;
		cin >> a >> b;
		if (v[a] != v[b])
		{
			mp[v[a]].insert(v[b]);
			mp[v[b]].insert(v[a]);
		}
	}
	if (mp.size() == 0)
	{
		cout << mo << endl;
		return 0;
	}
	int ma = -1;int fin = INT_MAX;
	for (it = mp.begin(); it != mp.end(); it++)
	{
		int g = it->second.size();
		if (g > ma)
		{
			fin = it->first; 
			ma = g;
		}
		if (g == ma)
		{
			fin = min(fin, it->first);
		}

	}
	cout << fin << endl;

	
///system("pause");

	return 0;
}