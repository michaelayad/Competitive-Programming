//  #define _CRT_SECURE_NO_WARNINGS
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
#include<set>
#include<fstream>
#include<bitset>
using namespace std;
//********************************************************************************************
//******************************************************************************************** 
/*
jesus help me.......
*/
typedef long long lld;
typedef char c;



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





bool sortbysec(const pair<char, int> &a, const pair<char, int> &b)
{
	return (a.second > b.second);
}
////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
int main()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);


	//freopen("keys.in", "r", stdin);
	
	int n;
	cin >> n;
	vector<long long>v(n);
	vector<long long>v2(n + 1);
	vector<long long>v3(n + 1);
	v2[0] = 0;
	v3[0] = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		v2[i+1] = v2[i ] + v[i];
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++)	v3[i+1] = v3[i] + v[i];
	int m;
	cin >> m;
	while (m--)
	{
		int t, a, b;
		cin >> t >> a >> b;
		if (t == 1)
			cout << v2[b] - v2[a - 1] << endl;
		else
			cout << v3[b] - v3[a - 1] << endl;

	}

///	system("pause");

	return 0;
}