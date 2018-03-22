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
	string s;
	set<string>st;
	set<string>::iterator it;
	string ss = "";
	while (getline(cin, s))
	{
		bool b = false;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] >= 'A'&&s[i] <= 'Z')
			{
				s[i] += 32;
				ss += s[i];
			}
			else if (s[i] >= 'a'&&s[i] <= 'z')
			{
				ss += s[i];
			}
			else if (s[i]=='-'&&i!=s.size()-1)
			{
				ss += s[i];
			}

			else if (s[i] == '-'&&i == s.size() - 1)
			{
				b = true;

			}		 
			else
			{
				if (!ss.empty())
					st.insert(ss);
				ss = "";
			}
		}
		if (b)
			continue;
		if (!ss.empty())
			st.insert(ss);
		ss = "";
	}
	if (!ss.empty())
		st.insert(ss);
	for (auto it : st)
	{
		cout << it << endl;
	}

	//system("pause");
	return 0;
}