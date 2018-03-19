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
	int n;
	while (cin >> n&&n)
	{
		vector<int>corner;
		vector<int>potencies(1<<n,0);
		int fin = 0;
		for (int i = 0; i < (1 << n); i++)
		{
			int x;
			cin >> x;
			corner.push_back(x);
		}
		for (int i = 0; i < (1 << n); i++)
		{
			for (int j = 0; j < n; j++)
			{
				potencies[i] += (corner[i ^ (1 << j)]);
			}
		}
		for (int i = 0; i < (1 << n); i++)
		{
			for (int j = 0; j < n; j++)
			{
				fin = max(fin, potencies[i] + potencies[i ^ (1 << j)]);
			}
		}
		cout << fin << endl;

	}
	///system("pause");
	return 0;
}