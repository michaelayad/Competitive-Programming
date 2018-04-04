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
	while (cin >> n >> m)
	{
		vector<int>v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];
		int l = 0, r = 1;
		int f = INT_MAX;
		int sum = v[l];

		while (l < r&&f!=1)
		{
			
			while (sum < m&&r<n)
			{
				sum += v[r];
				r++;
				
			}
			if (sum >= m){
				f = min(f, r - l);

			}
			sum -= v[l];
			l++;
			
			
		}
		if (f == INT_MAX)
			cout << 0 << endl;
		else
			cout << f << endl;

	}
	
	
	system("pause");
	return 0;
}