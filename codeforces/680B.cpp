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
	int n, a,co=0;
	cin >> n >> a;
	vector<int>v(n),v2,v3;
	for (int i = 0; i < n; i++)
		cin >> v[i];
	for (int i = a - 2; i >= 0; i--)
		v2.push_back(v[i]);
	for (int i = a; i < n; i++)
		v3.push_back(v[i]);
	if (v[a - 1])co++;
	if (v2.size() <= v3.size())
	{
		for (int i=0; i < v2.size(); i++)if (v2[i] == v3[i] && v2[i] == 1)	co+=2; 
		for (int i=v2.size(); i < v3.size(); i++) if (v3[i] == 1)co++; 
	}
	else
	{
		for (int i = 0; i < v3.size(); i++)if (v2[i] == v3[i] && v2[i] == 1)	co += 2;
		for (int i = v3.size(); i < v2.size(); i++) if (v2[i] == 1)co++;
	}
	cout << co << endl;


////	system("pause");

	return 0;
}