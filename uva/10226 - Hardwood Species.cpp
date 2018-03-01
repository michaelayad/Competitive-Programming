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
 
 
	int n;
	cin >> n;
	string q;
	getline(cin, q);
	getline(cin, q);
 
 
	while (n--)
	{
 
		string s;
		int num=0;
		map<string, double>mp;
		while (getline(cin, s))
		{ 
 
			if (s.length()== 0)
				break;
			num++;
			mp[s]++;
 
		}
		map<string, double>::iterator it;
		for (it = mp.begin(); it != mp.end(); it++)
		{
			string st = it->first;
			double d = it->second;
			cout << st << " ";
			cout << setprecision(4) << fixed << (d / num) * 100.0 << endl;
		}							   
		if (n > 0)
			cout << endl;
 
	}
 
 
	//system("pause");
	return 0;
}
/*
jesus help me.......
jesus help me.......
jesus help me.......
*/