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
double area(int x1, int y1, int x2, int y2, int x3, int y3)
{
	return abs((x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) / 2.0);
}
int arr[1000];
/////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int n,k;
	cin >> n >> k;
	vector<double>v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	double mx_avr = -1.0;
	for (int i = 0; i <= n - k; i++)
	{
		double sum = 0.0;
		int j = 0;
		for (j = i; j < i+k; j++)
		{
			sum += v[j];
		}
		double avr = sum / k;
		mx_avr = max(avr, mx_avr);
		int m = 1;
		for (j; j < n; j++)
		{
			sum += v[j];
			double avr = sum / (k + m);
			mx_avr = max(avr, mx_avr);
			m++;
		}
	}
	cout << setprecision(15) << fixed << mx_avr << endl;
//	system("pause");
	return 0;
}