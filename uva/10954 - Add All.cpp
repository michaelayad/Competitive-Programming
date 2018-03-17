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

//jesus help me.......
void fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
}

int main()
{
	fast();
	int n;
	while (cin >> n&&n)
	{
		multiset<int>st;
		multiset<int>::iterator it;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			st.insert(x);
		}
		long long sum=0;
		while (st.size() >= 2)
		{
			it = st.begin();
			int x, y;
			x = *it;
			it++;
			y = *it;
			st.erase(it);
			it = st.begin();
			st.erase(it);
			
				st.insert(x+y);
			sum += (x + y);
			
		}
		cout << sum << endl;


	}

	//freopen("keys.in", "r", stdin);
	

	//system("pause");
	return 0;
}