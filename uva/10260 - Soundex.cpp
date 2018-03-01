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

 
map<char, int>mp;
 
int main()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
 
 
	//freopen("keys.in", "r", stdin);
 
	mp['F'] = 1;
	mp['B'] = 1;
	mp['P'] = 1;
	mp['V'] = 1;
	mp['C'] = 2, mp['G'] = 2, mp['J'] = 2, mp['K'] = 2, mp['Q'] = 2, mp['S'] = 2, mp['X'] = 2, mp['Z'] = 2;
	mp['T'] = 3, mp['D'] = 3;
	mp['L'] = 4;
	mp['M'] = 5, mp['N'] = 5;
	mp['R'] = 6;
	string s;
	while (cin >> s)
	{
		string str = "";
		int a = 0;
		int x = mp[s[0]];
		if (x != 0)
		{
			str += (x + '0');
 
		}
 
		for(int i = 1; i < s.size(); i++)
		{
			int x = mp[s[i]];
			if (mp[s[i]] == mp[s[i - 1]])
				continue;
 
			if (x == 0)
			{
				continue;
 
			}
 
			str += (x + '0');
		}
		cout << str << endl;
	}
 
	//system("pause");
	return 0;
}
/*
jesus help me.......
jesus help me.......
jesus help me.......
*/