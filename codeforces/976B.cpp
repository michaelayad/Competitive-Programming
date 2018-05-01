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

//jesus help me.......
void fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
}

///////////////////////////////////////////////////////////
int main()
{
	//fast();
	//freopen("keys.in", "r", stdin);
	long long n, m, k;
	cin >> n >> m >> k;
	if (k < n)
	{
		cout << k + 1 << " " << 1;
	}
	else
	{
		k = k - n;
		long long s = k / (m - 1);
		if (s % 2 == 0)
		{
			long long md = k % (m - 1);
			cout << n - s << " " << md + 2 << endl;
		}
		else
		{
			long long md = k % (m - 1);
			cout << n - s << " " << m - md << endl;
		}

	}
//	system("pause");
	return 0;
}