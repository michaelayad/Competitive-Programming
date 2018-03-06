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
	cin >> s;
	int n = s.size();
	vector<int>ch(26);
	for (int i = 0; i < 26; i++)
	{
		cin >> ch[i];
	}
	int i, j;
	for (i = 0; i < n; i++)
	{
		if (s[i] == '?')
		{
			for (j = i + 1; j < n; j++)
			{
				if (s[j] != '?')
				{
					break;
				}
			}

			if (i == 0 && j == n)
			{
				
				for (i; i < j; i++)
				{
					s[i] = 'a';
				}
			}
			else if (i == 0 && j < n)
			{
				char c;
				for (int h = 0; h < 26; h++)
				{
					if (ch[h] == (ch[s[j] - 'a']))
					{
						c = h + 'a';
						break;
					}
				}
				for (i; i < j; i++)
				{
					s[i] = c;
				}

			}
			else if (i>0 && j == n)
			{
				char c;
				for (int h = 0; h < 26; h++)
				{
					if (ch[h] == (ch[s[i-1] - 'a']))
					{
						c = h + 'a';
						break;
					}
				}
				for (i; i < j; i++)
				{
					s[i] = c;
				}
			}
			else
			{
				int mn = INT_MAX;
				char c;
				for (int h = 0; h < 26; h++)
				{
					int be = abs(ch[h] - ch[s[i-1]-'a']);
					int en = abs(ch[h] - ch[s[j]-'a']);
					en += be;
					if (en < mn)
					{
						mn = en;
						c = h + 'a';
					}
				}
				for (i; i < j; i++)
				{
					s[i] = c;
				}
			}
			i = j;
		}
		
	}
	long long sum=0;
	for (int i = 0; i < n - 1; i++)
	{
		sum += (abs(ch[s[i] - 'a'] - ch[s[i + 1] - 'a']));
	}
	cout << sum << endl;
	cout << s << endl;

	///system("pause");
	return 0;
}