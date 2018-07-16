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
bool arr[10000000], arr2[10000000];
/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	//don't open standing
	memset(arr, true, sizeof(arr));
	memset(arr2, true, sizeof(arr2));
	arr[0] = 0;
	int i = 2,j=0;
	vector<int>is_prime(10000000);
	while (i<20000000)
	{
		is_prime[j++] = i;
		int h = i * 2;
		while (h<20000000)
		{
			if (h <= 10000000){
				arr[h - 1] = 0;
			}
			else
			{
				arr2[(h % 10000000) - 1] = 0;
			}
			h += i;
		}
		i++;
		while (i<=10000000&&arr[i-1]==0)
		{
			i++;
		}
		while (i > 10000000 && arr2[(i % 10000000) - 1] == 0)
		{
			i++;
		}
	}
	vector<pair<int, int>>v(100000);
	 j = 0;
	for (int i = 1; i < 10000000&&j<100000; i++)
	{
		if ((is_prime[i] - is_prime[i - 1]) == 2)
			v[j++] = make_pair(is_prime[i - 1], is_prime[i]);
	}
	int t;
	while (cin >> t)
	{
		cout << "(" << v[t - 1].first << ", " << v[t - 1].second << ")" << endl;
	}
	system("pause");
	return 0;
}