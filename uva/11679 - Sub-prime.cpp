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
//********************************************************************************************
//******************************************************************************************** 
/*
jesus help me.......
*/
 
 
 
bool sortbysec(const pair<char, int> &a, const pair<char, int> &b)
{
	return (a.second > b.second);
}
////////////////////////////////////////////////////////////////////
 
/////////////////////////////////////////////////////////////////
 
 
int main()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
 
 
	//freopen("keys.in", "r", stdin);
	int b, n;
	while (cin >> b >> n && (b&&n))
	{
		vector<int>v(b, 0);
		for (int i = 0; i < b; i++)
			cin >> v[i];
		for (int i = 0; i < n; i++)
		{
			int l, r, m;
			cin >> l >> r >> m;
			v[l - 1] -= m;
			v[r - 1] += m;
		}
		bool bo = true;
		for (int i = 0; i < b; i++)
		{
			if (v[i] < 0)
			{
				bo = false;
				break;
			}
		}
		if (bo)
			cout << "S" << endl;
		else
			cout << "N" << endl;
 
	}
 
	///system("pause");
 
	return 0;
}