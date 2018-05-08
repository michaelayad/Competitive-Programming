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
///////////////////////////////////////////////////////////////		
///////////////////////////////////////////////////////////
bool sortby(const pair<int, int>&a, const pair<int, int>&b)
{
	if (a.first >= b.first&&a.second >= b.second)
		return true;
	return false;
}
///////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////

int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	priority_queue<pair<pair<int, int>, int>>p;
	string s;
	while (cin >> s&&s != "#") 
	{
		int q, b;
		cin >> q >> b;
		p.push(make_pair(make_pair(-b, -q), -b));
	}
	int k;cin >> k;
	while (k--)
	{
		auto t = p.top();
		p.pop();
		cout << -t.first.second << endl;
		t.first.first += t.second;
		p.push(t);
	}

	system("pause");
	return 0;
}