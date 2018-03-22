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
	int n, m;
	cin >> n >> m;
	map<string, long long> mp;
	for (int i = 0; i < n; i++)
	{
		string s;
		long long x;
		cin >> s >> x;
		mp[s] = x;
	}
	cin.ignore();
	string st;
	long long tot = 0;
	while (m&&getline(cin, st))
	{
		if (st[0] == '.')
		{
			cout << tot << endl;
			tot = 0;
			m--;
		}
		istringstream ss(st);
		string s;
		while (ss >> s)
		{
			tot += mp[s];
		}


	}

	//system("pause");
	return 0;
}