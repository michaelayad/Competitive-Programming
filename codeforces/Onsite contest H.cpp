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
#include<bitset>
using namespace std;
//********************************************************************************************
//******************************************************************************************** 
/*
jesus help me.......
*/



bool sortbysec(const pair<char, int> &a, const pair<char, int> &b)
{
	return (a.second > b.second);
}
////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////


int main()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);


	//freopen("keys.in", "r", stdin);
	int n, m,co=0;
	cin >> n;
	vector<int>v(n), v2(n + 2,0);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int l, r;
		cin >> l >> r;
		v2[l] += 1;
		v2[r + 1] += -1;
	}
	for (int i = 1; i <= n; i++)
	{
		v2[i] += v2[i - 1];
	}
	for (int i = 1; i <= n; i++)
	{
		if (v2[i] == 0)
			co ++;

	}
	cout << co << endl;
	for (int i = 1; i <= n; i++)
	{
		if (v2[i] == 0)
			cout << v[i-1] << " ";

	}
	 

/////////	system("pause");

	return 0;
}