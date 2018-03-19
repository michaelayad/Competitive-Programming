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
#include<set>
#include<fstream>
using namespace std;
//********************************************************************************************
//******************************************************************************************** 
/*
jesus help me.......
*/
typedef long long lld;
typedef char c;
 
 
bool prime(int x)
{
	if (x == 1)
		return false;
	else if (x == 2)
		return true;
	for (int i = 2; i*i <= x; i++)
	{
		if (x%i == 0)
			return false;
 
	}
	return true;
}
bool AreDoubleSame(double dFirstVal, double dSecondVal)
{
	return fabs(dFirstVal - dSecondVal) < numeric_limits<double>::epsilon();
}
 
 
/*
jesus help me.......
jesus help me.......
jesus help me.......
*/
 
 
 
int binarySearch(int arr[], int l, int r, int x)
{
	while (l <= r)
	{
		int m = l + (r - l) / 2;
 
		if (arr[m] == x)
			return m;
 
		if (arr[m] < x)
			l = m + 1;
 
		else
			r = m - 1;
	}
 
	return -1;
 
}
 
struct MyStruct
{
	int a;
	int b;
 
 
};
 
 
 
bool sortbysec(const pair<int, string> &a,const pair<int, string> &b)
{
	return (a.first > b.first);
}
 
 
int main()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
 
 
	//freopen("keys.in", "r", stdin);
	int t;
	cin >> t;
	while (t--){
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		if ((a == b&&c == d) || (a == c&&b == d) || (a == d&&b == c))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
 
	///////////////////system("pause");
	return 0;
}
/*
jesus help me.......
jesus help me.......
jesus help me.......
*/ 