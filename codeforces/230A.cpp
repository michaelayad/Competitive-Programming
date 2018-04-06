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
int main()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);


	//freopen("keys.in", "r", stdin);\\
		
	map<int, int>mp;
	int s,n;
	cin >> s >> n;

	while (n--)
	{
		int x, y;
		cin >> x >> y;
		mp[x] += y;
	}
	map<int, int>::iterator it;
	for (it = mp.begin(); it != mp.end(); it++)
	{
		if (s <= it->first)
		{
			cout << "NO" << endl;
			return 0;
		}
		else
			s += it->second;


	}
	cout << "YES" << endl;





	//system("pause");
	return 0;
}
/*
jesus help me.......
jesus help me.......
jesus help me.......
*/