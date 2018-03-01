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
		int m = 0;
 
		while (ss >> s2)
		{
			bool b = true;
			for (int i = 0; i < s2.size(); i++)
			{
				if (((s2[i] >= 'A'&&s2[i] <= 'Z') || (s2[i] >= 'a'&&s2[i] <= 'z')))
				{
					if (b)
					{
						m++;
						b = false;
					}
				}
				else
				{
					b = true;
				}
 
			}
		}
		cout << m << endl;
 
 
	}
 
 
////////////	system("pause");
 
	return 0;
}