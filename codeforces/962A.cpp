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
	cin >> n;
	vector<long long>v(n);
	long long sum = 0, sum2 = 0;
	for (int i = 0;i < n;i++)
	{
		cin >> v[i];
		sum += v[i];
	}
	for (int i = 0;i < n;i++)
	{
		sum2 += v[i];
		if (sum % 2 == 0)
		{
			if (sum2 >= (sum/2))
			{
				cout << i + 1 << endl;
				return 0;
			}
		}
		else
		{
			if ( sum2 >= ((sum / 2)+1))
			{
				cout << i + 1 << endl;
				return 0;
			}
		}
	}


//	system("pause");
	return 0;
}