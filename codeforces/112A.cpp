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
	string s, s2;
	cin >> s >> s2;
	int n=0, m=0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'a'&&s[i] <= 'z')
			n += (s[i] - 'a');
		else
			n += (s[i] - 'A');
		if (s2[i] >= 'a'&&s2[i] <= 'z')
			m += (s2[i] - 'a');
		else
			m += (s2[i] - 'A');
		if (n > m)
		{
			cout << 1 << endl;
			return 0;
		}
		else if (n < m)
		{
			cout << -1 << endl;
			return 0;
		}
	}
	cout << 0 << endl;
////////	system("pause");

	return 0;
}