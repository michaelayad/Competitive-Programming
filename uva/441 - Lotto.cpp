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





bool sortbysec(const pair<int, char> &a, const pair<int , char> &b)
{
	return (a.first > b.first);
}	
////////////////////////////////////////////////////////////////////
int n;	int ans[6];
/////////////////////////////////////////////////////////////////////
void fun(int a, int b, vector<int>v)
{
	if (a == 6)
	{
		cout << ans[0];
		for (int i = 1; i < 6; i++)
			cout << " " << ans[i];
		cout << endl;
	}
	else
	{
		for (; b < n; b++)
		{
			ans[a] = v[b];
			fun(a + 1, b + 1, v);

		}


	}

}
/////////////////////////////////////////////////////////////////////
int main()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);


	//freopen("keys.in", "r", stdin);
	int a = 0;
	while (cin >> n)
	{
		if (n == 0)
			break;
		if (n != 0 && a != 0)
			cout << endl;
		vector<int>v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];

		fun(0, 0, v);
		a++;
		
	}
//////////	system("pause");


	return 0;
}
/*
jesus help me.......
jesus help me.......
jesus help me.......
*/