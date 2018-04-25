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

//jesus help me.......
void fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
}
///////////////////////////////////////////////////////////////		

///////////////////////////////////////////////////////////
int vis[17], arr[17] = {1};
bool prime(int n)
{
	if (n == 2 || n == 1)
		return true;
	for (int i = 2;i <= sqrt(n);i++)
		if (n%i == 0)
			return false;
	return true;
}
///////////////////////////////////////////////////////////
void print(int n)
{
	for (int i = 1;i < n;i++)
		cout << " "<<arr[i] ;
	cout << endl;
}
void fun(int i,int n)
{
	if (i == n)
	{
		if (!prime(arr[n - 1] + 1))
			return;
			
		cout << "1";
		print(n);
		return;
	}
	
	for (int j = 2; j <= n;j++)
	{
		if (!vis[j] &&prime(j + arr[i-1]))
		{
			vis[j] = 1;
			arr[i] = j;
			fun(i + 1, n);
			vis[j] = 0;
		}
	}
}
///////////////////////////////////////////////////////////
int main()
{
	//fast();
	//freopen("keys.in", "r", stdin);
	
	int n,m=0;
	while (cin >> n)
	{
		if (m++)
			cout << endl;
		memset(vis, 0, sizeof(vis));
		cout << "Case "<<m<<":" << endl;
		fun(1, n);
		
	}
	system("pause");
	return 0;
}