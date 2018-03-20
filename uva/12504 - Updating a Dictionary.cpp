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

//jesus help me.......
void fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
}

int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int n;
	cin >> n;
	for (int j = 0; j < n; j++)
	{
		string d1, d2;
		cin >> d1 >> d2;
		map<string, string>mp1;
		map<string, string>mp2;
		map<string, string>::iterator it;
		map<string, string>::iterator it2;
		string s="", s2="";
		int m = 0;
		for (int i = 1; i < d1.size() ; i++)
		{
			if (d1[i] == ':')
			{
				m = 1;
				continue;
			}
			else if (d1[i] == ','||d1[i]=='}')
			{
				m = 0;
				mp1[s] = s2;
				s = "", s2 = "";
				continue;
			}

			if (m == 0)
				s += d1[i];
			else
				s2 += d1[i];
		}
		for (int i = 1; i < d2.size(); i++)
		{
			if (d2[i] == ':')
			{
				m = 1;
				continue;
			}
			else if (d2[i] == ',' || d2[i] == '}')
			{
				m = 0;
				
				mp2[s] = s2;
				s = "", s2 = "";
				continue;
			}

			if (m == 0)
				s += d2[i];
			else
				s2 += d2[i];
		}
		string o1 = "+"; string o2 = "-";string o3 = "*";
		for (it = mp1.begin(); it != mp1.end(); it++)
		{
			bool b = false;
			for (it2 = mp2.begin(); it2 != mp2.end(); it2++)
			{
				if (it->first == it2->first)
				{
					b = true;
					if (it->second != it2->second)
					{
						o3 += it->first;
						o3 += ',';
					}
					break;
				}
			}
			if (!b)
			{
				o2 += it->first;
				o2 += ',';
			}
		}
		for (it2 = mp2.begin(); it2 != mp2.end(); it2++)
		{
			bool b = false;
			for (it = mp1.begin(); it != mp1.end(); it++)
			{
				if (it->first == it2->first)
				{
					b = true;
					break;
				}
			}
			if (!b)
			{
				o1 += it2->first;
				o1 += ',';
			}
		}
		if (o1 == "+"&&o2 == "-"&&o3 == "*")
			cout << "No changes" << endl;
		if (o1 != "+"&&o1!="+,")
		{
			o1.pop_back();
			cout << o1 << endl;
		}
		if (o2 != "-"&&o2 != "-,")
		{
			o2.pop_back();
			cout << o2 << endl;
		}
		if (o3 != "*"&&o3 != "*,")
		{
			o3.pop_back();
			cout << o3 << endl;
		}
		cout << endl;
		
	}
	///system("pause");
	return 0;
}