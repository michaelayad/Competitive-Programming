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
#include<set>
#include<fstream>
#include<bitset>
using namespace std;

int pos(char c)
{
	if (c == 'M')
		return 1;
	else if (c == 'A')
		return 2;
	else if (c == 'R')
		return 3;
	else if (c == 'G')
		return 4;
	else if (c == 'I')
		return 5; 
	else if (c == 'T')
		return 6;
	else
		return 0;
 
}
/////////////////////////////////////////////////////////////////
vector<int>a = { 0, 1, 3, 2, 1, 1, 1 }, b(7, 0);
 
int main()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
 
 
	//freopen("keys.in", "r", stdin);
 
	int n;
	cin >> n;
	while (n--){
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++)
		{
			b[pos(s[i])]++;
		}
		int mn = INT_MAX;
		for (int i = 1; i <= 6; i++)
		{
			int x = b[i] / a[i];
			if (x < mn)
				mn = x;
		}
		cout << mn << endl;;
		b = vector<int>(7, 0);
	}
/////////	system("pause");
 
	return 0;
}