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
	int t;
	cin >> t;
	while (t--)
	{
		int p;
		cin >> p;
		vector<vector<int>>v(p + 1, vector<int>());
		int mn = INT_MAX;
		cin.ignore();
		for (int i = 0;i < p;i++)
		{
			
			string s;
			getline(cin, s);
			istringstream iss(s);
			int a, co = 0;
			while (iss >> a)
			{
				co++;
			}
			v[co].push_back(i + 1);
			mn = min(mn, co);
		}
		cout << v[mn][0];
		for (int i = 1;i < v[mn].size();i++)
		{
			cout << " " << v[mn][i];
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
