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
//////////////////////////////////////////////////

/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int n, d;
	cin >> n >> d;
	vector<int>v(n),v2;
	for (int i = 0; i < n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	set<int>st;
	for (int i = 0; i < n; i++)
	{
		v2.push_back(v[i] - d);
		v2.push_back(v[i] + d);
	}
	for (int i = 0; i < v2.size(); i++)
	{
		bool b = true;
		for (int j = 0; j < n; j++)
		{
			if (abs(v[j] - v2[i]) < d)
				b = false;
		}
		if (b)
			st.insert(v2[i]);
	}
	cout << st.size() << endl;
/////////////	system("pause");
	return 0;
}