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
	int n;while (cin >> n&&n){	multiset<int>se; multiset<int>::iterator it; int x; for (int i = 0; i < n; i++){ cin >> x;	se.insert(x); }	  it = se.begin(); cout << *it; it++;for (it; it != se.end(); it++){	cout << " "<<*it ;	}cout << "\n";}

	///system("pause");
	return 0;
}