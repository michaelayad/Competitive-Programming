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
	for (int q = 1;q <= t;q++)
	{
		int n;string s;
		cin >> n >> s;
		int i = 0;
		int fin = 0;
		while (i < n)
		{
			if (s[i] == '.')
			{
				fin++;
				i += 2;
			}
			i++;
		}
		cout << "Case " << q << ": " << fin << endl;
	}
	system("pause");
	return 0;
}