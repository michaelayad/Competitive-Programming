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
	int n,a,b;
	cin >> n>>a>>b;
	string s;
	cin >> s;
	int m = 0;
	for (int i = 0;i < n&&(a||b);i++)
	{
		if (s[i] == '.') {
			if (i == 0)
			{
				if (a >= b)
				{
					m++;a--;
					s[i] = 'A';
				}
				else
				{
					m++;b--;
					s[i] = 'B';
				}
			}
			else
			{
				if (a >= b)
				{
					if (s[i - 1] != 'A')
					{
						m++, a--;
						s[i] = 'A';
					}
					else
					{
						if (b) {
							m++;b--;
							s[i] = 'B';
						}
					}
				}
				else
				{
					if (s[i - 1] != 'B')
					{
						m++, b--;
						s[i] = 'B';
					}
					else
					{
						if (a) {
							m++;a--;
							s[i] = 'A';
						}
					}
				}
			}
		}
	}
	cout << m << endl;

//	system("pause");
	return 0;
}