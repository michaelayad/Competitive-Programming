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
		while (cin >> n)
		{
			if (n == 0)
				break;
			int k;
			long long sum = 0;
			multiset< long long> st;
			multiset < long long> ::iterator it;
			while (n--)
			{
				cin >> k;
				while (k--)
				{
					long long x;
					cin >> x;
					st.insert(x);
				}
				it = st.begin();
				long long min = *it;
				st.erase(st.begin());
				it = st.end();
				it--;
				long long max = *it;
				st.erase(it);
				sum += (max - min);
			}
			cout << sum << endl;
 
		}
 
 
//	system("pause");
	return 0;
}
/*
jesus help me.......
jesus help me.......
jesus help me.......
*/