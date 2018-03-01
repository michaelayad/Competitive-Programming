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
using namespace std;
//********************************************************************************************
//******************************************************************************************** 
/*
jesus help me.......
*/

 
 
int main()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
 
 
	//freopen("keys.in", "r", stdin);
 
	int n, m, a;
	while (cin >> n >> m >> a)
	{
		if (n == 0 && m == 0 && a == 0)
			break;
		map<pair<int, int>, int>mp;
		int multi = n*m;
		while (a--)
		{
			int x1, x2, y1, y2;
			cin >> x1 >> y1 >> x2 >> y2;
			if (x2 < x1)
			{
				swap(x2, x1);
			}
			if (y2 < y1)
			{
				swap(y1, y2);
			}
			for (int i = x1; i <= x2; i++)
			{
				for (int j = y1; j <= y2; j++)
				{
					pair<int, int>p;
					p.first = i;
					p.second = j;
					mp[p]++;
				}
			}
 
 
		}
		int tot = mp.size();
		int z =multi - tot;
		if (z == 0)
			cout << "There is no empty spots." << endl;
		else if (z == 1)
			cout << "There is one empty spot." << endl;
		else
			cout << "There are "<<z<<" empty spots." << endl;
 
		string s;
		getline(cin, s);
 
 
 
	}
 
//	system("pause");
	return 0;
}
/*
jesus help me.......
jesus help me.......
jesus help me.......
*/