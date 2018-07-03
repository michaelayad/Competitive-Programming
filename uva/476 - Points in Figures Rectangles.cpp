//#define _CRT_SECURE_NO_WARNINGS
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
#include <cstring>
using namespace std;
const double EPS = 1e-8;
//jesus help me.......
void fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
}
///////////////////////////////////////////////////////////////		
///////////////////////////////////////////////////////////
bool sortby(const pair<int, int>&a, const pair<int, int>&b)
{
	if (a.first >= b.first&&a.second >= b.second)
		return true;
	return false;
}
//////////////////////////////////////////////////

/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	char c;
	double x1[20],y1[20],x2[20],y2[20];
	int i = 0;
	while (cin >> c&&c != '*')
	{
		cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
		i++;
	}
	double x, y;
	int k = 1;
	while (cin >> x >> y&&x != 9999.9&&y != 9999.9	)
	{
		bool b = false;
		for (int j = 0; j < i; j++)
		{
			if (x > x1[j] && x < x2[j] && y > y2[j] && y < y1[j])
			{
				b = true;
				cout << "Point "<<k<<" is contained in figure "<<j+1 << endl;
			}
		}
		if (!b)
			cout << "Point " << k << " is not contained in any figure" << endl;
		k++;
	}



	//system("pause");
	return 0;
}