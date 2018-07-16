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

/////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	//don't open standing
	//don't open standing
	//don't open standing
	//don't open standing
	int n;
	cin >> n;
	while (n--)
	{
		long long l, r;
		cin >> l >> r;
		long long mx = -1, mx_num = 0;
		for (long long i = l; i <= r; i++)
		{
			long long co = 0;
			long long j = 1;
			for (; j*j < i; j++)
			{
				if (i%j == 0)
					co += 2;
			}
			if (j*j == i)co++;
			if (mx < co)
				mx = co, mx_num = i;
		}
		cout << "Between "<<l<<" and "<<r<<", "<<mx_num<<" has a maximum of "<<mx<<" divisors." << endl;

		
	}
	system("pause");
	return 0;
	//don't open standing
	//don't open standing
	//don't open standing
	//don't open standing
	//don't open standing
	//don't open standing
}