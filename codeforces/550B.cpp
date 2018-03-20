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
	int n, l, r, x;
	cin >> n >> l >> r >> x;
	vector<int>v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	int z = 0,way=0;
	for (int i = 1; i < (1 << n); i++)
	{
		int total = 0, mn = INT_MAX, mx = 0;
		if (i == (1 << z))
		{
			z++;
			continue;
		}
		int j = i,m=0;
		while (j)
		{
			if (j & 1)
			{
				total += v[m];
				mn = min(mn, v[m]);
				mx = max(mx, v[m]);
			}
			m++;
			j = j >> 1;
		}
		if ((total >= l&&total <= r) && (mx - mn) >= x)
		{
			way++;
		}


	}
	cout << way << endl;
	////system("pause");
	return 0;
}