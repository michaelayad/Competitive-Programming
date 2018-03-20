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
	while (cin >> n&&n)
	{
		vector<string>s(n);
		vector<pair<int, int>>v(n);
		int B = INT_MAX,tot=0;
		cin.ignore();
		for (int i = 0; i < n; i++)
		{
			string s1;
			getline(cin, s1);
			s[i] = s1;
			int num = 0;
			for (int j = 0; j < 25; j++)
			{
				if (s[i][j] == 'X')
				{
					num++;
				}
			}
			v[i].first = num;
			v[i].second = 25 - num;
			B = min(B, v[i].second);
		}
		for (int i = 0; i < n; i++)
		{
			tot += (v[i].second - B);
		}
		cout << tot << endl;

	}
	///system("pause");
	return 0;
}