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


int main()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);


	//freopen("keys.in", "r", stdin);
	int n;
	while (cin >> n&&n)
	{
		deque<int>de,de1;
		for (int i = 1; i <= n; i++)
			de.push_back(i);
		int m = 0;
		while (de.size() > 1)
		{
			if (m %2 == 0)
			{
				de1.push_back(de[0]);
				de.pop_front();
			}
			else
			{
				int x = de[0];
				de.pop_front();
				de.push_back(x);
			}
			m++;
		}
		if (de1.size()>=1)
			cout << "Discarded cards: "<<de1[0];
		else
			cout << "Discarded cards:" ;

		for (int i = 1; i < de1.size(); i++)
		{
			cout << ", " << de1[i];
		}
		cout << endl;
		cout << "Remaining card: " << de[0] << endl;
	}

	///system("pause");
	return 0;
}