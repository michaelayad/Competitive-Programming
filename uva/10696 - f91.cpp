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
#include <cstring>
using namespace std;

//jesus help me.......
void fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
}
///////////////////////////////////////////////////////////////		
bool sortby(const pair<char, int>&a, const pair<char, int>&b)
{
	if (a.second == b.second)
		return a.first < b.first;
	 return a.second > b.second;
}
///////////////////////////////////////////////////////////////
int f91(int n)
{
	if (n > 100)
		return n - 10;
	f91(f91(n +11));
}
//////////////////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int n;
	while (cin >> n&&n)
	{
		cout << "f91("<<n<<") = "<<f91(n) << endl;
	}
	system("pause");
	return 0;
}