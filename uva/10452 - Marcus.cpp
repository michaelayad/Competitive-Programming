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





bool sortbysec(const pair<int, char> &a, const pair<int, char> &b)
{
	return (a.first > b.first);
}
////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////
long long sum1(int n, long long a)
{
	if (n == 0)
		return 1;
	return 	a*sum1(n - 1, a + 1);


}
////////////////////////////////////////////////////////////////////
int arr[10];
void fun(int a, int b, int m, int n, vector<vector<char>>v, int i, string s)
{
	if (a < 0 || b < 0 || a >= m || b >= n )
		return;
	if (v[a][b] != s[i])
		return;
	if (s[i] == '#')
	{
		for (int j = 0; j < i; j++)
		{
			if (j)
				cout << " ";
			if (arr[j] == 1)
				cout << "forth";
			else if (arr[j]==2)
				cout << "left";
			else
				cout << "right";

		}
		cout << endl;
		return;
	}

	arr[i] = 1;
	fun(a - 1, b, m, n, v, i + 1, s);
	arr[i] = 2;
	fun(a, b-1, m, n, v, i + 1, s);
	arr[i] = 3;
	fun(a, b+1, m, n, v, i + 1, s);






}
////////////////////////////////////////////////////////////////////

int main()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);


	//freopen("keys.in", "r", stdin);
	int t;
	cin >> t;
	while (t--){
		int m, n;
		cin >> m >> n;
		vector<vector<char>>v(m, vector<char>(n));
		int a, b;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> v[i][j];
				if (v[i][j] == '@')
				{
					a = i; b = j;
				}
			}

		}

		fun(a, b, m, n, v, 0, "@IEHOVA#");


	}




////////	system("pause");


	return 0;
}
