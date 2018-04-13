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
bool solve(int a,int b,int c)
{
	bool o = false;
	for (int i = -100;i <= 100&&!o;i++)
	{
		for (int j = i+1;j <= 100&&!o;j++)
		{
			for (int z = j+1;z <= 100 && !o;z++)
			{
				if (i + j + z == a&&i*j*z == b && (i*i + j*j + z*z) == c)
				{
					cout << i << " " << j << " " << z << endl;
					o = true;
				}
			}
		}
	}
	return o;
}

//////////////////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int t;
	cin >> t;
	while (t--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if (!solve( a, b, c))cout << "No solution." << endl;
	}
	system("pause");
	return 0;
}