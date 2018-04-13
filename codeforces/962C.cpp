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

int vis[30];
int fin = 100;
void check(int m,string s)
{
	int j = 0;
	int sum = 0;
	int del = 0;
	bool b = true;
	for (int i = m - 1;i >= 0;i--)
	{
		if (vis[i])
		{
			if (s[i] == '0')
				b = false;
			else
				b = true;
			sum += (((s[i] - '0') % 10)*pow(10, j));
			j++;
		}
		else
		{
			del++;
		}
	}
	int sq = sqrt(sum);
	if (sum == (sq*sq) && sum&&b)
	{
		fin = min(fin, del);
	}
	
}
void fun(int i,int m,string s)
{
	if (i == m)
	{
		check(m,s);
		return;
	}
	vis[i] = 1;
	fun(i + 1,m,s);
	vis[i] = 0;
	fun(i + 1,m,s);
}


int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	string s;
	cin >> s;
	int n = s.size();
	fun(0,n,s);
	if (fin == 100)
		cout << -1 << endl;
	else
		cout << fin << endl;
///	system("pause");
	return 0;
}