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
	int t;
	cin >> t;
	while (t--){
		int n, m;
		cin >> n >> m;
		vector<int>v(n);
		bool b = false;
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		for (int i = 0; i < (1 << n); i++)
		{
			int j = i, z = 0,sum = 0;
			while (j)
			{
				if (j & 1)
				{
					sum += v[z];
				}

				j=j>>1;

				if (j == 0)
					break;
				z++;
			}
			if (sum == m)
			{
				b = true;
				break;
			}

		}
		if (b)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;

	}
	//system("pause");
	return 0;
}