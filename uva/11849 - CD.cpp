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
	//freopen("keys.in", "r", stdin);
	int n,m;
	while (cin >> n>>m&&n&&m)
	{
		set<int>st;
		for (int i = 0; i < (n + m); i++)
		{
			int x;
			cin >> x;
			st.insert(x);
		}
		
			cout << (n + m) - st.size() << endl;
	

	}
	//system("pause");
	return 0;
}