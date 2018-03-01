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
 
	string s;
	while (getline(cin, s))
	{
		istringstream ss(s);
		string s2;
		int i = 0;
		while (ss >> s2)
		{
			reverse(s2.begin(), s2.end());
			if (i == 0)
				cout << s2;
			else
				cout << " " << s2;
			i++;
		}
		cout << endl;
 
	}
 
 
	////////("pause");
 
	return 0;
}