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
	int n, m;
	cin >> n >> m;
	vector<int>v(n);
	vector<int>v2(m);
	map<int, int>mp;
	long long sum = 0;
	for (int i = 0;i < n;i++)
	{
		cin >> v[i];
	}
	for (int i = 0;i < m;i++)
	{
		int x;
		cin >> x;
		mp[x] = 1;
	}
	int j = 0;
	for (int i = 0;i < n;i++)
	{
		if (mp[i + 1]==1)
		{
			v2[j] = v[i];
			j++;
		}
		else
		{
			sum += v[i];
		}
	}
	sort(v2.begin(), v2.end());
	for (int i =  m - 1;i >= 0;i--)
	{
		if (sum >= v2[i])
			sum += sum;
		else
			sum += v2[i];
	}
	cout << sum << endl;
	system("pause");
	return 0;
}