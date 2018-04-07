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
	int a=0, b=0, c=0;
	string s;
	cin >> s;
	bool bb = true;
	for (int i = 1;i < s.size();i++)
	{
		if (s[i] < s[i - 1])
			bb = false;

	}
	for (int i = 0;i < s.size();i++)
	{
		if (s[i] == 'a')
			a++;
		if (s[i] == 'b')
			b++;
		if (s[i] == 'c')
			c++;
	}
	if (!bb)
	{
		cout << "NO" << endl;
		return 0;
	}
	if (a!=0&&b!=0&&(c == a || c == b))
	{
		cout << "YES" << endl;
		return 0;
	}
	cout << "NO" << endl;
	
	
	return 0;
}