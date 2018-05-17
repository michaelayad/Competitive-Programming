//#define _CRT_SECURE_NO_WARNINGS
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
#include <cstring>
using namespace std;
const double EPS = 1e-8;
//jesus help me.......
void fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
}
///////////////////////////////////////////////////////////////		
///////////////////////////////////////////////////////////
bool sortby(const pair<int, int>&a, const pair<int, int>&b)
{
	if (a.first >= b.first&&a.second >= b.second)
		return true;
	return false;
}
///////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////

int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int n;
	cin >> n;
	string s;
	vector<int>v(n);
	set<int>st;
	set<int>st2;
	set<int>::iterator it;
	map<int, int>mp;
	for (int i = 0;i < n;i++)
	{
		cin >> v[i];
		st.insert(v[i]);
		mp[v[i]] = i + 1;
	}
	cin >> s;
	for (int i = 1;i <= (2*n);i++)
	{
		if (s[i-1] == '0')
		{
			st2.insert(*st.begin());

			cout << mp[*st.begin()]<<" ";
			st.erase(*st.begin());
		}
		else
		{
			it = st2.end();
			it--;
			cout << mp[*it] << " ";
			st2.erase(it);
		}
	}
	cout << endl;
	//system("pause");
	return 0;
}