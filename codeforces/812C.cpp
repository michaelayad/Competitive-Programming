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

	long long n, m;
	cin >> n >> m;
	vector<long long>v(n);
	vector<long long>v2(n);

	for (int i = 0; i < n; i++)
		cin >> v[i];
	//sort(v.begin(), v.end());

	long long s = 0, e = n - 1, md;
	long long sum = 0, x = 0;
	while (s <= e)
	{
		md = s + (e - s) / 2;
		
		for (int i = 0; i < n; i++)
		{
			v2[i] = (v[i] + ((i + 1)*(md + 1)));
		}
		sort(v2.begin(), v2.end());
		for (int i = 1; i <= md; i++)
		{
			v2[i] += v2[i - 1];
		}
		
		if (v2[md] <= m)
		{
			s = md + 1;
			sum = v2[md];
			x = md + 1;
		}
		else
			e = md - 1;
	}
	cout << x << " " << sum << endl;

	//system("pause");
	return 0;
}