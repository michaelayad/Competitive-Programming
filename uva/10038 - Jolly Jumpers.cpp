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
	string str;
	int n;
	while (cin>>n)
	{
		stringstream ss(str);
		vector<int>v(n);
		vector<int>v2;
		set<int>st;
		set<int>::iterator it;
		int a;
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		bool b = true;
		for (int i = 0; i < n-1; i++)
		{
			int c = abs(v[i] - v[i + 1]);
			v2.push_back(c);
		}
		sort(v2.begin(), v2.end());
		for (int i = 0; i < v2.size(); i++)
		{
				if (v2[i] !=i+1)
					b = false;
		}
		if (b)
			cout << "Jolly" << endl;
		else
			cout << "Not jolly" << endl;
 
	}
/////	system("pause");
	return 0;
}
/*
jesus help me.......
jesus help me.......
jesus help me.......
*/