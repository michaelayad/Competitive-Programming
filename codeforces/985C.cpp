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
int w[20002];
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	long long n, k, l;
	cin >> n >> k >> l;
	vector<long long>v(n*k);
	for (int i = 0;i < (n*k);i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	long long h = n - 1;
	if ((v[h] - v[0]) > l&&n!=1)
	{
		cout << 0 << endl;
		return 0;
	}
	for (h; h < n*k;h++)
	{
		if ((v[h] - v[0]) > l)
		{
			break;
		}
	}
	h--;
	long long sum = 0;
	int j = 0,i=0;
	while (i < n)
	{
		if (h - j >= n - i)
			sum += v[j], j += k;
		else
			break;
		i++;
	}
	for (int g = n - 1;g >= i;g--)
		sum += v[h--];
	cout << sum << endl;
//////////////	system("pause");
	return 0;
}