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
		int a = n, b = n;
		bool b0 = 1;
		for (int i = 0; i <= 31; i++)
		{
			if ((n >> i)&1)
			{ 
				if (b0)
					b = b & ~(1 << i);
				else
					a = a & ~(1 << i);
				b0 = !b0;
			}
			

		}
		cout << a << " " << b << endl;
	}

	system("pause");
	return 0;
}