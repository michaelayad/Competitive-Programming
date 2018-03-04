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
#include<set>
#include<fstream>
#include<bitset>
using namespace std;
//********************************************************************************************
//******************************************************************************************** 
/*
jesus help me.......
*/



bool sortbysec(const pair<char, int> &a, const pair<char, int> &b)
{
	return (a.second > b.second);
}
////////////////////////////////////////////////////////////////////


int main()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);


	//freopen("keys.in", "r", stdin);
	int n;
	while (cin >> n&&n)
	{
		vector<int>v(n+1), v2(n+1);
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				int x;
				cin >> x;
				if (x == 1)
				{
					v[i]++;
					v2[j]++;
				}
			}
		}
		int ai, mi = 0;
		for (int i = 1; i <= n; i++)
		{
			if (v[i] % 2 == 1)
			{
				mi++;
				ai = i;
			}
		}
		int aj, mj = 0;
		for (int j = 1; j <= n; j++)
		{
			if (v2[j] % 2 == 1)
			{
				mj++;
				aj = j;
			}
		}
		if (mi == mj&&mj == 0)
		{
			cout << "OK" << endl;
		}
		else if (mi == mj&&mj == 1)
		{
			cout << "Change bit (" << ai << "," << aj << ")" << endl;
		}
		else
		{
			cout << "Corrupt" << endl;
		}

	}

	//system("pause");
	return 0;
}