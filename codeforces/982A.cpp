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
	string s;
	cin >> n >> s;
	char c = s[0];
	bool b = true;
	if (n == 1 && s[0] == '0')
	{
		cout << "No" << endl;
		return 0;
	}
	for (int i = 0;i < n - 1;i++)
	{
		if (s[i] == s[i + 1] && s[i] == '1')
		{
			cout << "No" << endl;
			
			return 0;
		}
		if (s[i] == s[i + 1] && s[i] == '0'&& (i == 0 || i == (n - 2)))
		{
			cout << "No" << endl;
			return 0;
		}
		if (s[i] == s[i + 1] && s[i] == '0'&&i != 0)
		{
			if (b == false)
			{
				cout << "No" << endl;
				return 0;
			}
			b = false;
		}
		else
		{
			b = true;
		}

	}

	cout << "Yes" << endl;
	//system("pause");
	return 0;
}