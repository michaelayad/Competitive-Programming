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
	int t;
	cin >> t;
	int m = 1;
	while (t--){
		int n, p, q;
		cin >> n >> p >> q;
		int sum = 0,pp=0;
		vector<int>v(n);
		for (int i = 0; i < n; i++)
		{
			int x;			cin >> v[i];
		}
		while (sum<=q&&pp<=p)
		{
			sum += v[pp];
			pp++;
		}
		if (pp > n)
			cout << "Case " << m << ": " << n << endl;

		else
			cout << "Case " << m << ": " << pp - 1 << endl;
		m++;
	}
	
	//system("pause");
	return 0;
}