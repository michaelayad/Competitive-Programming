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

 
 
bool sortbysec(const pair<int, pair<int, int>> &a, const pair<int, pair<int, int>> &b)
{
	return (a.second.first > b.second.first);
}
 
 
int main()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
 
 
	//freopen("keys.in", "r", stdin);
	int t;
	cin >> t;
	while (t--)
	{
		string name;
		int n, m, p;
		map<string, int>mp;
		set<pair<int,string>>st;
		set<pair<int,string>>::iterator it;
		cin.ignore();
		getline(cin, name);
 
		cin >> n >> m >> p;
		while (n--)
		{
			string s;
			int x;
			cin >> s >> x;
			mp[s] = x;
		}
		while (m--)
		{
			string secname;
			cin.ignore();
			getline(cin, secname);
			int a;
			cin >> a;
			int tot = 0;
			while (a--)
			{
				string s2;
				int num;
				cin >> s2 >> num;
				tot += (num*mp[s2]);
			}
			if (tot <= p)
			{
				pair<int, string>pp;
				pp.first = tot;
				pp.second = secname;
				st.insert(pp);
 
			}
		}
		for (int i = 0; i < name.size(); i++)
		{
			if (name[i] >= 97 && name[i] <= 122)
				name[i] -= 32;
		}
		cout << name << endl;
		if (st.size() == 0)
		{
			cout << "Too expensive!" << endl;
		}
		else
		{
			for (it = st.begin(); it != st.end(); it++)
			{
				cout << it->second << endl;
			}
		}
		cout << endl;
 
 
	}
 
 
//	system("pause");
	return 0;
}
/*
jesus help me.......
jesus help me.......
jesus help me.......
*/