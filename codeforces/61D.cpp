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
int n;
vector<vector<pair<int,int>>>	v;
long long sum = 0;
int d[4][2] = { { 1, 0 }, { 0, 1 }, { -1, 0 }, { 0, -1 } };
//////////////////////////////////////////////////////////////////
long long dfs(int a,int b)
{
	long long count = 0;
	for (int i = 0; i < v[a].size(); i++)
	{
		if (v[a][i].first != b)
		{
			count = max(count,  v[a][i].second+dfs(v[a][i].first,a));

		}
	}
	return count;
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
	
	int n;
	cin >> n;
	v = vector<vector<pair<int, int>>>(n + 1);
	for (int i = 0; i < n-1; i++)
	{
		int x, y, z;
		cin >> x >> y >> z;
		v[x].push_back(make_pair(y, z));
		v[y].push_back(make_pair(x, z));
		sum += z;
	}
	sum *= 2;
	cout << sum - dfs(1, 0) << endl;
	

////	system("pause");

	return 0;
}