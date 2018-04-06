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
set<char>st;
void count(string s, int n)
{
	for (int i = 0; i < n; i++)
		st.insert(s[i]);
}
int solve(string s, int n)
{
	int m = INT_MAX;
	map<char, int>mp;
	set<char>st2;
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		while (j < n&&st2.size() < st.size())
		{
			mp[s[j]]++;
			st2.insert(s[j]);
			j++;
		}
		if (st2.size() == st.size())
			m = min(m, j - i);
		mp[s[i]]--;
		if (mp[s[i]] <= 0)
		{
			st2.erase(s[i]);
		}
	}
	return m;
}

int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int n;
	string s;
	cin >> n >> s;
	count(s, n);
	int m = solve(s, n);
		cout<<m<< endl;
	
	//system("pause");
	return 0;
}