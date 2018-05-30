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
bool raw[8], diag1[17], diag2[17];
int res[8];
int a, b;
int co;
void backtrack(int m)
{
	if (m == 8)
	{
		if (co<9)
		cout << " " << ++co << "     ";
		else
			cout << ++co << "     ";

		for (int i = 0;i < 8;i++)
			cout << " " << res[i] + 1;
		cout << endl;
		return;
	}
	if (m == b)backtrack(m + 1);
	else {
		for (int i = 0;i < 8;i++)
		{
			if (!raw[i] && !diag1[m - i + 7] && !diag2[m + i])
			{
				raw[i] = true;
				diag1[m - i + 7] = true;
				diag2[m + i] = true;
				res[m] = i;
				backtrack(m + 1);
				raw[i] = false;
				diag1[m - i + 7] = false;
				diag2[m + i] = false;
			}

		}

	}
}
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int t;
	cin >> t;
	int c = 0;
	while (t--)
	{
		memset(raw, 0, sizeof(raw));
		memset(diag1, 0, sizeof(diag1));
		memset(diag2, 0, sizeof(diag2));
		co = 0;
		cin >> a >> b;
		a -= 1, b -= 1;
		raw[a] = true, diag1[b - a + 7] = true, diag2[a + b] = true;
		res[b] = a;
		if(c)
			cout << endl;
		cout << "SOLN       COLUMN" << endl;
		cout << " #      1 2 3 4 5 6 7 8" << endl;
		cout << endl;
		backtrack(0);
		c++;
	}
	system("pause");
	return 0;
}
