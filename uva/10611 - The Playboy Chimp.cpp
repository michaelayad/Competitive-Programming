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

int n;
vector<int>v;
int b_s_l_b(int x,int s,int e)
{
	int ans=0;
	while (s <= e)
	{
		int md = s + (e - s) / 2;
		if (v[md] < x)
		{
			ans = md;
			s = md + 1;
		}
		else if (v[md] > x)
		{
			e = md - 1;
		}
		else
		{
			ans = md;
			e = md - 1;
		}
	}
	return ans;
}
int b_s_u_b(int x, int s, int e)
{
	int md;
	int ans = n - 1;
	while (s < e)
	{
		md = s + (e - s) / 2;
		if (v[md] < x)
		{
			s = md + 1;
		}
		else if (v[md]>x)
		{
			ans = md;
			e = md - 1;
		}
		else
		{
			ans = md;
			s = md + 1;
		}
	}
	return s;
}

int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	
	cin >> n;
	v=vector<int>(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	int q;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		int x;
		cin >> x;
		int z = b_s_l_b(x, 0, n - 1);
		if (v[z] >= x)
		{
			if (z == 0)
				cout << "X ";
			else
				cout << v[z - 1] << " ";
		}
		else
			cout << v[z] << " ";
		int y = b_s_u_b(x, 0, n - 1);
		if (v[y] <= x)
		{
			if (y == n - 1)
				cout << "X" << endl;
			else
				cout << v[y + 1] << endl;
		}
		else
			cout << v[y] << endl;
	

	}

	///system("pause");
	return 0;
}