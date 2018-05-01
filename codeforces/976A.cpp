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

///////////////////////////////////////////////////////////
int main()
{
	//fast();
	//freopen("keys.in", "r", stdin);
	int n;
	cin >> n;
	string s;
	cin >> s;
	int co = 0,co2=0;
	for (int i = 0;i < n;i++)
	{
		if (s[i] == '0')
			co++;
		else co2++;
	}
	if (co2 >= 1)
	{
		cout << "1";
		for (int i = 0;i < co;i++)
			cout << "0";
	}
	else
	{
		cout << "0";
	}
//	system("pause");
	return 0;
}