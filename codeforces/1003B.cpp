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
double area(int x1, int y1, int x2, int y2, int x3, int y3)
{
	return abs((x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) / 2.0);
}
int arr[1000];
/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int a, b, x;
	cin >> a >> b >> x;
	string s = "";
	if (a >= b)s += '0', a--;
	else s += '1',b--;
	while (x > 1)
	{
			if (s[s.size() - 1] == '0')
			{
				s += '1';
				b--;
			}
			else
			{
				s += '0';
				a--;
			}	
		x--;
	}

		if (s[s.size() - 1] == '0')
		{
			while (a--)
			{
				s += '0';
			}
			while (b--)
				s += '1';
		}
		else
		{
			while (b--)
				s += '1';
			while (a--)
			{
				s += '0';
			}
		}
	
	cout << s << endl;
//	system("pause");
	return 0;
}