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
	int n, k;
	cin >> n >> k;
	int s = 1, e = n;
	int ans=INT_MAX;
	while (s <= e)
	{
		int md = s + (e - s) / 2;
		int sum = 0;
		int z = md;
		while (z)
		{
			sum += z;
			z /= k;
		}
		if (sum == n)
		{
			ans = min(ans,md);
			break;
		}
		else if (sum < n)
		{
			s = md + 1;
		}
		else
		{
			ans = min(ans, md);
			e = md - 1;
		}
	}
	cout << ans << endl;
///	system("pause");
	return 0;
}