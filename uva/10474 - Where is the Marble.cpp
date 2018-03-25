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

vector<int>v;
int n, m;
int b_s(int x, int s, int e)
{
	
	int md;
	while (s < e)
	{
		md = s + (e - s) / 2;
		if (v[md] < x)
			s = md + 1;
		else if (v[md] > x)
			e = md - 1;
		else
			e = md;
	}
	md = s + (e - s) / 2;
	if (e == md&&v[md] == x)
		return md + 1;
	else
		return -1;
}
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int z = 1;
	while (cin >> n >> m && (n != 0 && m != 0))
	{
		v = vector<int>(n);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];

		}
		sort(v.begin(), v.end());
		cout << "CASE# "<< z<<":"<< endl;
		for (int i = 0; i < m; i++)
		{
			int x;
			cin >> x;
			int y = b_s(x, 0, n - 1);
			if ( y== -1)
			{
				cout << x << " not found" << endl;
			}
			else
			{
				cout << x << " found at "<<y << endl;

			}
			

		}
		z++;
	}


	//////system("pause");
	return 0;
}