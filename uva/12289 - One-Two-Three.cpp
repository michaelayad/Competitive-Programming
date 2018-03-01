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
 
 
int main()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
 
 
	//freopen("keys.in", "r", stdin);
 
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		if (s.size() == 5)
		{
			cout << "3" << endl;
			continue;
		}
		vector<char>c1(3),c2(3);
		c1 = { 'o', 'n', 'e' };
		c2 = { 't', 'w', 'o' };
		int a1 = 0, a2 = 0;
		for (int i = 0; i < 3; i++)
		{
			if (s[i] == c1[i])
				a1++;
 
			if (s[i] == c2[i])
				a2++;
		}
		if (a1 == 2 || a1 == 3)
			cout << "1" << endl;
		else
			cout << "2" << endl;
	}
 
	////system("pause");
 
	return 0;
}