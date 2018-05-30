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
int ra, ca, rb, cb;
long long mt1[101][101], mt2[101][101];
///////////////////////////////////////////////////
void fun(int i,int j)
{
	if (i == ra&&j == cb)
		return;
	if (j == cb)
	{
		cout << endl;
		fun(i + 1, 0);
	}
	long long sum = 0;
	for (int ii = 0, jj = 0;ii < ca, jj < rb;ii++, jj++)
	{
		
			sum += (mt1[i][ii] * mt2[jj][j]);
	}
	cout << sum << " ";

}
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	double x, y;
	cin >> x >> y;
	double a=y*log(x) - x*log(y);
		if (a<0)
			cout << "<" << endl;
		else if(a>0)
			cout << ">" << endl;
			else
				cout << "=" << endl;
			
	
	//system("pause");
	return 0;
}