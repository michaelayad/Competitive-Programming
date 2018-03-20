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
	while (cin >> n&&n)
	{
		int x,m;
		while (cin >> x){

			if (x == 0)
			{
				cout << endl;
				break;
			}
			deque<int>de;
			deque<int>ne;
			m = n;
			m--;
			de.push_back(x);
			while (m--)
			{
				cin >> x;
				de.push_back(x);
			}
			bool b = true;
			for (int i = 1; i <= n; i++)
			{
				if (i == de[0])
					de.pop_front();
				else
				{
					while (!ne.empty() && de[0] == ne[0]){
							de.pop_front();
							ne.pop_front();
						
					}
					ne.push_front(i);
				}
			}
			for (int i = 0; i < ne.size(); i++)
			{
				if (ne[i] != de[i])
				{
					b = 0;
					break;
				}
			}
			if (b)
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
			m = n;
			de.clear();
			ne.clear();
		}

	}
	//////system("pause");
	return 0;
}