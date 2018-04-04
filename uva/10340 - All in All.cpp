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

bool solve(string s,string t)
{
	int n=0;
	int i = 0;
	for (int j = 0; j < s.size(); j++)
		for ( i ; i < t.size(); i++)	if (s[j] == t[i]){ n++;	i++; break; }
	
	if (n == s.size())
		return 1;
	else
		return 0;
}

int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	string s,t;
	while (cin >> s >> t)
	{
		if (solve(s, t))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;

	}
	
	
	system("pause");
	return 0;
}