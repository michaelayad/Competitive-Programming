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
	int n;
	while (cin >> n)
	{
		map<string, int>mp;
		map<string, int>::iterator it;
		queue<int>q;
		priority_queue<int>p;
		stack<int>st;
		mp["queue"] = 0;
		mp["stack"] = 0;
		mp["priority queue"] = 0;
		int m = 0;
		for (int i = 0; i < n; i++)
		{
			int x, y;
			cin >> x >> y;
			if (x == 1)
			{
				q.push(y);
				st.push(y);
				p.push(y);
			}
			else
			{
				if (!q.empty())
				{
					if (q.front() == y)
					{
						mp["queue"]++;
						q.pop();
					}
				}
				if (!p.empty())
				{
					if (p.top()==y
						)
					{
						mp["priority queue"]++;
						p.pop();
					}
				}
				if (!st.empty())
				{
					if (st.top() == y)
					{
						mp["stack"] ++;
						st.pop();
					}
				}
				m++;
			}
		}
		int v = 0;
		for (auto it : mp)
		{
			if (it.second == m)
				v++;
		}
		if (v == 0)
		{
			cout << "impossible" << endl;
		}
		else if (v > 1)
		{
			cout << "not sure" << endl;
		}
		else
		{
			for (auto it : mp)
			{
				if (it.second == m)
				{
					cout << it.first << endl;
					break;
				}
			}
		}
		
	}
	

	//system("pause");
	return 0;
}