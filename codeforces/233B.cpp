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
#include <cstring>
using namespace std;

//jesus help me.......
void fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
}
///////////////////////////////////////////////////////////////		
bool sortby(const pair<char, int>&a, const pair<char, int>&b)
{
	if (a.second == b.second)
		return a.first < b.first;
	 return a.second > b.second;
}
///////////////////////////////////////////////////////////////
long long n;
////////////////////////////////////////////////////////////
long long s(long long x)
{
	int sum = 0;
	while (x)
	{
		sum += (x % 10);
		x /= 10;
	}
	return sum;
}
//////////////////////////////////////////////////////////////
long long solve(long long n)
{
	long long x = sqrt(n);
	long long y  = 1;
	y = max(y, x - 10000);
	for (y; y <= x;y++)
	{
		if (y*y + s(y)*y == n)
			return y;
	}
	return -1;
}
//////////////////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	
	cin >> n;
	cout << solve(n) << endl;
	
	system("pause");
	return 0;
}