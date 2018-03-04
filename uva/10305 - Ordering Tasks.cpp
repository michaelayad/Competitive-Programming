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





bool sortbysec(const pair<int, char> &a, const pair<int, char> &b)
{
	return (a.first > b.first);
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
int main()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);


	//freopen("keys.in", "r", stdin);

	

	int n, m;
	
	int a , b;
	while (cin >> n >> m)	{

		if (n == 0 && m == 0)
			break;
		vector<vector<int>>v(n+1);
		vector<bool>vis(n+1);
		vector<int> topsort;
		for (int i = 0; i < m ; i++)
		{
			cin >> a >> b;
			v[b].push_back(a);
		}
		for (int i = 1; i <= n; i++)
		{
			if (!vis[i])
			{
				dfs(i,v,vis,topsort);
			}
		}

		for (int i = 0; i < topsort.size() - 1; i++)
		{
			cout << topsort[i] << " ";
		}
		cout << topsort[topsort.size() - 1] << endl;

	}
	if (m = 0)
	{

	}

//////	system("pause");

	return 0;
}
