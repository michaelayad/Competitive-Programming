#include<iostream>	
#include<algorithm>
#include<cstdio>
#include<sstream>
#include<cmath>
#include<climits>
#include<string>
#include<iomanip>
#include<vector>
#include<map>
#include<fstream>
using namespace std;
//********************************************************************************************
//******************************************************************************************** 
/*
jesus help me.......
*/

/*
jesus help me.......
jesus help me.......
jesus help me.......
*/
 
 
 
 
int main()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
 
 
	//freopen("keys.in", "r", stdin);
 
	while (1)
	{
		string s, st;
		cin >> s >> st;
		if (s == "0"&&st == "0")
			break;
		reverse(s.begin(), s.end());
		reverse(st.begin(), st.end());
		int ans = 0, b = 0;
		if (s.size() < st.size())
		{
			while (s.size() < st.size())
			{
				s += '0';
			}
		}
		else
		{
			while (s.size() > st.size())
			{
				st += '0';
			}
		}
		for (int i = 0; i < st.size(); i++)
		{
			if ((s[i] - '0') + (st[i] - '0') + b > 9)
			{
				ans++;
				b = 1;
			}
			else
				b = 0;
		}
		if (ans == 0)
			cout << "No carry operation." << endl;
		else if (ans == 1)
			cout << "1 carry operation." << endl;
		else
			cout << ans << " carry operations." << endl;
	}
 
 
 
	system("pause");
	return 0;
}
/*
jesus help me.......
jesus help me.......
jesus help me.......
*/