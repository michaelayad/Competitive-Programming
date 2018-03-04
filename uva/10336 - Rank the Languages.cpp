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

//////////////////////////////////////////////////////////////////
void dfs(int node, vector<vector<int>>&v,vector<bool>&vis,vector<int> &topsort)
{
	vis[node] = true;
	for (int j = 0; j < v[node].size(); j++)
	{
		if (!vis[v[node][j]])
		{
			dfs(v[node][j],v,vis,topsort);
		}
	}
	topsort.push_back(node);

}
////////////////////////////////////////////////////////////////////
/*int connected_component()
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (!vis[i])
		{
			count++;
			dfs(i);
		}
	}
	return count;

}		*/
//////////////////////////////////////////////////////////////////
void flood_fill(int i,int j,int n,int m,char c,vector<string>s,vector<vector<int>>&vis)
{
	if (i < 0 || j < 0 || i == n || j == m || vis[i][j] == 1 || s[i][j] != c)
		return;

	vis[i][j] = 1;
	flood_fill(i-1,j,n,m,c,s,vis);
	flood_fill(i , j-1, n, m, c, s, vis);
	flood_fill(i + 1, j, n, m, c, s, vis);
	flood_fill(i , j+1, n, m, c, s, vis);


}
/////////////////////////////////////////////////////////////////
int main()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);


	//freopen("keys.in", "r", stdin);

	

	int t;
	cin >> t;
	for (int i = 1; i <=t ; i++)
	{
		int n, m;
		cin >> n >> m;
		vector<string>s(n);
		map<char, int>mp;
		map<char, int>::iterator it;
		vector<pair<char, int>> v;
		vector<vector<int>>vis(n, vector<int>(m, 0));
		for (int j = 0; j < n; j++)
			cin >> s[j];
		for (int h = 0; h < n; h++)
		{
			for (int j = 0; j < m; j++)
			{
				if (vis[h][j] !=1)
				{
					flood_fill(h, j, n, m, s[h][j], s, vis);
					mp[s[h][j]]++;
				}
			}
		}

		for (it = mp.begin(); it != mp.end(); it++)
		{
			v.push_back(make_pair(it->first, it->second));
		}
		sort(v.begin(), v.end(), sortbysec);
		cout << "World #" << i << endl;
		for (int j = 0; j < v.size(); j++)
		{
			cout << v[j].first << ": " << v[j].second << endl;
		}

	}

///	system("pause");

	return 0;
}
