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
int fun(int n)
{
	
	if (n <=1)
		return 1;
	if (n % 2 == 0)
		return 1 + fun(n / 2);
	return 1 + fun(3 * n + 1);
}
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int i, j;
	while (cin >> i >> j)
	{
		int m = 0;
		int n = i, t = j;
		if (i > j)
			swap(i, j);
		for (i;i <= j;i++)
		{
			m = max(m, fun(i));
		}
		cout << n << " " << t << " " << m << endl;
	}
	system("pause");
	return 0;
}