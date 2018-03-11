 #define _CRT_SECURE_NO_WARNINGS
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
#include<deque>
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
	while (cin >> s)
	{
		deque<string>de;
		char c = ']';
		string str = "";
		int x = 0;
		while (x < s.size())
		{
			if (s[x] == '[')
			{
				if (c == '[')
					de.push_front(str);
				else
					de.push_back(str);
				c = '[';
				str = "";
			}
			else if (s[x] == ']')
			{
				if (c == '[')
					de.push_front(str);
				else
					de.push_back(str);
				c = ']';
				str = "";
			}
			else
				str += s[x];
			x++;
		}
		if (c == '[')
			de.push_front(str);
		else
			de.push_back(str);
		for (int i = 0; i < de.size(); i++)
		{
			cout << de[i];
		}
		cout << endl;

	}

	system("pause");
	return 0;
}