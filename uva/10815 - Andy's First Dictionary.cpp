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
 
int main()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
 
 
	//freopen("keys.in", "r", stdin);
 
	string s;
	set<string>st;
	set<string>::iterator it;
	while (getline(cin, s))
	{
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i]<'A' || (s[i] > 'Z'&&s[i]<'a') || s[i]>'z')
				s[i] = ' ';
			if (s[i] >= 'A'&&s[i] <= 'Z')
				s[i] += 32;
		}
		istringstream ss(s);
		string s2;
		while (ss >> s2)
		{
			st.insert(s2);
		}
 
 
	}
	for (it = st.begin(); it != st.end(); it++)
	{
		cout << *it << endl;
	}
 
//	system("pause");
 
	return 0;
}